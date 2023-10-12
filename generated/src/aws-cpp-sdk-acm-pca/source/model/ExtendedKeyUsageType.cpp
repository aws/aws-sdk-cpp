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

        static constexpr uint32_t SERVER_AUTH_HASH = ConstExprHashingUtils::HashString("SERVER_AUTH");
        static constexpr uint32_t CLIENT_AUTH_HASH = ConstExprHashingUtils::HashString("CLIENT_AUTH");
        static constexpr uint32_t CODE_SIGNING_HASH = ConstExprHashingUtils::HashString("CODE_SIGNING");
        static constexpr uint32_t EMAIL_PROTECTION_HASH = ConstExprHashingUtils::HashString("EMAIL_PROTECTION");
        static constexpr uint32_t TIME_STAMPING_HASH = ConstExprHashingUtils::HashString("TIME_STAMPING");
        static constexpr uint32_t OCSP_SIGNING_HASH = ConstExprHashingUtils::HashString("OCSP_SIGNING");
        static constexpr uint32_t SMART_CARD_LOGIN_HASH = ConstExprHashingUtils::HashString("SMART_CARD_LOGIN");
        static constexpr uint32_t DOCUMENT_SIGNING_HASH = ConstExprHashingUtils::HashString("DOCUMENT_SIGNING");
        static constexpr uint32_t CERTIFICATE_TRANSPARENCY_HASH = ConstExprHashingUtils::HashString("CERTIFICATE_TRANSPARENCY");


        ExtendedKeyUsageType GetExtendedKeyUsageTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
