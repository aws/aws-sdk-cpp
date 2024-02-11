/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/healthlake/model/IdentityProviderConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace HealthLake
{
namespace Model
{

IdentityProviderConfiguration::IdentityProviderConfiguration() : 
    m_authorizationStrategy(AuthorizationStrategy::NOT_SET),
    m_authorizationStrategyHasBeenSet(false),
    m_fineGrainedAuthorizationEnabled(false),
    m_fineGrainedAuthorizationEnabledHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_idpLambdaArnHasBeenSet(false)
{
}

IdentityProviderConfiguration::IdentityProviderConfiguration(JsonView jsonValue) : 
    m_authorizationStrategy(AuthorizationStrategy::NOT_SET),
    m_authorizationStrategyHasBeenSet(false),
    m_fineGrainedAuthorizationEnabled(false),
    m_fineGrainedAuthorizationEnabledHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_idpLambdaArnHasBeenSet(false)
{
  *this = jsonValue;
}

IdentityProviderConfiguration& IdentityProviderConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AuthorizationStrategy"))
  {
    m_authorizationStrategy = AuthorizationStrategyMapper::GetAuthorizationStrategyForName(jsonValue.GetString("AuthorizationStrategy"));

    m_authorizationStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FineGrainedAuthorizationEnabled"))
  {
    m_fineGrainedAuthorizationEnabled = jsonValue.GetBool("FineGrainedAuthorizationEnabled");

    m_fineGrainedAuthorizationEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Metadata"))
  {
    m_metadata = jsonValue.GetString("Metadata");

    m_metadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdpLambdaArn"))
  {
    m_idpLambdaArn = jsonValue.GetString("IdpLambdaArn");

    m_idpLambdaArnHasBeenSet = true;
  }

  return *this;
}

JsonValue IdentityProviderConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_authorizationStrategyHasBeenSet)
  {
   payload.WithString("AuthorizationStrategy", AuthorizationStrategyMapper::GetNameForAuthorizationStrategy(m_authorizationStrategy));
  }

  if(m_fineGrainedAuthorizationEnabledHasBeenSet)
  {
   payload.WithBool("FineGrainedAuthorizationEnabled", m_fineGrainedAuthorizationEnabled);

  }

  if(m_metadataHasBeenSet)
  {
   payload.WithString("Metadata", m_metadata);

  }

  if(m_idpLambdaArnHasBeenSet)
  {
   payload.WithString("IdpLambdaArn", m_idpLambdaArn);

  }

  return payload;
}

} // namespace Model
} // namespace HealthLake
} // namespace Aws
