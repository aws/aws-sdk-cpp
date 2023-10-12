/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/CostAllocationTagType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostExplorer
  {
    namespace Model
    {
      namespace CostAllocationTagTypeMapper
      {

        static constexpr uint32_t AWSGenerated_HASH = ConstExprHashingUtils::HashString("AWSGenerated");
        static constexpr uint32_t UserDefined_HASH = ConstExprHashingUtils::HashString("UserDefined");


        CostAllocationTagType GetCostAllocationTagTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWSGenerated_HASH)
          {
            return CostAllocationTagType::AWSGenerated;
          }
          else if (hashCode == UserDefined_HASH)
          {
            return CostAllocationTagType::UserDefined;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CostAllocationTagType>(hashCode);
          }

          return CostAllocationTagType::NOT_SET;
        }

        Aws::String GetNameForCostAllocationTagType(CostAllocationTagType enumValue)
        {
          switch(enumValue)
          {
          case CostAllocationTagType::NOT_SET:
            return {};
          case CostAllocationTagType::AWSGenerated:
            return "AWSGenerated";
          case CostAllocationTagType::UserDefined:
            return "UserDefined";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CostAllocationTagTypeMapper
    } // namespace Model
  } // namespace CostExplorer
} // namespace Aws
