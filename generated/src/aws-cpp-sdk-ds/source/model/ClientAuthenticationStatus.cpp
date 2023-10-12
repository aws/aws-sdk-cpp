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

        static constexpr uint32_t Enabled_HASH = ConstExprHashingUtils::HashString("Enabled");
        static constexpr uint32_t Disabled_HASH = ConstExprHashingUtils::HashString("Disabled");


        ClientAuthenticationStatus GetClientAuthenticationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
