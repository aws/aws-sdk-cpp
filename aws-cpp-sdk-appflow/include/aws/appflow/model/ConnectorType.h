/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Appflow
{
namespace Model
{
  enum class ConnectorType
  {
    NOT_SET,
    Salesforce,
    Singular,
    Slack,
    Redshift,
    S3,
    Marketo,
    Googleanalytics,
    Zendesk,
    Servicenow,
    Datadog,
    Trendmicro,
    Snowflake,
    Dynatrace,
    Infornexus,
    Amplitude,
    Veeva,
    EventBridge,
    Upsolver
  };

namespace ConnectorTypeMapper
{
AWS_APPFLOW_API ConnectorType GetConnectorTypeForName(const Aws::String& name);

AWS_APPFLOW_API Aws::String GetNameForConnectorType(ConnectorType value);
} // namespace ConnectorTypeMapper
} // namespace Model
} // namespace Appflow
} // namespace Aws
