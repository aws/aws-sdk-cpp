/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/ThreatIntelSetFormat.h>
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
      namespace ThreatIntelSetFormatMapper
      {

        static constexpr uint32_t TXT_HASH = ConstExprHashingUtils::HashString("TXT");
        static constexpr uint32_t STIX_HASH = ConstExprHashingUtils::HashString("STIX");
        static constexpr uint32_t OTX_CSV_HASH = ConstExprHashingUtils::HashString("OTX_CSV");
        static constexpr uint32_t ALIEN_VAULT_HASH = ConstExprHashingUtils::HashString("ALIEN_VAULT");
        static constexpr uint32_t PROOF_POINT_HASH = ConstExprHashingUtils::HashString("PROOF_POINT");
        static constexpr uint32_t FIRE_EYE_HASH = ConstExprHashingUtils::HashString("FIRE_EYE");


        ThreatIntelSetFormat GetThreatIntelSetFormatForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TXT_HASH)
          {
            return ThreatIntelSetFormat::TXT;
          }
          else if (hashCode == STIX_HASH)
          {
            return ThreatIntelSetFormat::STIX;
          }
          else if (hashCode == OTX_CSV_HASH)
          {
            return ThreatIntelSetFormat::OTX_CSV;
          }
          else if (hashCode == ALIEN_VAULT_HASH)
          {
            return ThreatIntelSetFormat::ALIEN_VAULT;
          }
          else if (hashCode == PROOF_POINT_HASH)
          {
            return ThreatIntelSetFormat::PROOF_POINT;
          }
          else if (hashCode == FIRE_EYE_HASH)
          {
            return ThreatIntelSetFormat::FIRE_EYE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ThreatIntelSetFormat>(hashCode);
          }

          return ThreatIntelSetFormat::NOT_SET;
        }

        Aws::String GetNameForThreatIntelSetFormat(ThreatIntelSetFormat enumValue)
        {
          switch(enumValue)
          {
          case ThreatIntelSetFormat::NOT_SET:
            return {};
          case ThreatIntelSetFormat::TXT:
            return "TXT";
          case ThreatIntelSetFormat::STIX:
            return "STIX";
          case ThreatIntelSetFormat::OTX_CSV:
            return "OTX_CSV";
          case ThreatIntelSetFormat::ALIEN_VAULT:
            return "ALIEN_VAULT";
          case ThreatIntelSetFormat::PROOF_POINT:
            return "PROOF_POINT";
          case ThreatIntelSetFormat::FIRE_EYE:
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

      } // namespace ThreatIntelSetFormatMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
