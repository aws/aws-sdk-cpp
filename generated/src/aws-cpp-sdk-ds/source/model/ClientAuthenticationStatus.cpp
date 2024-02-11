/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/ClientAuthenticationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectoryService
  {
    namespace Model
    {
      namespace ClientAuthenticationStatusMapper
      {

        static const int Enabled_HASH = HashingUtils::HashString("Enabled");
        static const int Disabled_HASH = HashingUtils::HashString("Disabled");


        ClientAuthenticationStatus GetClientAuthenticationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Enabled_HASH)
          {
            return ClientAuthenticationStatus::Enabled;
          }
          else if (hashCode == Disabled_HASH)
          {
            return ClientAuthenticationStatus::Disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClientAuthenticationStatus>(hashCode);
          }

          return ClientAuthenticationStatus::NOT_SET;
        }

        Aws::String GetNameForClientAuthenticationStatus(ClientAuthenticationStatus enumValue)
        {
          switch(enumValue)
          {
          case ClientAuthenticationStatus::NOT_SET:
            return {};
          case ClientAuthenticationStatus::Enabled:
            return "Enabled";
          case ClientAuthenticationStatus::Disabled:
            return "Disabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClientAuthenticationStatusMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
