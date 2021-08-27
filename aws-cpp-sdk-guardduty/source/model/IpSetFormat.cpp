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

        static const int TXT_HASH = HashingUtils::HashString("TXT");
        static const int STIX_HASH = HashingUtils::HashString("STIX");
        static const int OTX_CSV_HASH = HashingUtils::HashString("OTX_CSV");
        static const int ALIEN_VAULT_HASH = HashingUtils::HashString("ALIEN_VAULT");
        static const int PROOF_POINT_HASH = HashingUtils::HashString("PROOF_POINT");
        static const int FIRE_EYE_HASH = HashingUtils::HashString("FIRE_EYE");


        IpSetFormat GetIpSetFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
