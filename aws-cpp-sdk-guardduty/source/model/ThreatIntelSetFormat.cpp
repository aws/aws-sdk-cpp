/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

        static const int TXT_HASH = HashingUtils::HashString("TXT");
        static const int STIX_HASH = HashingUtils::HashString("STIX");
        static const int OTX_CSV_HASH = HashingUtils::HashString("OTX_CSV");
        static const int ALIEN_VAULT_HASH = HashingUtils::HashString("ALIEN_VAULT");
        static const int PROOF_POINT_HASH = HashingUtils::HashString("PROOF_POINT");
        static const int FIRE_EYE_HASH = HashingUtils::HashString("FIRE_EYE");


        ThreatIntelSetFormat GetThreatIntelSetFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
