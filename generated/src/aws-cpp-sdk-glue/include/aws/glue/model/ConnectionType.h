/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class ConnectionType
  {
    NOT_SET,
    JDBC,
    SFTP,
    MONGODB,
    KAFKA,
    NETWORK,
    MARKETPLACE,
    CUSTOM,
    SALESFORCE,
    VIEW_VALIDATION_REDSHIFT,
    VIEW_VALIDATION_ATHENA,
    GOOGLEADS,
    GOOGLESHEETS,
    GOOGLEANALYTICS4,
    SERVICENOW,
    MARKETO,
    SAPODATA,
    ZENDESK,
    JIRACLOUD,
    NETSUITEERP,
    HUBSPOT,
    FACEBOOKADS,
    INSTAGRAMADS,
    ZOHOCRM,
    SALESFORCEPARDOT,
    SALESFORCEMARKETINGCLOUD,
    ADOBEANALYTICS,
    SLACK,
    LINKEDIN,
    MIXPANEL,
    ASANA,
    STRIPE,
    SMARTSHEET,
    DATADOG,
    WOOCOMMERCE,
    INTERCOM,
    SNAPCHATADS,
    PAYPAL,
    QUICKBOOKS,
    FACEBOOKPAGEINSIGHTS,
    FRESHDESK,
    TWILIO,
    DOCUSIGNMONITOR,
    FRESHSALES,
    ZOOM,
    GOOGLESEARCHCONSOLE,
    SALESFORCECOMMERCECLOUD,
    SAPCONCUR,
    DYNATRACE,
    MICROSOFTDYNAMIC365FINANCEANDOPS,
    MICROSOFTTEAMS,
    BLACKBAUDRAISEREDGENXT,
    MAILCHIMP,
    GITLAB,
    PENDO,
    PRODUCTBOARD,
    CIRCLECI,
    PIPEDIVE,
    SENDGRID,
    AZURECOSMOS,
    AZURESQL,
    BIGQUERY,
    BLACKBAUD,
    CLOUDERAHIVE,
    CLOUDERAIMPALA,
    CLOUDWATCH,
    CLOUDWATCHMETRICS,
    CMDB,
    DATALAKEGEN2,
    DB2,
    DB2AS400,
    DOCUMENTDB,
    DOMO,
    DYNAMODB,
    GOOGLECLOUDSTORAGE,
    HBASE,
    KUSTOMER,
    MICROSOFTDYNAMICS365CRM,
    MONDAY,
    MYSQL,
    OKTA,
    OPENSEARCH,
    ORACLE,
    PIPEDRIVE,
    POSTGRESQL,
    SAPHANA,
    SQLSERVER,
    SYNAPSE,
    TERADATA,
    TERADATANOS,
    TIMESTREAM,
    TPCDS,
    VERTICA
  };

namespace ConnectionTypeMapper
{
AWS_GLUE_API ConnectionType GetConnectionTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForConnectionType(ConnectionType value);
} // namespace ConnectionTypeMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
