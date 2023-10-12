/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/UsageClassType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace UsageClassTypeMapper
      {

        static constexpr uint32_t spot_HASH = ConstExprHashingUtils::HashString("spot");
        static constexpr uint32_t on_demand_HASH = ConstExprHashingUtils::HashString("on-demand");


        UsageClassType GetUsageClassTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == spot_HASH)
          {
            return UsageClassType::spot;
          }
          else if (hashCode == on_demand_HASH)
          {
            return UsageClassType::on_demand;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UsageClassType>(hashCode);
          }

          return UsageClassType::NOT_SET;
        }

        Aws::String GetNameForUsageClassType(UsageClassType enumValue)
        {
          switch(enumValue)
          {
          case UsageClassType::NOT_SET:
            return {};
          case UsageClassType::spot:
            return "spot";
          case UsageClassType::on_demand:
            return "on-demand";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UsageClassTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
