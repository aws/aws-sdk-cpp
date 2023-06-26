/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/AppflowIntegrationWorkflowAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

AppflowIntegrationWorkflowAttributes::AppflowIntegrationWorkflowAttributes() : 
    m_sourceConnectorType(SourceConnectorType::NOT_SET),
    m_sourceConnectorTypeHasBeenSet(false),
    m_connectorProfileNameHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

AppflowIntegrationWorkflowAttributes::AppflowIntegrationWorkflowAttributes(JsonView jsonValue) : 
    m_sourceConnectorType(SourceConnectorType::NOT_SET),
    m_sourceConnectorTypeHasBeenSet(false),
    m_connectorProfileNameHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
  *this = jsonValue;
}

AppflowIntegrationWorkflowAttributes& AppflowIntegrationWorkflowAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceConnectorType"))
  {
    m_sourceConnectorType = SourceConnectorTypeMapper::GetSourceConnectorTypeForName(jsonValue.GetString("SourceConnectorType"));

    m_sourceConnectorTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectorProfileName"))
  {
    m_connectorProfileName = jsonValue.GetString("ConnectorProfileName");

    m_connectorProfileNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AppflowIntegrationWorkflowAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_sourceConnectorTypeHasBeenSet)
  {
   payload.WithString("SourceConnectorType", SourceConnectorTypeMapper::GetNameForSourceConnectorType(m_sourceConnectorType));
  }

  if(m_connectorProfileNameHasBeenSet)
  {
   payload.WithString("ConnectorProfileName", m_connectorProfileName);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
