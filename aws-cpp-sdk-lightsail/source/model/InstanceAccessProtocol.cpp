/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/InstanceAccessProtocol.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace InstanceAccessProtocolMapper
      {

        static const int ssh_HASH = HashingUtils::HashString("ssh");
        static const int rdp_HASH = HashingUtils::HashString("rdp");


        InstanceAccessProtocol GetInstanceAccessProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ssh_HASH)
          {
            return InstanceAccessProtocol::ssh;
          }
          else if (hashCode == rdp_HASH)
          {
            return InstanceAccessProtocol::rdp;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceAccessProtocol>(hashCode);
          }

          return InstanceAccessProtocol::NOT_SET;
        }

        Aws::String GetNameForInstanceAccessProtocol(InstanceAccessProtocol enumValue)
        {
          switch(enumValue)
          {
          case InstanceAccessProtocol::ssh:
            return "ssh";
          case InstanceAccessProtocol::rdp:
            return "rdp";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceAccessProtocolMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
