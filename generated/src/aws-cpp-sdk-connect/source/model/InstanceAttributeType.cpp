/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/InstanceAttributeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace InstanceAttributeTypeMapper
      {

        static constexpr uint32_t INBOUND_CALLS_HASH = ConstExprHashingUtils::HashString("INBOUND_CALLS");
        static constexpr uint32_t OUTBOUND_CALLS_HASH = ConstExprHashingUtils::HashString("OUTBOUND_CALLS");
        static constexpr uint32_t CONTACTFLOW_LOGS_HASH = ConstExprHashingUtils::HashString("CONTACTFLOW_LOGS");
        static constexpr uint32_t CONTACT_LENS_HASH = ConstExprHashingUtils::HashString("CONTACT_LENS");
        static constexpr uint32_t AUTO_RESOLVE_BEST_VOICES_HASH = ConstExprHashingUtils::HashString("AUTO_RESOLVE_BEST_VOICES");
        static constexpr uint32_t USE_CUSTOM_TTS_VOICES_HASH = ConstExprHashingUtils::HashString("USE_CUSTOM_TTS_VOICES");
        static constexpr uint32_t EARLY_MEDIA_HASH = ConstExprHashingUtils::HashString("EARLY_MEDIA");
        static constexpr uint32_t MULTI_PARTY_CONFERENCE_HASH = ConstExprHashingUtils::HashString("MULTI_PARTY_CONFERENCE");
        static constexpr uint32_t HIGH_VOLUME_OUTBOUND_HASH = ConstExprHashingUtils::HashString("HIGH_VOLUME_OUTBOUND");
        static constexpr uint32_t ENHANCED_CONTACT_MONITORING_HASH = ConstExprHashingUtils::HashString("ENHANCED_CONTACT_MONITORING");


        InstanceAttributeType GetInstanceAttributeTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INBOUND_CALLS_HASH)
          {
            return InstanceAttributeType::INBOUND_CALLS;
          }
          else if (hashCode == OUTBOUND_CALLS_HASH)
          {
            return InstanceAttributeType::OUTBOUND_CALLS;
          }
          else if (hashCode == CONTACTFLOW_LOGS_HASH)
          {
            return InstanceAttributeType::CONTACTFLOW_LOGS;
          }
          else if (hashCode == CONTACT_LENS_HASH)
          {
            return InstanceAttributeType::CONTACT_LENS;
          }
          else if (hashCode == AUTO_RESOLVE_BEST_VOICES_HASH)
          {
            return InstanceAttributeType::AUTO_RESOLVE_BEST_VOICES;
          }
          else if (hashCode == USE_CUSTOM_TTS_VOICES_HASH)
          {
            return InstanceAttributeType::USE_CUSTOM_TTS_VOICES;
          }
          else if (hashCode == EARLY_MEDIA_HASH)
          {
            return InstanceAttributeType::EARLY_MEDIA;
          }
          else if (hashCode == MULTI_PARTY_CONFERENCE_HASH)
          {
            return InstanceAttributeType::MULTI_PARTY_CONFERENCE;
          }
          else if (hashCode == HIGH_VOLUME_OUTBOUND_HASH)
          {
            return InstanceAttributeType::HIGH_VOLUME_OUTBOUND;
          }
          else if (hashCode == ENHANCED_CONTACT_MONITORING_HASH)
          {
            return InstanceAttributeType::ENHANCED_CONTACT_MONITORING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceAttributeType>(hashCode);
          }

          return InstanceAttributeType::NOT_SET;
        }

        Aws::String GetNameForInstanceAttributeType(InstanceAttributeType enumValue)
        {
          switch(enumValue)
          {
          case InstanceAttributeType::NOT_SET:
            return {};
          case InstanceAttributeType::INBOUND_CALLS:
            return "INBOUND_CALLS";
          case InstanceAttributeType::OUTBOUND_CALLS:
            return "OUTBOUND_CALLS";
          case InstanceAttributeType::CONTACTFLOW_LOGS:
            return "CONTACTFLOW_LOGS";
          case InstanceAttributeType::CONTACT_LENS:
            return "CONTACT_LENS";
          case InstanceAttributeType::AUTO_RESOLVE_BEST_VOICES:
            return "AUTO_RESOLVE_BEST_VOICES";
          case InstanceAttributeType::USE_CUSTOM_TTS_VOICES:
            return "USE_CUSTOM_TTS_VOICES";
          case InstanceAttributeType::EARLY_MEDIA:
            return "EARLY_MEDIA";
          case InstanceAttributeType::MULTI_PARTY_CONFERENCE:
            return "MULTI_PARTY_CONFERENCE";
          case InstanceAttributeType::HIGH_VOLUME_OUTBOUND:
            return "HIGH_VOLUME_OUTBOUND";
          case InstanceAttributeType::ENHANCED_CONTACT_MONITORING:
            return "ENHANCED_CONTACT_MONITORING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceAttributeTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
