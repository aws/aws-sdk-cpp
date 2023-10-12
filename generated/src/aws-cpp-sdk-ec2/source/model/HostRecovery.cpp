/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/HostRecovery.h>
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
      namespace HostRecoveryMapper
      {

        static constexpr uint32_t on_HASH = ConstExprHashingUtils::HashString("on");
        static constexpr uint32_t off_HASH = ConstExprHashingUtils::HashString("off");


        HostRecovery GetHostRecoveryForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == on_HASH)
          {
            return HostRecovery::on;
          }
          else if (hashCode == off_HASH)
          {
            return HostRecovery::off;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HostRecovery>(hashCode);
          }

          return HostRecovery::NOT_SET;
        }

        Aws::String GetNameForHostRecovery(HostRecovery enumValue)
        {
          switch(enumValue)
          {
          case HostRecovery::NOT_SET:
            return {};
          case HostRecovery::on:
            return "on";
          case HostRecovery::off:
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

      } // namespace HostRecoveryMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
