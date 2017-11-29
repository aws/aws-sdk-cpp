/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_coreDefinitionVersionArnHasBeenSet(false),
    m_deviceDefinitionVersionArnHasBeenSet(false),
    m_functionDefinitionVersionArnHasBeenSet(false),
    m_loggerDefinitionVersionArnHasBeenSet(false),
    m_resourceDefinitionVersionArnHasBeenSet(false),
    m_subscriptionDefinitionVersionArnHasBeenSet(false)
{
}

GroupVersion::GroupVersion(const JsonValue& jsonValue) : 
    m_coreDefinitionVersionArnHasBeenSet(false),
    m_deviceDefinitionVersionArnHasBeenSet(false),
    m_functionDefinitionVersionArnHasBeenSet(false),
    m_loggerDefinitionVersionArnHasBeenSet(false),
    m_resourceDefinitionVersionArnHasBeenSet(false),
    m_subscriptionDefinitionVersionArnHasBeenSet(false)
{
  *this = jsonValue;
}

GroupVersion& GroupVersion::operator =(const JsonValue& jsonValue)
{
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
