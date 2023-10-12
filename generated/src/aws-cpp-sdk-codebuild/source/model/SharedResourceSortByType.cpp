/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/SharedResourceSortByType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeBuild
  {
    namespace Model
    {
      namespace SharedResourceSortByTypeMapper
      {

        static constexpr uint32_t ARN_HASH = ConstExprHashingUtils::HashString("ARN");
        static constexpr uint32_t MODIFIED_TIME_HASH = ConstExprHashingUtils::HashString("MODIFIED_TIME");


        SharedResourceSortByType GetSharedResourceSortByTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ARN_HASH)
          {
            return SharedResourceSortByType::ARN;
          }
          else if (hashCode == MODIFIED_TIME_HASH)
          {
            return SharedResourceSortByType::MODIFIED_TIME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SharedResourceSortByType>(hashCode);
          }

          return SharedResourceSortByType::NOT_SET;
        }

        Aws::String GetNameForSharedResourceSortByType(SharedResourceSortByType enumValue)
        {
          switch(enumValue)
          {
          case SharedResourceSortByType::NOT_SET:
            return {};
          case SharedResourceSortByType::ARN:
            return "ARN";
          case SharedResourceSortByType::MODIFIED_TIME:
            return "MODIFIED_TIME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SharedResourceSortByTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
