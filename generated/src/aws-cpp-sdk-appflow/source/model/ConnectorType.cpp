/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/ConnectorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Appflow
  {
    namespace Model
    {
      namespace ConnectorTypeMapper
      {

        static constexpr uint32_t Salesforce_HASH = ConstExprHashingUtils::HashString("Salesforce");
        static constexpr uint32_t Singular_HASH = ConstExprHashingUtils::HashString("Singular");
        static constexpr uint32_t Slack_HASH = ConstExprHashingUtils::HashString("Slack");
        static constexpr uint32_t Redshift_HASH = ConstExprHashingUtils::HashString("Redshift");
        static constexpr uint32_t S3_HASH = ConstExprHashingUtils::HashString("S3");
        static constexpr uint32_t Marketo_HASH = ConstExprHashingUtils::HashString("Marketo");
        static constexpr uint32_t Googleanalytics_HASH = ConstExprHashingUtils::HashString("Googleanalytics");
        static constexpr uint32_t Zendesk_HASH = ConstExprHashingUtils::HashString("Zendesk");
        static constexpr uint32_t Servicenow_HASH = ConstExprHashingUtils::HashString("Servicenow");
        static constexpr uint32_t Datadog_HASH = ConstExprHashingUtils::HashString("Datadog");
        static constexpr uint32_t Trendmicro_HASH = ConstExprHashingUtils::HashString("Trendmicro");
        static constexpr uint32_t Snowflake_HASH = ConstExprHashingUtils::HashString("Snowflake");
        static constexpr uint32_t Dynatrace_HASH = ConstExprHashingUtils::HashString("Dynatrace");
        static constexpr uint32_t Infornexus_HASH = ConstExprHashingUtils::HashString("Infornexus");
        static constexpr uint32_t Amplitude_HASH = ConstExprHashingUtils::HashString("Amplitude");
        static constexpr uint32_t Veeva_HASH = ConstExprHashingUtils::HashString("Veeva");
        static constexpr uint32_t EventBridge_HASH = ConstExprHashingUtils::HashString("EventBridge");
        static constexpr uint32_t LookoutMetrics_HASH = ConstExprHashingUtils::HashString("LookoutMetrics");
        static constexpr uint32_t Upsolver_HASH = ConstExprHashingUtils::HashString("Upsolver");
        static constexpr uint32_t Honeycode_HASH = ConstExprHashingUtils::HashString("Honeycode");
        static constexpr uint32_t CustomerProfiles_HASH = ConstExprHashingUtils::HashString("CustomerProfiles");
        static constexpr uint32_t SAPOData_HASH = ConstExprHashingUtils::HashString("SAPOData");
        static constexpr uint32_t CustomConnector_HASH = ConstExprHashingUtils::HashString("CustomConnector");
        static constexpr uint32_t Pardot_HASH = ConstExprHashingUtils::HashString("Pardot");


        ConnectorType GetConnectorTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Salesforce_HASH)
          {
            return ConnectorType::Salesforce;
          }
          else if (hashCode == Singular_HASH)
          {
            return ConnectorType::Singular;
          }
          else if (hashCode == Slack_HASH)
          {
            return ConnectorType::Slack;
          }
          else if (hashCode == Redshift_HASH)
          {
            return ConnectorType::Redshift;
          }
          else if (hashCode == S3_HASH)
          {
            return ConnectorType::S3;
          }
          else if (hashCode == Marketo_HASH)
          {
            return ConnectorType::Marketo;
          }
          else if (hashCode == Googleanalytics_HASH)
          {
            return ConnectorType::Googleanalytics;
          }
          else if (hashCode == Zendesk_HASH)
          {
            return ConnectorType::Zendesk;
          }
          else if (hashCode == Servicenow_HASH)
          {
            return ConnectorType::Servicenow;
          }
          else if (hashCode == Datadog_HASH)
          {
            return ConnectorType::Datadog;
          }
          else if (hashCode == Trendmicro_HASH)
          {
            return ConnectorType::Trendmicro;
          }
          else if (hashCode == Snowflake_HASH)
          {
            return ConnectorType::Snowflake;
          }
          else if (hashCode == Dynatrace_HASH)
          {
            return ConnectorType::Dynatrace;
          }
          else if (hashCode == Infornexus_HASH)
          {
            return ConnectorType::Infornexus;
          }
          else if (hashCode == Amplitude_HASH)
          {
            return ConnectorType::Amplitude;
          }
          else if (hashCode == Veeva_HASH)
          {
            return ConnectorType::Veeva;
          }
          else if (hashCode == EventBridge_HASH)
          {
            return ConnectorType::EventBridge;
          }
          else if (hashCode == LookoutMetrics_HASH)
          {
            return ConnectorType::LookoutMetrics;
          }
          else if (hashCode == Upsolver_HASH)
          {
            return ConnectorType::Upsolver;
          }
          else if (hashCode == Honeycode_HASH)
          {
            return ConnectorType::Honeycode;
          }
          else if (hashCode == CustomerProfiles_HASH)
          {
            return ConnectorType::CustomerProfiles;
          }
          else if (hashCode == SAPOData_HASH)
          {
            return ConnectorType::SAPOData;
          }
          else if (hashCode == CustomConnector_HASH)
          {
            return ConnectorType::CustomConnector;
          }
          else if (hashCode == Pardot_HASH)
          {
            return ConnectorType::Pardot;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectorType>(hashCode);
          }

          return ConnectorType::NOT_SET;
        }

        Aws::String GetNameForConnectorType(ConnectorType enumValue)
        {
          switch(enumValue)
          {
          case ConnectorType::NOT_SET:
            return {};
          case ConnectorType::Salesforce:
            return "Salesforce";
          case ConnectorType::Singular:
            return "Singular";
          case ConnectorType::Slack:
            return "Slack";
          case ConnectorType::Redshift:
            return "Redshift";
          case ConnectorType::S3:
            return "S3";
          case ConnectorType::Marketo:
            return "Marketo";
          case ConnectorType::Googleanalytics:
            return "Googleanalytics";
          case ConnectorType::Zendesk:
            return "Zendesk";
          case ConnectorType::Servicenow:
            return "Servicenow";
          case ConnectorType::Datadog:
            return "Datadog";
          case ConnectorType::Trendmicro:
            return "Trendmicro";
          case ConnectorType::Snowflake:
            return "Snowflake";
          case ConnectorType::Dynatrace:
            return "Dynatrace";
          case ConnectorType::Infornexus:
            return "Infornexus";
          case ConnectorType::Amplitude:
            return "Amplitude";
          case ConnectorType::Veeva:
            return "Veeva";
          case ConnectorType::EventBridge:
            return "EventBridge";
          case ConnectorType::LookoutMetrics:
            return "LookoutMetrics";
          case ConnectorType::Upsolver:
            return "Upsolver";
          case ConnectorType::Honeycode:
            return "Honeycode";
          case ConnectorType::CustomerProfiles:
            return "CustomerProfiles";
          case ConnectorType::SAPOData:
            return "SAPOData";
          case ConnectorType::CustomConnector:
            return "CustomConnector";
          case ConnectorType::Pardot:
            return "Pardot";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectorTypeMapper
    } // namespace Model
  } // namespace Appflow
} // namespace Aws
