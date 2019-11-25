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

#include <aws/iot/model/DomainConfigurationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

DomainConfigurationSummary::DomainConfigurationSummary() : 
    m_domainConfigurationNameHasBeenSet(false),
    m_domainConfigurationArnHasBeenSet(false),
    m_serviceType(ServiceType::NOT_SET),
    m_serviceTypeHasBeenSet(false)
{
}

DomainConfigurationSummary::DomainConfigurationSummary(JsonView jsonValue) : 
    m_domainConfigurationNameHasBeenSet(false),
    m_domainConfigurationArnHasBeenSet(false),
    m_serviceType(ServiceType::NOT_SET),
    m_serviceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

DomainConfigurationSummary& DomainConfigurationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("domainConfigurationName"))
  {
    m_domainConfigurationName = jsonValue.GetString("domainConfigurationName");

    m_domainConfigurationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("domainConfigurationArn"))
  {
    m_domainConfigurationArn = jsonValue.GetString("domainConfigurationArn");

    m_domainConfigurationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceType"))
  {
    m_serviceType = ServiceTypeMapper::GetServiceTypeForName(jsonValue.GetString("serviceType"));

    m_serviceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainConfigurationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_domainConfigurationNameHasBeenSet)
  {
   payload.WithString("domainConfigurationName", m_domainConfigurationName);

  }

  if(m_domainConfigurationArnHasBeenSet)
  {
   payload.WithString("domainConfigurationArn", m_domainConfigurationArn);

  }

  if(m_serviceTypeHasBeenSet)
  {
   payload.WithString("serviceType", ServiceTypeMapper::GetNameForServiceType(m_serviceType));
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
