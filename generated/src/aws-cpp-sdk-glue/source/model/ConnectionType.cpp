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
        static const int ADOBEANALYTICS_HASH = HashingUtils::HashString("ADOBEANALYTICS");
        static const int SLACK_HASH = HashingUtils::HashString("SLACK");
        static const int LINKEDIN_HASH = HashingUtils::HashString("LINKEDIN");
        static const int MIXPANEL_HASH = HashingUtils::HashString("MIXPANEL");
        static const int ASANA_HASH = HashingUtils::HashString("ASANA");
        static const int STRIPE_HASH = HashingUtils::HashString("STRIPE");
        static const int SMARTSHEET_HASH = HashingUtils::HashString("SMARTSHEET");
        static const int DATADOG_HASH = HashingUtils::HashString("DATADOG");
        static const int WOOCOMMERCE_HASH = HashingUtils::HashString("WOOCOMMERCE");
        static const int INTERCOM_HASH = HashingUtils::HashString("INTERCOM");
        static const int SNAPCHATADS_HASH = HashingUtils::HashString("SNAPCHATADS");
        static const int PAYPAL_HASH = HashingUtils::HashString("PAYPAL");
        static const int QUICKBOOKS_HASH = HashingUtils::HashString("QUICKBOOKS");
        static const int FACEBOOKPAGEINSIGHTS_HASH = HashingUtils::HashString("FACEBOOKPAGEINSIGHTS");
        static const int FRESHDESK_HASH = HashingUtils::HashString("FRESHDESK");
        static const int TWILIO_HASH = HashingUtils::HashString("TWILIO");
        static const int DOCUSIGNMONITOR_HASH = HashingUtils::HashString("DOCUSIGNMONITOR");
        static const int FRESHSALES_HASH = HashingUtils::HashString("FRESHSALES");
        static const int ZOOM_HASH = HashingUtils::HashString("ZOOM");
        static const int GOOGLESEARCHCONSOLE_HASH = HashingUtils::HashString("GOOGLESEARCHCONSOLE");
        static const int SALESFORCECOMMERCECLOUD_HASH = HashingUtils::HashString("SALESFORCECOMMERCECLOUD");
        static const int SAPCONCUR_HASH = HashingUtils::HashString("SAPCONCUR");
        static const int DYNATRACE_HASH = HashingUtils::HashString("DYNATRACE");
        static const int MICROSOFTDYNAMIC365FINANCEANDOPS_HASH = HashingUtils::HashString("MICROSOFTDYNAMIC365FINANCEANDOPS");
        static const int MICROSOFTTEAMS_HASH = HashingUtils::HashString("MICROSOFTTEAMS");
        static const int BLACKBAUDRAISEREDGENXT_HASH = HashingUtils::HashString("BLACKBAUDRAISEREDGENXT");
        static const int MAILCHIMP_HASH = HashingUtils::HashString("MAILCHIMP");
        static const int GITLAB_HASH = HashingUtils::HashString("GITLAB");
        static const int PENDO_HASH = HashingUtils::HashString("PENDO");
        static const int PRODUCTBOARD_HASH = HashingUtils::HashString("PRODUCTBOARD");
        static const int CIRCLECI_HASH = HashingUtils::HashString("CIRCLECI");
        static const int PIPEDIVE_HASH = HashingUtils::HashString("PIPEDIVE");
        static const int SENDGRID_HASH = HashingUtils::HashString("SENDGRID");
        static const int AZURECOSMOS_HASH = HashingUtils::HashString("AZURECOSMOS");
        static const int AZURESQL_HASH = HashingUtils::HashString("AZURESQL");
        static const int BIGQUERY_HASH = HashingUtils::HashString("BIGQUERY");
        static const int BLACKBAUD_HASH = HashingUtils::HashString("BLACKBAUD");
        static const int CLOUDERAHIVE_HASH = HashingUtils::HashString("CLOUDERAHIVE");
        static const int CLOUDERAIMPALA_HASH = HashingUtils::HashString("CLOUDERAIMPALA");
        static const int CLOUDWATCH_HASH = HashingUtils::HashString("CLOUDWATCH");
        static const int CLOUDWATCHMETRICS_HASH = HashingUtils::HashString("CLOUDWATCHMETRICS");
        static const int CMDB_HASH = HashingUtils::HashString("CMDB");
        static const int DATALAKEGEN2_HASH = HashingUtils::HashString("DATALAKEGEN2");
        static const int DB2_HASH = HashingUtils::HashString("DB2");
        static const int DB2AS400_HASH = HashingUtils::HashString("DB2AS400");
        static const int DOCUMENTDB_HASH = HashingUtils::HashString("DOCUMENTDB");
        static const int DOMO_HASH = HashingUtils::HashString("DOMO");
        static const int DYNAMODB_HASH = HashingUtils::HashString("DYNAMODB");
        static const int GOOGLECLOUDSTORAGE_HASH = HashingUtils::HashString("GOOGLECLOUDSTORAGE");
        static const int HBASE_HASH = HashingUtils::HashString("HBASE");
        static const int KUSTOMER_HASH = HashingUtils::HashString("KUSTOMER");
        static const int MICROSOFTDYNAMICS365CRM_HASH = HashingUtils::HashString("MICROSOFTDYNAMICS365CRM");
        static const int MONDAY_HASH = HashingUtils::HashString("MONDAY");
        static const int MYSQL_HASH = HashingUtils::HashString("MYSQL");
        static const int OKTA_HASH = HashingUtils::HashString("OKTA");
        static const int OPENSEARCH_HASH = HashingUtils::HashString("OPENSEARCH");
        static const int ORACLE_HASH = HashingUtils::HashString("ORACLE");
        static const int PIPEDRIVE_HASH = HashingUtils::HashString("PIPEDRIVE");
        static const int POSTGRESQL_HASH = HashingUtils::HashString("POSTGRESQL");
        static const int SAPHANA_HASH = HashingUtils::HashString("SAPHANA");
        static const int SQLSERVER_HASH = HashingUtils::HashString("SQLSERVER");
        static const int SYNAPSE_HASH = HashingUtils::HashString("SYNAPSE");
        static const int TERADATA_HASH = HashingUtils::HashString("TERADATA");
        static const int TERADATANOS_HASH = HashingUtils::HashString("TERADATANOS");
        static const int TIMESTREAM_HASH = HashingUtils::HashString("TIMESTREAM");
        static const int TPCDS_HASH = HashingUtils::HashString("TPCDS");
        static const int VERTICA_HASH = HashingUtils::HashString("VERTICA");


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
          else if (hashCode == ADOBEANALYTICS_HASH)
          {
            return ConnectionType::ADOBEANALYTICS;
          }
          else if (hashCode == SLACK_HASH)
          {
            return ConnectionType::SLACK;
          }
          else if (hashCode == LINKEDIN_HASH)
          {
            return ConnectionType::LINKEDIN;
          }
          else if (hashCode == MIXPANEL_HASH)
          {
            return ConnectionType::MIXPANEL;
          }
          else if (hashCode == ASANA_HASH)
          {
            return ConnectionType::ASANA;
          }
          else if (hashCode == STRIPE_HASH)
          {
            return ConnectionType::STRIPE;
          }
          else if (hashCode == SMARTSHEET_HASH)
          {
            return ConnectionType::SMARTSHEET;
          }
          else if (hashCode == DATADOG_HASH)
          {
            return ConnectionType::DATADOG;
          }
          else if (hashCode == WOOCOMMERCE_HASH)
          {
            return ConnectionType::WOOCOMMERCE;
          }
          else if (hashCode == INTERCOM_HASH)
          {
            return ConnectionType::INTERCOM;
          }
          else if (hashCode == SNAPCHATADS_HASH)
          {
            return ConnectionType::SNAPCHATADS;
          }
          else if (hashCode == PAYPAL_HASH)
          {
            return ConnectionType::PAYPAL;
          }
          else if (hashCode == QUICKBOOKS_HASH)
          {
            return ConnectionType::QUICKBOOKS;
          }
          else if (hashCode == FACEBOOKPAGEINSIGHTS_HASH)
          {
            return ConnectionType::FACEBOOKPAGEINSIGHTS;
          }
          else if (hashCode == FRESHDESK_HASH)
          {
            return ConnectionType::FRESHDESK;
          }
          else if (hashCode == TWILIO_HASH)
          {
            return ConnectionType::TWILIO;
          }
          else if (hashCode == DOCUSIGNMONITOR_HASH)
          {
            return ConnectionType::DOCUSIGNMONITOR;
          }
          else if (hashCode == FRESHSALES_HASH)
          {
            return ConnectionType::FRESHSALES;
          }
          else if (hashCode == ZOOM_HASH)
          {
            return ConnectionType::ZOOM;
          }
          else if (hashCode == GOOGLESEARCHCONSOLE_HASH)
          {
            return ConnectionType::GOOGLESEARCHCONSOLE;
          }
          else if (hashCode == SALESFORCECOMMERCECLOUD_HASH)
          {
            return ConnectionType::SALESFORCECOMMERCECLOUD;
          }
          else if (hashCode == SAPCONCUR_HASH)
          {
            return ConnectionType::SAPCONCUR;
          }
          else if (hashCode == DYNATRACE_HASH)
          {
            return ConnectionType::DYNATRACE;
          }
          else if (hashCode == MICROSOFTDYNAMIC365FINANCEANDOPS_HASH)
          {
            return ConnectionType::MICROSOFTDYNAMIC365FINANCEANDOPS;
          }
          else if (hashCode == MICROSOFTTEAMS_HASH)
          {
            return ConnectionType::MICROSOFTTEAMS;
          }
          else if (hashCode == BLACKBAUDRAISEREDGENXT_HASH)
          {
            return ConnectionType::BLACKBAUDRAISEREDGENXT;
          }
          else if (hashCode == MAILCHIMP_HASH)
          {
            return ConnectionType::MAILCHIMP;
          }
          else if (hashCode == GITLAB_HASH)
          {
            return ConnectionType::GITLAB;
          }
          else if (hashCode == PENDO_HASH)
          {
            return ConnectionType::PENDO;
          }
          else if (hashCode == PRODUCTBOARD_HASH)
          {
            return ConnectionType::PRODUCTBOARD;
          }
          else if (hashCode == CIRCLECI_HASH)
          {
            return ConnectionType::CIRCLECI;
          }
          else if (hashCode == PIPEDIVE_HASH)
          {
            return ConnectionType::PIPEDIVE;
          }
          else if (hashCode == SENDGRID_HASH)
          {
            return ConnectionType::SENDGRID;
          }
          else if (hashCode == AZURECOSMOS_HASH)
          {
            return ConnectionType::AZURECOSMOS;
          }
          else if (hashCode == AZURESQL_HASH)
          {
            return ConnectionType::AZURESQL;
          }
          else if (hashCode == BIGQUERY_HASH)
          {
            return ConnectionType::BIGQUERY;
          }
          else if (hashCode == BLACKBAUD_HASH)
          {
            return ConnectionType::BLACKBAUD;
          }
          else if (hashCode == CLOUDERAHIVE_HASH)
          {
            return ConnectionType::CLOUDERAHIVE;
          }
          else if (hashCode == CLOUDERAIMPALA_HASH)
          {
            return ConnectionType::CLOUDERAIMPALA;
          }
          else if (hashCode == CLOUDWATCH_HASH)
          {
            return ConnectionType::CLOUDWATCH;
          }
          else if (hashCode == CLOUDWATCHMETRICS_HASH)
          {
            return ConnectionType::CLOUDWATCHMETRICS;
          }
          else if (hashCode == CMDB_HASH)
          {
            return ConnectionType::CMDB;
          }
          else if (hashCode == DATALAKEGEN2_HASH)
          {
            return ConnectionType::DATALAKEGEN2;
          }
          else if (hashCode == DB2_HASH)
          {
            return ConnectionType::DB2;
          }
          else if (hashCode == DB2AS400_HASH)
          {
            return ConnectionType::DB2AS400;
          }
          else if (hashCode == DOCUMENTDB_HASH)
          {
            return ConnectionType::DOCUMENTDB;
          }
          else if (hashCode == DOMO_HASH)
          {
            return ConnectionType::DOMO;
          }
          else if (hashCode == DYNAMODB_HASH)
          {
            return ConnectionType::DYNAMODB;
          }
          else if (hashCode == GOOGLECLOUDSTORAGE_HASH)
          {
            return ConnectionType::GOOGLECLOUDSTORAGE;
          }
          else if (hashCode == HBASE_HASH)
          {
            return ConnectionType::HBASE;
          }
          else if (hashCode == KUSTOMER_HASH)
          {
            return ConnectionType::KUSTOMER;
          }
          else if (hashCode == MICROSOFTDYNAMICS365CRM_HASH)
          {
            return ConnectionType::MICROSOFTDYNAMICS365CRM;
          }
          else if (hashCode == MONDAY_HASH)
          {
            return ConnectionType::MONDAY;
          }
          else if (hashCode == MYSQL_HASH)
          {
            return ConnectionType::MYSQL;
          }
          else if (hashCode == OKTA_HASH)
          {
            return ConnectionType::OKTA;
          }
          else if (hashCode == OPENSEARCH_HASH)
          {
            return ConnectionType::OPENSEARCH;
          }
          else if (hashCode == ORACLE_HASH)
          {
            return ConnectionType::ORACLE;
          }
          else if (hashCode == PIPEDRIVE_HASH)
          {
            return ConnectionType::PIPEDRIVE;
          }
          else if (hashCode == POSTGRESQL_HASH)
          {
            return ConnectionType::POSTGRESQL;
          }
          else if (hashCode == SAPHANA_HASH)
          {
            return ConnectionType::SAPHANA;
          }
          else if (hashCode == SQLSERVER_HASH)
          {
            return ConnectionType::SQLSERVER;
          }
          else if (hashCode == SYNAPSE_HASH)
          {
            return ConnectionType::SYNAPSE;
          }
          else if (hashCode == TERADATA_HASH)
          {
            return ConnectionType::TERADATA;
          }
          else if (hashCode == TERADATANOS_HASH)
          {
            return ConnectionType::TERADATANOS;
          }
          else if (hashCode == TIMESTREAM_HASH)
          {
            return ConnectionType::TIMESTREAM;
          }
          else if (hashCode == TPCDS_HASH)
          {
            return ConnectionType::TPCDS;
          }
          else if (hashCode == VERTICA_HASH)
          {
            return ConnectionType::VERTICA;
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
          case ConnectionType::ADOBEANALYTICS:
            return "ADOBEANALYTICS";
          case ConnectionType::SLACK:
            return "SLACK";
          case ConnectionType::LINKEDIN:
            return "LINKEDIN";
          case ConnectionType::MIXPANEL:
            return "MIXPANEL";
          case ConnectionType::ASANA:
            return "ASANA";
          case ConnectionType::STRIPE:
            return "STRIPE";
          case ConnectionType::SMARTSHEET:
            return "SMARTSHEET";
          case ConnectionType::DATADOG:
            return "DATADOG";
          case ConnectionType::WOOCOMMERCE:
            return "WOOCOMMERCE";
          case ConnectionType::INTERCOM:
            return "INTERCOM";
          case ConnectionType::SNAPCHATADS:
            return "SNAPCHATADS";
          case ConnectionType::PAYPAL:
            return "PAYPAL";
          case ConnectionType::QUICKBOOKS:
            return "QUICKBOOKS";
          case ConnectionType::FACEBOOKPAGEINSIGHTS:
            return "FACEBOOKPAGEINSIGHTS";
          case ConnectionType::FRESHDESK:
            return "FRESHDESK";
          case ConnectionType::TWILIO:
            return "TWILIO";
          case ConnectionType::DOCUSIGNMONITOR:
            return "DOCUSIGNMONITOR";
          case ConnectionType::FRESHSALES:
            return "FRESHSALES";
          case ConnectionType::ZOOM:
            return "ZOOM";
          case ConnectionType::GOOGLESEARCHCONSOLE:
            return "GOOGLESEARCHCONSOLE";
          case ConnectionType::SALESFORCECOMMERCECLOUD:
            return "SALESFORCECOMMERCECLOUD";
          case ConnectionType::SAPCONCUR:
            return "SAPCONCUR";
          case ConnectionType::DYNATRACE:
            return "DYNATRACE";
          case ConnectionType::MICROSOFTDYNAMIC365FINANCEANDOPS:
            return "MICROSOFTDYNAMIC365FINANCEANDOPS";
          case ConnectionType::MICROSOFTTEAMS:
            return "MICROSOFTTEAMS";
          case ConnectionType::BLACKBAUDRAISEREDGENXT:
            return "BLACKBAUDRAISEREDGENXT";
          case ConnectionType::MAILCHIMP:
            return "MAILCHIMP";
          case ConnectionType::GITLAB:
            return "GITLAB";
          case ConnectionType::PENDO:
            return "PENDO";
          case ConnectionType::PRODUCTBOARD:
            return "PRODUCTBOARD";
          case ConnectionType::CIRCLECI:
            return "CIRCLECI";
          case ConnectionType::PIPEDIVE:
            return "PIPEDIVE";
          case ConnectionType::SENDGRID:
            return "SENDGRID";
          case ConnectionType::AZURECOSMOS:
            return "AZURECOSMOS";
          case ConnectionType::AZURESQL:
            return "AZURESQL";
          case ConnectionType::BIGQUERY:
            return "BIGQUERY";
          case ConnectionType::BLACKBAUD:
            return "BLACKBAUD";
          case ConnectionType::CLOUDERAHIVE:
            return "CLOUDERAHIVE";
          case ConnectionType::CLOUDERAIMPALA:
            return "CLOUDERAIMPALA";
          case ConnectionType::CLOUDWATCH:
            return "CLOUDWATCH";
          case ConnectionType::CLOUDWATCHMETRICS:
            return "CLOUDWATCHMETRICS";
          case ConnectionType::CMDB:
            return "CMDB";
          case ConnectionType::DATALAKEGEN2:
            return "DATALAKEGEN2";
          case ConnectionType::DB2:
            return "DB2";
          case ConnectionType::DB2AS400:
            return "DB2AS400";
          case ConnectionType::DOCUMENTDB:
            return "DOCUMENTDB";
          case ConnectionType::DOMO:
            return "DOMO";
          case ConnectionType::DYNAMODB:
            return "DYNAMODB";
          case ConnectionType::GOOGLECLOUDSTORAGE:
            return "GOOGLECLOUDSTORAGE";
          case ConnectionType::HBASE:
            return "HBASE";
          case ConnectionType::KUSTOMER:
            return "KUSTOMER";
          case ConnectionType::MICROSOFTDYNAMICS365CRM:
            return "MICROSOFTDYNAMICS365CRM";
          case ConnectionType::MONDAY:
            return "MONDAY";
          case ConnectionType::MYSQL:
            return "MYSQL";
          case ConnectionType::OKTA:
            return "OKTA";
          case ConnectionType::OPENSEARCH:
            return "OPENSEARCH";
          case ConnectionType::ORACLE:
            return "ORACLE";
          case ConnectionType::PIPEDRIVE:
            return "PIPEDRIVE";
          case ConnectionType::POSTGRESQL:
            return "POSTGRESQL";
          case ConnectionType::SAPHANA:
            return "SAPHANA";
          case ConnectionType::SQLSERVER:
            return "SQLSERVER";
          case ConnectionType::SYNAPSE:
            return "SYNAPSE";
          case ConnectionType::TERADATA:
            return "TERADATA";
          case ConnectionType::TERADATANOS:
            return "TERADATANOS";
          case ConnectionType::TIMESTREAM:
            return "TIMESTREAM";
          case ConnectionType::TPCDS:
            return "TPCDS";
          case ConnectionType::VERTICA:
            return "VERTICA";
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
