/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
