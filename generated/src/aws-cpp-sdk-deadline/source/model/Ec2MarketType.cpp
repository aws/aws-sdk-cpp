/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/Ec2MarketType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace deadline
  {
    namespace Model
    {
      namespace Ec2MarketTypeMapper
      {

        static const int on_demand_HASH = HashingUtils::HashString("on-demand");
        static const int spot_HASH = HashingUtils::HashString("spot");
        static const int wait_and_save_HASH = HashingUtils::HashString("wait-and-save");


        Ec2MarketType GetEc2MarketTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == on_demand_HASH)
          {
            return Ec2MarketType::on_demand;
          }
          else if (hashCode == spot_HASH)
          {
            return Ec2MarketType::spot;
          }
          else if (hashCode == wait_and_save_HASH)
          {
            return Ec2MarketType::wait_and_save;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Ec2MarketType>(hashCode);
          }

          return Ec2MarketType::NOT_SET;
        }

        Aws::String GetNameForEc2MarketType(Ec2MarketType enumValue)
        {
          switch(enumValue)
          {
          case Ec2MarketType::NOT_SET:
            return {};
          case Ec2MarketType::on_demand:
            return "on-demand";
          case Ec2MarketType::spot:
            return "spot";
          case Ec2MarketType::wait_and_save:
            return "wait-and-save";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Ec2MarketTypeMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
