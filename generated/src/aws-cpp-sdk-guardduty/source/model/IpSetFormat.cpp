/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/IpSetFormat.h>
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
      namespace IpSetFormatMapper
      {

        static constexpr uint32_t TXT_HASH = ConstExprHashingUtils::HashString("TXT");
        static constexpr uint32_t STIX_HASH = ConstExprHashingUtils::HashString("STIX");
        static constexpr uint32_t OTX_CSV_HASH = ConstExprHashingUtils::HashString("OTX_CSV");
        static constexpr uint32_t ALIEN_VAULT_HASH = ConstExprHashingUtils::HashString("ALIEN_VAULT");
        static constexpr uint32_t PROOF_POINT_HASH = ConstExprHashingUtils::HashString("PROOF_POINT");
        static constexpr uint32_t FIRE_EYE_HASH = ConstExprHashingUtils::HashString("FIRE_EYE");


        IpSetFormat GetIpSetFormatForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TXT_HASH)
          {
            return IpSetFormat::TXT;
          }
          else if (hashCode == STIX_HASH)
          {
            return IpSetFormat::STIX;
          }
          else if (hashCode == OTX_CSV_HASH)
          {
            return IpSetFormat::OTX_CSV;
          }
          else if (hashCode == ALIEN_VAULT_HASH)
          {
            return IpSetFormat::ALIEN_VAULT;
          }
          else if (hashCode == PROOF_POINT_HASH)
          {
            return IpSetFormat::PROOF_POINT;
          }
          else if (hashCode == FIRE_EYE_HASH)
          {
            return IpSetFormat::FIRE_EYE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IpSetFormat>(hashCode);
          }

          return IpSetFormat::NOT_SET;
        }

        Aws::String GetNameForIpSetFormat(IpSetFormat enumValue)
        {
          switch(enumValue)
          {
          case IpSetFormat::NOT_SET:
            return {};
          case IpSetFormat::TXT:
            return "TXT";
          case IpSetFormat::STIX:
            return "STIX";
          case IpSetFormat::OTX_CSV:
            return "OTX_CSV";
          case IpSetFormat::ALIEN_VAULT:
            return "ALIEN_VAULT";
          case IpSetFormat::PROOF_POINT:
            return "PROOF_POINT";
          case IpSetFormat::FIRE_EYE:
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

      } // namespace IpSetFormatMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
