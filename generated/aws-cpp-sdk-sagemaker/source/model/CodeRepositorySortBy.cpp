/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CodeRepositorySortBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace CodeRepositorySortByMapper
      {

        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");
        static const int LastModifiedTime_HASH = HashingUtils::HashString("LastModifiedTime");


        CodeRepositorySortBy GetCodeRepositorySortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return CodeRepositorySortBy::Name;
          }
          else if (hashCode == CreationTime_HASH)
          {
            return CodeRepositorySortBy::CreationTime;
          }
          else if (hashCode == LastModifiedTime_HASH)
          {
            return CodeRepositorySortBy::LastModifiedTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CodeRepositorySortBy>(hashCode);
          }

          return CodeRepositorySortBy::NOT_SET;
        }

        Aws::String GetNameForCodeRepositorySortBy(CodeRepositorySortBy enumValue)
        {
          switch(enumValue)
          {
          case CodeRepositorySortBy::Name:
            return "Name";
          case CodeRepositorySortBy::CreationTime:
            return "CreationTime";
          case CodeRepositorySortBy::LastModifiedTime:
            return "LastModifiedTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CodeRepositorySortByMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
