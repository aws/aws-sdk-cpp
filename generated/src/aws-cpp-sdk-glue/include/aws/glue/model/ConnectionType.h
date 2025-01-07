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
    SLACK,
    STRIPE,
    INTERCOM,
    SNAPCHATADS
  };

namespace ConnectionTypeMapper
{
AWS_GLUE_API ConnectionType GetConnectionTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForConnectionType(ConnectionType value);
} // namespace ConnectionTypeMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
