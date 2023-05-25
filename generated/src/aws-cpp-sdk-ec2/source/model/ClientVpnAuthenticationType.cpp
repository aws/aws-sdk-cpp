/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ClientVpnAuthenticationType.h>
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
      namespace ClientVpnAuthenticationTypeMapper
      {

        static const int certificate_authentication_HASH = HashingUtils::HashString("certificate-authentication");
        static const int directory_service_authentication_HASH = HashingUtils::HashString("directory-service-authentication");
        static const int federated_authentication_HASH = HashingUtils::HashString("federated-authentication");


        ClientVpnAuthenticationType GetClientVpnAuthenticationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == certificate_authentication_HASH)
          {
            return ClientVpnAuthenticationType::certificate_authentication;
          }
          else if (hashCode == directory_service_authentication_HASH)
          {
            return ClientVpnAuthenticationType::directory_service_authentication;
          }
          else if (hashCode == federated_authentication_HASH)
          {
            return ClientVpnAuthenticationType::federated_authentication;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClientVpnAuthenticationType>(hashCode);
          }

          return ClientVpnAuthenticationType::NOT_SET;
        }

        Aws::String GetNameForClientVpnAuthenticationType(ClientVpnAuthenticationType enumValue)
        {
          switch(enumValue)
          {
          case ClientVpnAuthenticationType::certificate_authentication:
            return "certificate-authentication";
          case ClientVpnAuthenticationType::directory_service_authentication:
            return "directory-service-authentication";
          case ClientVpnAuthenticationType::federated_authentication:
            return "federated-authentication";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClientVpnAuthenticationTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
