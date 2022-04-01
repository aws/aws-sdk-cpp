/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsElasticBeanstalkEnvironmentOptionSetting.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsElasticBeanstalkEnvironmentOptionSetting::AwsElasticBeanstalkEnvironmentOptionSetting() : 
    m_namespaceHasBeenSet(false),
    m_optionNameHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

AwsElasticBeanstalkEnvironmentOptionSetting::AwsElasticBeanstalkEnvironmentOptionSetting(JsonView jsonValue) : 
    m_namespaceHasBeenSet(false),
    m_optionNameHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

AwsElasticBeanstalkEnvironmentOptionSetting& AwsElasticBeanstalkEnvironmentOptionSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Namespace"))
  {
    m_namespace = jsonValue.GetString("Namespace");

    m_namespaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OptionName"))
  {
    m_optionName = jsonValue.GetString("OptionName");

    m_optionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceName"))
  {
    m_resourceName = jsonValue.GetString("ResourceName");

    m_resourceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsElasticBeanstalkEnvironmentOptionSetting::Jsonize() const
{
  JsonValue payload;

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("Namespace", m_namespace);

  }

  if(m_optionNameHasBeenSet)
  {
   payload.WithString("OptionName", m_optionName);

  }

  if(m_resourceNameHasBeenSet)
  {
   payload.WithString("ResourceName", m_resourceName);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
