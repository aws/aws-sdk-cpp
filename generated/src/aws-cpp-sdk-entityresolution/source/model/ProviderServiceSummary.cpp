/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/ProviderServiceSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

ProviderServiceSummary::ProviderServiceSummary() : 
    m_providerNameHasBeenSet(false),
    m_providerServiceArnHasBeenSet(false),
    m_providerServiceDisplayNameHasBeenSet(false),
    m_providerServiceNameHasBeenSet(false),
    m_providerServiceType(ServiceType::NOT_SET),
    m_providerServiceTypeHasBeenSet(false)
{
}

ProviderServiceSummary::ProviderServiceSummary(JsonView jsonValue) : 
    m_providerNameHasBeenSet(false),
    m_providerServiceArnHasBeenSet(false),
    m_providerServiceDisplayNameHasBeenSet(false),
    m_providerServiceNameHasBeenSet(false),
    m_providerServiceType(ServiceType::NOT_SET),
    m_providerServiceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ProviderServiceSummary& ProviderServiceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("providerName"))
  {
    m_providerName = jsonValue.GetString("providerName");

    m_providerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("providerServiceArn"))
  {
    m_providerServiceArn = jsonValue.GetString("providerServiceArn");

    m_providerServiceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("providerServiceDisplayName"))
  {
    m_providerServiceDisplayName = jsonValue.GetString("providerServiceDisplayName");

    m_providerServiceDisplayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("providerServiceName"))
  {
    m_providerServiceName = jsonValue.GetString("providerServiceName");

    m_providerServiceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("providerServiceType"))
  {
    m_providerServiceType = ServiceTypeMapper::GetServiceTypeForName(jsonValue.GetString("providerServiceType"));

    m_providerServiceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ProviderServiceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_providerNameHasBeenSet)
  {
   payload.WithString("providerName", m_providerName);

  }

  if(m_providerServiceArnHasBeenSet)
  {
   payload.WithString("providerServiceArn", m_providerServiceArn);

  }

  if(m_providerServiceDisplayNameHasBeenSet)
  {
   payload.WithString("providerServiceDisplayName", m_providerServiceDisplayName);

  }

  if(m_providerServiceNameHasBeenSet)
  {
   payload.WithString("providerServiceName", m_providerServiceName);

  }

  if(m_providerServiceTypeHasBeenSet)
  {
   payload.WithString("providerServiceType", ServiceTypeMapper::GetNameForServiceType(m_providerServiceType));
  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
