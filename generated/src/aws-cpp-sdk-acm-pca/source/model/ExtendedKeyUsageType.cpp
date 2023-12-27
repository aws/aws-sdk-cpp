/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/ExtendedKeyUsageType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ACMPCA
  {
    namespace Model
    {
      namespace ExtendedKeyUsageTypeMapper
      {

        static const int SERVER_AUTH_HASH = HashingUtils::HashString("SERVER_AUTH");
        static const int CLIENT_AUTH_HASH = HashingUtils::HashString("CLIENT_AUTH");
        static const int CODE_SIGNING_HASH = HashingUtils::HashString("CODE_SIGNING");
        static const int EMAIL_PROTECTION_HASH = HashingUtils::HashString("EMAIL_PROTECTION");
        static const int TIME_STAMPING_HASH = HashingUtils::HashString("TIME_STAMPING");
        static const int OCSP_SIGNING_HASH = HashingUtils::HashString("OCSP_SIGNING");
        static const int SMART_CARD_LOGIN_HASH = HashingUtils::HashString("SMART_CARD_LOGIN");
        static const int DOCUMENT_SIGNING_HASH = HashingUtils::HashString("DOCUMENT_SIGNING");
        static const int CERTIFICATE_TRANSPARENCY_HASH = HashingUtils::HashString("CERTIFICATE_TRANSPARENCY");


        ExtendedKeyUsageType GetExtendedKeyUsageTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SERVER_AUTH_HASH)
          {
            return ExtendedKeyUsageType::SERVER_AUTH;
          }
          else if (hashCode == CLIENT_AUTH_HASH)
          {
            return ExtendedKeyUsageType::CLIENT_AUTH;
          }
          else if (hashCode == CODE_SIGNING_HASH)
          {
            return ExtendedKeyUsageType::CODE_SIGNING;
          }
          else if (hashCode == EMAIL_PROTECTION_HASH)
          {
            return ExtendedKeyUsageType::EMAIL_PROTECTION;
          }
          else if (hashCode == TIME_STAMPING_HASH)
          {
            return ExtendedKeyUsageType::TIME_STAMPING;
          }
          else if (hashCode == OCSP_SIGNING_HASH)
          {
            return ExtendedKeyUsageType::OCSP_SIGNING;
          }
          else if (hashCode == SMART_CARD_LOGIN_HASH)
          {
            return ExtendedKeyUsageType::SMART_CARD_LOGIN;
          }
          else if (hashCode == DOCUMENT_SIGNING_HASH)
          {
            return ExtendedKeyUsageType::DOCUMENT_SIGNING;
          }
          else if (hashCode == CERTIFICATE_TRANSPARENCY_HASH)
          {
            return ExtendedKeyUsageType::CERTIFICATE_TRANSPARENCY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExtendedKeyUsageType>(hashCode);
          }

          return ExtendedKeyUsageType::NOT_SET;
        }

        Aws::String GetNameForExtendedKeyUsageType(ExtendedKeyUsageType enumValue)
        {
          switch(enumValue)
          {
          case ExtendedKeyUsageType::NOT_SET:
            return {};
          case ExtendedKeyUsageType::SERVER_AUTH:
            return "SERVER_AUTH";
          case ExtendedKeyUsageType::CLIENT_AUTH:
            return "CLIENT_AUTH";
          case ExtendedKeyUsageType::CODE_SIGNING:
            return "CODE_SIGNING";
          case ExtendedKeyUsageType::EMAIL_PROTECTION:
            return "EMAIL_PROTECTION";
          case ExtendedKeyUsageType::TIME_STAMPING:
            return "TIME_STAMPING";
          case ExtendedKeyUsageType::OCSP_SIGNING:
            return "OCSP_SIGNING";
          case ExtendedKeyUsageType::SMART_CARD_LOGIN:
            return "SMART_CARD_LOGIN";
          case ExtendedKeyUsageType::DOCUMENT_SIGNING:
            return "DOCUMENT_SIGNING";
          case ExtendedKeyUsageType::CERTIFICATE_TRANSPARENCY:
            return "CERTIFICATE_TRANSPARENCY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExtendedKeyUsageTypeMapper
    } // namespace Model
  } // namespace ACMPCA
} // namespace Aws
