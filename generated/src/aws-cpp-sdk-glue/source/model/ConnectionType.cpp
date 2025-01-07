/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ConnectionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace ConnectionTypeMapper
      {

        static const int JDBC_HASH = HashingUtils::HashString("JDBC");
        static const int SFTP_HASH = HashingUtils::HashString("SFTP");
        static const int MONGODB_HASH = HashingUtils::HashString("MONGODB");
        static const int KAFKA_HASH = HashingUtils::HashString("KAFKA");
        static const int NETWORK_HASH = HashingUtils::HashString("NETWORK");
        static const int MARKETPLACE_HASH = HashingUtils::HashString("MARKETPLACE");
        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");
        static const int SALESFORCE_HASH = HashingUtils::HashString("SALESFORCE");
        static const int VIEW_VALIDATION_REDSHIFT_HASH = HashingUtils::HashString("VIEW_VALIDATION_REDSHIFT");
        static const int VIEW_VALIDATION_ATHENA_HASH = HashingUtils::HashString("VIEW_VALIDATION_ATHENA");
        static const int GOOGLEADS_HASH = HashingUtils::HashString("GOOGLEADS");
        static const int GOOGLESHEETS_HASH = HashingUtils::HashString("GOOGLESHEETS");
        static const int GOOGLEANALYTICS4_HASH = HashingUtils::HashString("GOOGLEANALYTICS4");
        static const int SERVICENOW_HASH = HashingUtils::HashString("SERVICENOW");
        static const int MARKETO_HASH = HashingUtils::HashString("MARKETO");
        static const int SAPODATA_HASH = HashingUtils::HashString("SAPODATA");
        static const int ZENDESK_HASH = HashingUtils::HashString("ZENDESK");
        static const int JIRACLOUD_HASH = HashingUtils::HashString("JIRACLOUD");
        static const int NETSUITEERP_HASH = HashingUtils::HashString("NETSUITEERP");
        static const int HUBSPOT_HASH = HashingUtils::HashString("HUBSPOT");
        static const int FACEBOOKADS_HASH = HashingUtils::HashString("FACEBOOKADS");
        static const int INSTAGRAMADS_HASH = HashingUtils::HashString("INSTAGRAMADS");
        static const int ZOHOCRM_HASH = HashingUtils::HashString("ZOHOCRM");
        static const int SALESFORCEPARDOT_HASH = HashingUtils::HashString("SALESFORCEPARDOT");
        static const int SALESFORCEMARKETINGCLOUD_HASH = HashingUtils::HashString("SALESFORCEMARKETINGCLOUD");
        static const int SLACK_HASH = HashingUtils::HashString("SLACK");
        static const int STRIPE_HASH = HashingUtils::HashString("STRIPE");
        static const int INTERCOM_HASH = HashingUtils::HashString("INTERCOM");
        static const int SNAPCHATADS_HASH = HashingUtils::HashString("SNAPCHATADS");


        ConnectionType GetConnectionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JDBC_HASH)
          {
            return ConnectionType::JDBC;
          }
          else if (hashCode == SFTP_HASH)
          {
            return ConnectionType::SFTP;
          }
          else if (hashCode == MONGODB_HASH)
          {
            return ConnectionType::MONGODB;
          }
          else if (hashCode == KAFKA_HASH)
          {
            return ConnectionType::KAFKA;
          }
          else if (hashCode == NETWORK_HASH)
          {
            return ConnectionType::NETWORK;
          }
          else if (hashCode == MARKETPLACE_HASH)
          {
            return ConnectionType::MARKETPLACE;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return ConnectionType::CUSTOM;
          }
          else if (hashCode == SALESFORCE_HASH)
          {
            return ConnectionType::SALESFORCE;
          }
          else if (hashCode == VIEW_VALIDATION_REDSHIFT_HASH)
          {
            return ConnectionType::VIEW_VALIDATION_REDSHIFT;
          }
          else if (hashCode == VIEW_VALIDATION_ATHENA_HASH)
          {
            return ConnectionType::VIEW_VALIDATION_ATHENA;
          }
          else if (hashCode == GOOGLEADS_HASH)
          {
            return ConnectionType::GOOGLEADS;
          }
          else if (hashCode == GOOGLESHEETS_HASH)
          {
            return ConnectionType::GOOGLESHEETS;
          }
          else if (hashCode == GOOGLEANALYTICS4_HASH)
          {
            return ConnectionType::GOOGLEANALYTICS4;
          }
          else if (hashCode == SERVICENOW_HASH)
          {
            return ConnectionType::SERVICENOW;
          }
          else if (hashCode == MARKETO_HASH)
          {
            return ConnectionType::MARKETO;
          }
          else if (hashCode == SAPODATA_HASH)
          {
            return ConnectionType::SAPODATA;
          }
          else if (hashCode == ZENDESK_HASH)
          {
            return ConnectionType::ZENDESK;
          }
          else if (hashCode == JIRACLOUD_HASH)
          {
            return ConnectionType::JIRACLOUD;
          }
          else if (hashCode == NETSUITEERP_HASH)
          {
            return ConnectionType::NETSUITEERP;
          }
          else if (hashCode == HUBSPOT_HASH)
          {
            return ConnectionType::HUBSPOT;
          }
          else if (hashCode == FACEBOOKADS_HASH)
          {
            return ConnectionType::FACEBOOKADS;
          }
          else if (hashCode == INSTAGRAMADS_HASH)
          {
            return ConnectionType::INSTAGRAMADS;
          }
          else if (hashCode == ZOHOCRM_HASH)
          {
            return ConnectionType::ZOHOCRM;
          }
          else if (hashCode == SALESFORCEPARDOT_HASH)
          {
            return ConnectionType::SALESFORCEPARDOT;
          }
          else if (hashCode == SALESFORCEMARKETINGCLOUD_HASH)
          {
            return ConnectionType::SALESFORCEMARKETINGCLOUD;
          }
          else if (hashCode == SLACK_HASH)
          {
            return ConnectionType::SLACK;
          }
          else if (hashCode == STRIPE_HASH)
          {
            return ConnectionType::STRIPE;
          }
          else if (hashCode == INTERCOM_HASH)
          {
            return ConnectionType::INTERCOM;
          }
          else if (hashCode == SNAPCHATADS_HASH)
          {
            return ConnectionType::SNAPCHATADS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectionType>(hashCode);
          }

          return ConnectionType::NOT_SET;
        }

        Aws::String GetNameForConnectionType(ConnectionType enumValue)
        {
          switch(enumValue)
          {
          case ConnectionType::NOT_SET:
            return {};
          case ConnectionType::JDBC:
            return "JDBC";
          case ConnectionType::SFTP:
            return "SFTP";
          case ConnectionType::MONGODB:
            return "MONGODB";
          case ConnectionType::KAFKA:
            return "KAFKA";
          case ConnectionType::NETWORK:
            return "NETWORK";
          case ConnectionType::MARKETPLACE:
            return "MARKETPLACE";
          case ConnectionType::CUSTOM:
            return "CUSTOM";
          case ConnectionType::SALESFORCE:
            return "SALESFORCE";
          case ConnectionType::VIEW_VALIDATION_REDSHIFT:
            return "VIEW_VALIDATION_REDSHIFT";
          case ConnectionType::VIEW_VALIDATION_ATHENA:
            return "VIEW_VALIDATION_ATHENA";
          case ConnectionType::GOOGLEADS:
            return "GOOGLEADS";
          case ConnectionType::GOOGLESHEETS:
            return "GOOGLESHEETS";
          case ConnectionType::GOOGLEANALYTICS4:
            return "GOOGLEANALYTICS4";
          case ConnectionType::SERVICENOW:
            return "SERVICENOW";
          case ConnectionType::MARKETO:
            return "MARKETO";
          case ConnectionType::SAPODATA:
            return "SAPODATA";
          case ConnectionType::ZENDESK:
            return "ZENDESK";
          case ConnectionType::JIRACLOUD:
            return "JIRACLOUD";
          case ConnectionType::NETSUITEERP:
            return "NETSUITEERP";
          case ConnectionType::HUBSPOT:
            return "HUBSPOT";
          case ConnectionType::FACEBOOKADS:
            return "FACEBOOKADS";
          case ConnectionType::INSTAGRAMADS:
            return "INSTAGRAMADS";
          case ConnectionType::ZOHOCRM:
            return "ZOHOCRM";
          case ConnectionType::SALESFORCEPARDOT:
            return "SALESFORCEPARDOT";
          case ConnectionType::SALESFORCEMARKETINGCLOUD:
            return "SALESFORCEMARKETINGCLOUD";
          case ConnectionType::SLACK:
            return "SLACK";
          case ConnectionType::STRIPE:
            return "STRIPE";
          case ConnectionType::INTERCOM:
            return "INTERCOM";
          case ConnectionType::SNAPCHATADS:
            return "SNAPCHATADS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectionTypeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
