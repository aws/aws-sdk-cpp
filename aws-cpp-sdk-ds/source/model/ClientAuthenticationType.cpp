/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/ClientAuthenticationType.h>
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
      namespace ClientAuthenticationTypeMapper
      {

        static const int SmartCard_HASH = HashingUtils::HashString("SmartCard");


        ClientAuthenticationType GetClientAuthenticationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SmartCard_HASH)
          {
            return ClientAuthenticationType::SmartCard;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClientAuthenticationType>(hashCode);
          }

          return ClientAuthenticationType::NOT_SET;
        }

        Aws::String GetNameForClientAuthenticationType(ClientAuthenticationType enumValue)
        {
          switch(enumValue)
          {
          case ClientAuthenticationType::SmartCard:
            return "SmartCard";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClientAuthenticationTypeMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
