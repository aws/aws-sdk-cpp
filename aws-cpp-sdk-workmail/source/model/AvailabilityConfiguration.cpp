/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/AvailabilityConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkMail
{
namespace Model
{

AvailabilityConfiguration::AvailabilityConfiguration() : 
    m_domainNameHasBeenSet(false),
    m_providerType(AvailabilityProviderType::NOT_SET),
    m_providerTypeHasBeenSet(false),
    m_ewsProviderHasBeenSet(false),
    m_lambdaProviderHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_dateModifiedHasBeenSet(false)
{
}

AvailabilityConfiguration::AvailabilityConfiguration(JsonView jsonValue) : 
    m_domainNameHasBeenSet(false),
    m_providerType(AvailabilityProviderType::NOT_SET),
    m_providerTypeHasBeenSet(false),
    m_ewsProviderHasBeenSet(false),
    m_lambdaProviderHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_dateModifiedHasBeenSet(false)
{
  *this = jsonValue;
}

AvailabilityConfiguration& AvailabilityConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProviderType"))
  {
    m_providerType = AvailabilityProviderTypeMapper::GetAvailabilityProviderTypeForName(jsonValue.GetString("ProviderType"));

    m_providerTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EwsProvider"))
  {
    m_ewsProvider = jsonValue.GetObject("EwsProvider");

    m_ewsProviderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LambdaProvider"))
  {
    m_lambdaProvider = jsonValue.GetObject("LambdaProvider");

    m_lambdaProviderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DateCreated"))
  {
    m_dateCreated = jsonValue.GetDouble("DateCreated");

    m_dateCreatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DateModified"))
  {
    m_dateModified = jsonValue.GetDouble("DateModified");

    m_dateModifiedHasBeenSet = true;
  }

  return *this;
}

JsonValue AvailabilityConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_providerTypeHasBeenSet)
  {
   payload.WithString("ProviderType", AvailabilityProviderTypeMapper::GetNameForAvailabilityProviderType(m_providerType));
  }

  if(m_ewsProviderHasBeenSet)
  {
   payload.WithObject("EwsProvider", m_ewsProvider.Jsonize());

  }

  if(m_lambdaProviderHasBeenSet)
  {
   payload.WithObject("LambdaProvider", m_lambdaProvider.Jsonize());

  }

  if(m_dateCreatedHasBeenSet)
  {
   payload.WithDouble("DateCreated", m_dateCreated.SecondsWithMSPrecision());
  }

  if(m_dateModifiedHasBeenSet)
  {
   payload.WithDouble("DateModified", m_dateModified.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace WorkMail
} // namespace Aws
