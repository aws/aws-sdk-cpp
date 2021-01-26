/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/KeyUsageName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ACM
  {
    namespace Model
    {
      namespace KeyUsageNameMapper
      {

        static const int DIGITAL_SIGNATURE_HASH = HashingUtils::HashString("DIGITAL_SIGNATURE");
        static const int NON_REPUDIATION_HASH = HashingUtils::HashString("NON_REPUDIATION");
        static const int KEY_ENCIPHERMENT_HASH = HashingUtils::HashString("KEY_ENCIPHERMENT");
        static const int DATA_ENCIPHERMENT_HASH = HashingUtils::HashString("DATA_ENCIPHERMENT");
        static const int KEY_AGREEMENT_HASH = HashingUtils::HashString("KEY_AGREEMENT");
        static const int CERTIFICATE_SIGNING_HASH = HashingUtils::HashString("CERTIFICATE_SIGNING");
        static const int CRL_SIGNING_HASH = HashingUtils::HashString("CRL_SIGNING");
        static const int ENCIPHER_ONLY_HASH = HashingUtils::HashString("ENCIPHER_ONLY");
        static const int DECIPHER_ONLY_HASH = HashingUtils::HashString("DECIPHER_ONLY");
        static const int ANY_HASH = HashingUtils::HashString("ANY");
        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");


        KeyUsageName GetKeyUsageNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DIGITAL_SIGNATURE_HASH)
          {
            return KeyUsageName::DIGITAL_SIGNATURE;
          }
          else if (hashCode == NON_REPUDIATION_HASH)
          {
            return KeyUsageName::NON_REPUDIATION;
          }
          else if (hashCode == KEY_ENCIPHERMENT_HASH)
          {
            return KeyUsageName::KEY_ENCIPHERMENT;
          }
          else if (hashCode == DATA_ENCIPHERMENT_HASH)
          {
            return KeyUsageName::DATA_ENCIPHERMENT;
          }
          else if (hashCode == KEY_AGREEMENT_HASH)
          {
            return KeyUsageName::KEY_AGREEMENT;
          }
          else if (hashCode == CERTIFICATE_SIGNING_HASH)
          {
            return KeyUsageName::CERTIFICATE_SIGNING;
          }
          else if (hashCode == CRL_SIGNING_HASH)
          {
            return KeyUsageName::CRL_SIGNING;
          }
          else if (hashCode == ENCIPHER_ONLY_HASH)
          {
            return KeyUsageName::ENCIPHER_ONLY;
          }
          else if (hashCode == DECIPHER_ONLY_HASH)
          {
            return KeyUsageName::DECIPHER_ONLY;
          }
          else if (hashCode == ANY_HASH)
          {
            return KeyUsageName::ANY;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return KeyUsageName::CUSTOM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KeyUsageName>(hashCode);
          }

          return KeyUsageName::NOT_SET;
        }

        Aws::String GetNameForKeyUsageName(KeyUsageName enumValue)
        {
          switch(enumValue)
          {
          case KeyUsageName::DIGITAL_SIGNATURE:
            return "DIGITAL_SIGNATURE";
          case KeyUsageName::NON_REPUDIATION:
            return "NON_REPUDIATION";
          case KeyUsageName::KEY_ENCIPHERMENT:
            return "KEY_ENCIPHERMENT";
          case KeyUsageName::DATA_ENCIPHERMENT:
            return "DATA_ENCIPHERMENT";
          case KeyUsageName::KEY_AGREEMENT:
            return "KEY_AGREEMENT";
          case KeyUsageName::CERTIFICATE_SIGNING:
            return "CERTIFICATE_SIGNING";
          case KeyUsageName::CRL_SIGNING:
            return "CRL_SIGNING";
          case KeyUsageName::ENCIPHER_ONLY:
            return "ENCIPHER_ONLY";
          case KeyUsageName::DECIPHER_ONLY:
            return "DECIPHER_ONLY";
          case KeyUsageName::ANY:
            return "ANY";
          case KeyUsageName::CUSTOM:
            return "CUSTOM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KeyUsageNameMapper
    } // namespace Model
  } // namespace ACM
} // namespace Aws
