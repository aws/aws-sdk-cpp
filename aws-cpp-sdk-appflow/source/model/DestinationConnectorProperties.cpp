/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/DestinationConnectorProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

DestinationConnectorProperties::DestinationConnectorProperties() : 
    m_redshiftHasBeenSet(false),
    m_s3HasBeenSet(false),
    m_salesforceHasBeenSet(false),
    m_snowflakeHasBeenSet(false),
    m_eventBridgeHasBeenSet(false),
    m_upsolverHasBeenSet(false)
{
}

DestinationConnectorProperties::DestinationConnectorProperties(JsonView jsonValue) : 
    m_redshiftHasBeenSet(false),
    m_s3HasBeenSet(false),
    m_salesforceHasBeenSet(false),
    m_snowflakeHasBeenSet(false),
    m_eventBridgeHasBeenSet(false),
    m_upsolverHasBeenSet(false)
{
  *this = jsonValue;
}

DestinationConnectorProperties& DestinationConnectorProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Redshift"))
  {
    m_redshift = jsonValue.GetObject("Redshift");

    m_redshiftHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3"))
  {
    m_s3 = jsonValue.GetObject("S3");

    m_s3HasBeenSet = true;
  }

  if(jsonValue.ValueExists("Salesforce"))
  {
    m_salesforce = jsonValue.GetObject("Salesforce");

    m_salesforceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Snowflake"))
  {
    m_snowflake = jsonValue.GetObject("Snowflake");

    m_snowflakeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventBridge"))
  {
    m_eventBridge = jsonValue.GetObject("EventBridge");

    m_eventBridgeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Upsolver"))
  {
    m_upsolver = jsonValue.GetObject("Upsolver");

    m_upsolverHasBeenSet = true;
  }

  return *this;
}

JsonValue DestinationConnectorProperties::Jsonize() const
{
  JsonValue payload;

  if(m_redshiftHasBeenSet)
  {
   payload.WithObject("Redshift", m_redshift.Jsonize());

  }

  if(m_s3HasBeenSet)
  {
   payload.WithObject("S3", m_s3.Jsonize());

  }

  if(m_salesforceHasBeenSet)
  {
   payload.WithObject("Salesforce", m_salesforce.Jsonize());

  }

  if(m_snowflakeHasBeenSet)
  {
   payload.WithObject("Snowflake", m_snowflake.Jsonize());

  }

  if(m_eventBridgeHasBeenSet)
  {
   payload.WithObject("EventBridge", m_eventBridge.Jsonize());

  }

  if(m_upsolverHasBeenSet)
  {
   payload.WithObject("Upsolver", m_upsolver.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
