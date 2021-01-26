/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListCompilationJobsSortBy.h>
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
      namespace ListCompilationJobsSortByMapper
      {

        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");
        static const int Status_HASH = HashingUtils::HashString("Status");


        ListCompilationJobsSortBy GetListCompilationJobsSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return ListCompilationJobsSortBy::Name;
          }
          else if (hashCode == CreationTime_HASH)
          {
            return ListCompilationJobsSortBy::CreationTime;
          }
          else if (hashCode == Status_HASH)
          {
            return ListCompilationJobsSortBy::Status;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListCompilationJobsSortBy>(hashCode);
          }

          return ListCompilationJobsSortBy::NOT_SET;
        }

        Aws::String GetNameForListCompilationJobsSortBy(ListCompilationJobsSortBy enumValue)
        {
          switch(enumValue)
          {
          case ListCompilationJobsSortBy::Name:
            return "Name";
          case ListCompilationJobsSortBy::CreationTime:
            return "CreationTime";
          case ListCompilationJobsSortBy::Status:
            return "Status";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListCompilationJobsSortByMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
