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

        static const int Salesforce_HASH = HashingUtils::HashString("Salesforce");
        static const int Singular_HASH = HashingUtils::HashString("Singular");
        static const int Slack_HASH = HashingUtils::HashString("Slack");
        static const int Redshift_HASH = HashingUtils::HashString("Redshift");
        static const int S3_HASH = HashingUtils::HashString("S3");
        static const int Marketo_HASH = HashingUtils::HashString("Marketo");
        static const int Googleanalytics_HASH = HashingUtils::HashString("Googleanalytics");
        static const int Zendesk_HASH = HashingUtils::HashString("Zendesk");
        static const int Servicenow_HASH = HashingUtils::HashString("Servicenow");
        static const int Datadog_HASH = HashingUtils::HashString("Datadog");
        static const int Trendmicro_HASH = HashingUtils::HashString("Trendmicro");
        static const int Snowflake_HASH = HashingUtils::HashString("Snowflake");
        static const int Dynatrace_HASH = HashingUtils::HashString("Dynatrace");
        static const int Infornexus_HASH = HashingUtils::HashString("Infornexus");
        static const int Amplitude_HASH = HashingUtils::HashString("Amplitude");
        static const int Veeva_HASH = HashingUtils::HashString("Veeva");
        static const int EventBridge_HASH = HashingUtils::HashString("EventBridge");
        static const int Upsolver_HASH = HashingUtils::HashString("Upsolver");


        ConnectorType GetConnectorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == Upsolver_HASH)
          {
            return ConnectorType::Upsolver;
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
          case ConnectorType::Upsolver:
            return "Upsolver";
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
