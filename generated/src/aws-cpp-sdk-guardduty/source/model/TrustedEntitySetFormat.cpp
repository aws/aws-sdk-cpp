/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/TrustedEntitySetFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GuardDuty
  {
    namespace Model
    {
      namespace TrustedEntitySetFormatMapper
      {

        static const int TXT_HASH = HashingUtils::HashString("TXT");
        static const int STIX_HASH = HashingUtils::HashString("STIX");
        static const int OTX_CSV_HASH = HashingUtils::HashString("OTX_CSV");
        static const int ALIEN_VAULT_HASH = HashingUtils::HashString("ALIEN_VAULT");
        static const int PROOF_POINT_HASH = HashingUtils::HashString("PROOF_POINT");
        static const int FIRE_EYE_HASH = HashingUtils::HashString("FIRE_EYE");


        TrustedEntitySetFormat GetTrustedEntitySetFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TXT_HASH)
          {
            return TrustedEntitySetFormat::TXT;
          }
          else if (hashCode == STIX_HASH)
          {
            return TrustedEntitySetFormat::STIX;
          }
          else if (hashCode == OTX_CSV_HASH)
          {
            return TrustedEntitySetFormat::OTX_CSV;
          }
          else if (hashCode == ALIEN_VAULT_HASH)
          {
            return TrustedEntitySetFormat::ALIEN_VAULT;
          }
          else if (hashCode == PROOF_POINT_HASH)
          {
            return TrustedEntitySetFormat::PROOF_POINT;
          }
          else if (hashCode == FIRE_EYE_HASH)
          {
            return TrustedEntitySetFormat::FIRE_EYE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrustedEntitySetFormat>(hashCode);
          }

          return TrustedEntitySetFormat::NOT_SET;
        }

        Aws::String GetNameForTrustedEntitySetFormat(TrustedEntitySetFormat enumValue)
        {
          switch(enumValue)
          {
          case TrustedEntitySetFormat::NOT_SET:
            return {};
          case TrustedEntitySetFormat::TXT:
            return "TXT";
          case TrustedEntitySetFormat::STIX:
            return "STIX";
          case TrustedEntitySetFormat::OTX_CSV:
            return "OTX_CSV";
          case TrustedEntitySetFormat::ALIEN_VAULT:
            return "ALIEN_VAULT";
          case TrustedEntitySetFormat::PROOF_POINT:
            return "PROOF_POINT";
          case TrustedEntitySetFormat::FIRE_EYE:
            return "FIRE_EYE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrustedEntitySetFormatMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
