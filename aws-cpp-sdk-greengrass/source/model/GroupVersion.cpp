/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/GroupVersion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Greengrass
{
namespace Model
{

GroupVersion::GroupVersion() : 
    m_connectorDefinitionVersionArnHasBeenSet(false),
    m_coreDefinitionVersionArnHasBeenSet(false),
    m_deviceDefinitionVersionArnHasBeenSet(false),
    m_functionDefinitionVersionArnHasBeenSet(false),
    m_loggerDefinitionVersionArnHasBeenSet(false),
    m_resourceDefinitionVersionArnHasBeenSet(false),
    m_subscriptionDefinitionVersionArnHasBeenSet(false)
{
}

GroupVersion::GroupVersion(JsonView jsonValue) : 
    m_connectorDefinitionVersionArnHasBeenSet(false),
    m_coreDefinitionVersionArnHasBeenSet(false),
    m_deviceDefinitionVersionArnHasBeenSet(false),
    m_functionDefinitionVersionArnHasBeenSet(false),
    m_loggerDefinitionVersionArnHasBeenSet(false),
    m_resourceDefinitionVersionArnHasBeenSet(false),
    m_subscriptionDefinitionVersionArnHasBeenSet(false)
{
  *this = jsonValue;
}

GroupVersion& GroupVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConnectorDefinitionVersionArn"))
  {
    m_connectorDefinitionVersionArn = jsonValue.GetString("ConnectorDefinitionVersionArn");

    m_connectorDefinitionVersionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CoreDefinitionVersionArn"))
  {
    m_coreDefinitionVersionArn = jsonValue.GetString("CoreDefinitionVersionArn");

    m_coreDefinitionVersionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceDefinitionVersionArn"))
  {
    m_deviceDefinitionVersionArn = jsonValue.GetString("DeviceDefinitionVersionArn");

    m_deviceDefinitionVersionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FunctionDefinitionVersionArn"))
  {
    m_functionDefinitionVersionArn = jsonValue.GetString("FunctionDefinitionVersionArn");

    m_functionDefinitionVersionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LoggerDefinitionVersionArn"))
  {
    m_loggerDefinitionVersionArn = jsonValue.GetString("LoggerDefinitionVersionArn");

    m_loggerDefinitionVersionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceDefinitionVersionArn"))
  {
    m_resourceDefinitionVersionArn = jsonValue.GetString("ResourceDefinitionVersionArn");

    m_resourceDefinitionVersionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubscriptionDefinitionVersionArn"))
  {
    m_subscriptionDefinitionVersionArn = jsonValue.GetString("SubscriptionDefinitionVersionArn");

    m_subscriptionDefinitionVersionArnHasBeenSet = true;
  }

  return *this;
}

JsonValue GroupVersion::Jsonize() const
{
  JsonValue payload;

  if(m_connectorDefinitionVersionArnHasBeenSet)
  {
   payload.WithString("ConnectorDefinitionVersionArn", m_connectorDefinitionVersionArn);

  }

  if(m_coreDefinitionVersionArnHasBeenSet)
  {
   payload.WithString("CoreDefinitionVersionArn", m_coreDefinitionVersionArn);

  }

  if(m_deviceDefinitionVersionArnHasBeenSet)
  {
   payload.WithString("DeviceDefinitionVersionArn", m_deviceDefinitionVersionArn);

  }

  if(m_functionDefinitionVersionArnHasBeenSet)
  {
   payload.WithString("FunctionDefinitionVersionArn", m_functionDefinitionVersionArn);

  }

  if(m_loggerDefinitionVersionArnHasBeenSet)
  {
   payload.WithString("LoggerDefinitionVersionArn", m_loggerDefinitionVersionArn);

  }

  if(m_resourceDefinitionVersionArnHasBeenSet)
  {
   payload.WithString("ResourceDefinitionVersionArn", m_resourceDefinitionVersionArn);

  }

  if(m_subscriptionDefinitionVersionArnHasBeenSet)
  {
   payload.WithString("SubscriptionDefinitionVersionArn", m_subscriptionDefinitionVersionArn);

  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
