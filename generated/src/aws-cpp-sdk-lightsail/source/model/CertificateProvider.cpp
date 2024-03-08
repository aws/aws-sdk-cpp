/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/CertificateProvider.h>
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
      namespace CertificateProviderMapper
      {

        static const int LetsEncrypt_HASH = HashingUtils::HashString("LetsEncrypt");


        CertificateProvider GetCertificateProviderForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LetsEncrypt_HASH)
          {
            return CertificateProvider::LetsEncrypt;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CertificateProvider>(hashCode);
          }

          return CertificateProvider::NOT_SET;
        }

        Aws::String GetNameForCertificateProvider(CertificateProvider enumValue)
        {
          switch(enumValue)
          {
          case CertificateProvider::NOT_SET:
            return {};
          case CertificateProvider::LetsEncrypt:
            return "LetsEncrypt";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CertificateProviderMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
