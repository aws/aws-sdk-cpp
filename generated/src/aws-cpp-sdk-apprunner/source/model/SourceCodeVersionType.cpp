/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/SourceCodeVersionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppRunner
  {
    namespace Model
    {
      namespace SourceCodeVersionTypeMapper
      {

        static constexpr uint32_t BRANCH_HASH = ConstExprHashingUtils::HashString("BRANCH");


        SourceCodeVersionType GetSourceCodeVersionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BRANCH_HASH)
          {
            return SourceCodeVersionType::BRANCH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SourceCodeVersionType>(hashCode);
          }

          return SourceCodeVersionType::NOT_SET;
        }

        Aws::String GetNameForSourceCodeVersionType(SourceCodeVersionType enumValue)
        {
          switch(enumValue)
          {
          case SourceCodeVersionType::NOT_SET:
            return {};
          case SourceCodeVersionType::BRANCH:
            return "BRANCH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SourceCodeVersionTypeMapper
    } // namespace Model
  } // namespace AppRunner
} // namespace Aws
