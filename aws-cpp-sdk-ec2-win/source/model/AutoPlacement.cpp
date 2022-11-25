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

        static const int on_HASH = HashingUtils::HashString("on");
        static const int off_HASH = HashingUtils::HashString("off");


        AutoPlacement GetAutoPlacementForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
