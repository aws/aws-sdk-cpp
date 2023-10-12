/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AutoPlacement.h>
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
      namespace AutoPlacementMapper
      {

        static constexpr uint32_t on_HASH = ConstExprHashingUtils::HashString("on");
        static constexpr uint32_t off_HASH = ConstExprHashingUtils::HashString("off");


        AutoPlacement GetAutoPlacementForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == on_HASH)
          {
            return AutoPlacement::on;
          }
          else if (hashCode == off_HASH)
          {
            return AutoPlacement::off;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoPlacement>(hashCode);
          }

          return AutoPlacement::NOT_SET;
        }

        Aws::String GetNameForAutoPlacement(AutoPlacement enumValue)
        {
          switch(enumValue)
          {
          case AutoPlacement::NOT_SET:
            return {};
          case AutoPlacement::on:
            return "on";
          case AutoPlacement::off:
            return "off";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoPlacementMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
