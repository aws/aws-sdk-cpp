/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotdeviceadvisor/model/AuthenticationMethod.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTDeviceAdvisor
  {
    namespace Model
    {
      namespace AuthenticationMethodMapper
      {

        static const int X509ClientCertificate_HASH = HashingUtils::HashString("X509ClientCertificate");
        static const int SignatureVersion4_HASH = HashingUtils::HashString("SignatureVersion4");


        AuthenticationMethod GetAuthenticationMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == X509ClientCertificate_HASH)
          {
            return AuthenticationMethod::X509ClientCertificate;
          }
          else if (hashCode == SignatureVersion4_HASH)
          {
            return AuthenticationMethod::SignatureVersion4;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthenticationMethod>(hashCode);
          }

          return AuthenticationMethod::NOT_SET;
        }

        Aws::String GetNameForAuthenticationMethod(AuthenticationMethod enumValue)
        {
          switch(enumValue)
          {
          case AuthenticationMethod::NOT_SET:
            return {};
          case AuthenticationMethod::X509ClientCertificate:
            return "X509ClientCertificate";
          case AuthenticationMethod::SignatureVersion4:
            return "SignatureVersion4";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthenticationMethodMapper
    } // namespace Model
  } // namespace IoTDeviceAdvisor
} // namespace Aws
