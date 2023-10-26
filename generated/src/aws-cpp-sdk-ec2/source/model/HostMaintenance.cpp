/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/HostMaintenance.h>
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
      namespace HostMaintenanceMapper
      {

        static const int on_HASH = HashingUtils::HashString("on");
        static const int off_HASH = HashingUtils::HashString("off");


        HostMaintenance GetHostMaintenanceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == on_HASH)
          {
            return HostMaintenance::on;
          }
          else if (hashCode == off_HASH)
          {
            return HostMaintenance::off;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HostMaintenance>(hashCode);
          }

          return HostMaintenance::NOT_SET;
        }

        Aws::String GetNameForHostMaintenance(HostMaintenance enumValue)
        {
          switch(enumValue)
          {
          case HostMaintenance::NOT_SET:
            return {};
          case HostMaintenance::on:
            return "on";
          case HostMaintenance::off:
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

      } // namespace HostMaintenanceMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
