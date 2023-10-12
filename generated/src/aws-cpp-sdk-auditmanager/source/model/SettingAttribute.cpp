/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/SettingAttribute.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AuditManager
  {
    namespace Model
    {
      namespace SettingAttributeMapper
      {

        static constexpr uint32_t ALL_HASH = ConstExprHashingUtils::HashString("ALL");
        static constexpr uint32_t IS_AWS_ORG_ENABLED_HASH = ConstExprHashingUtils::HashString("IS_AWS_ORG_ENABLED");
        static constexpr uint32_t SNS_TOPIC_HASH = ConstExprHashingUtils::HashString("SNS_TOPIC");
        static constexpr uint32_t DEFAULT_ASSESSMENT_REPORTS_DESTINATION_HASH = ConstExprHashingUtils::HashString("DEFAULT_ASSESSMENT_REPORTS_DESTINATION");
        static constexpr uint32_t DEFAULT_PROCESS_OWNERS_HASH = ConstExprHashingUtils::HashString("DEFAULT_PROCESS_OWNERS");
        static constexpr uint32_t EVIDENCE_FINDER_ENABLEMENT_HASH = ConstExprHashingUtils::HashString("EVIDENCE_FINDER_ENABLEMENT");
        static constexpr uint32_t DEREGISTRATION_POLICY_HASH = ConstExprHashingUtils::HashString("DEREGISTRATION_POLICY");
        static constexpr uint32_t DEFAULT_EXPORT_DESTINATION_HASH = ConstExprHashingUtils::HashString("DEFAULT_EXPORT_DESTINATION");


        SettingAttribute GetSettingAttributeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return SettingAttribute::ALL;
          }
          else if (hashCode == IS_AWS_ORG_ENABLED_HASH)
          {
            return SettingAttribute::IS_AWS_ORG_ENABLED;
          }
          else if (hashCode == SNS_TOPIC_HASH)
          {
            return SettingAttribute::SNS_TOPIC;
          }
          else if (hashCode == DEFAULT_ASSESSMENT_REPORTS_DESTINATION_HASH)
          {
            return SettingAttribute::DEFAULT_ASSESSMENT_REPORTS_DESTINATION;
          }
          else if (hashCode == DEFAULT_PROCESS_OWNERS_HASH)
          {
            return SettingAttribute::DEFAULT_PROCESS_OWNERS;
          }
          else if (hashCode == EVIDENCE_FINDER_ENABLEMENT_HASH)
          {
            return SettingAttribute::EVIDENCE_FINDER_ENABLEMENT;
          }
          else if (hashCode == DEREGISTRATION_POLICY_HASH)
          {
            return SettingAttribute::DEREGISTRATION_POLICY;
          }
          else if (hashCode == DEFAULT_EXPORT_DESTINATION_HASH)
          {
            return SettingAttribute::DEFAULT_EXPORT_DESTINATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SettingAttribute>(hashCode);
          }

          return SettingAttribute::NOT_SET;
        }

        Aws::String GetNameForSettingAttribute(SettingAttribute enumValue)
        {
          switch(enumValue)
          {
          case SettingAttribute::NOT_SET:
            return {};
          case SettingAttribute::ALL:
            return "ALL";
          case SettingAttribute::IS_AWS_ORG_ENABLED:
            return "IS_AWS_ORG_ENABLED";
          case SettingAttribute::SNS_TOPIC:
            return "SNS_TOPIC";
          case SettingAttribute::DEFAULT_ASSESSMENT_REPORTS_DESTINATION:
            return "DEFAULT_ASSESSMENT_REPORTS_DESTINATION";
          case SettingAttribute::DEFAULT_PROCESS_OWNERS:
            return "DEFAULT_PROCESS_OWNERS";
          case SettingAttribute::EVIDENCE_FINDER_ENABLEMENT:
            return "EVIDENCE_FINDER_ENABLEMENT";
          case SettingAttribute::DEREGISTRATION_POLICY:
            return "DEREGISTRATION_POLICY";
          case SettingAttribute::DEFAULT_EXPORT_DESTINATION:
            return "DEFAULT_EXPORT_DESTINATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SettingAttributeMapper
    } // namespace Model
  } // namespace AuditManager
} // namespace Aws
