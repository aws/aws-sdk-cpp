/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/Environment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace finspace
{
namespace Model
{

Environment::Environment() : 
    m_nameHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_awsAccountIdHasBeenSet(false),
    m_status(EnvironmentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_environmentUrlHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_environmentArnHasBeenSet(false),
    m_sageMakerStudioDomainUrlHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_dedicatedServiceAccountIdHasBeenSet(false),
    m_federationMode(FederationMode::NOT_SET),
    m_federationModeHasBeenSet(false),
    m_federationParametersHasBeenSet(false)
{
}

Environment::Environment(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_awsAccountIdHasBeenSet(false),
    m_status(EnvironmentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_environmentUrlHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_environmentArnHasBeenSet(false),
    m_sageMakerStudioDomainUrlHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_dedicatedServiceAccountIdHasBeenSet(false),
    m_federationMode(FederationMode::NOT_SET),
    m_federationModeHasBeenSet(false),
    m_federationParametersHasBeenSet(false)
{
  *this = jsonValue;
}

Environment& Environment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environmentId"))
  {
    m_environmentId = jsonValue.GetString("environmentId");

    m_environmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("awsAccountId"))
  {
    m_awsAccountId = jsonValue.GetString("awsAccountId");

    m_awsAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = EnvironmentStatusMapper::GetEnvironmentStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environmentUrl"))
  {
    m_environmentUrl = jsonValue.GetString("environmentUrl");

    m_environmentUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environmentArn"))
  {
    m_environmentArn = jsonValue.GetString("environmentArn");

    m_environmentArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sageMakerStudioDomainUrl"))
  {
    m_sageMakerStudioDomainUrl = jsonValue.GetString("sageMakerStudioDomainUrl");

    m_sageMakerStudioDomainUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dedicatedServiceAccountId"))
  {
    m_dedicatedServiceAccountId = jsonValue.GetString("dedicatedServiceAccountId");

    m_dedicatedServiceAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("federationMode"))
  {
    m_federationMode = FederationModeMapper::GetFederationModeForName(jsonValue.GetString("federationMode"));

    m_federationModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("federationParameters"))
  {
    m_federationParameters = jsonValue.GetObject("federationParameters");

    m_federationParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue Environment::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_environmentIdHasBeenSet)
  {
   payload.WithString("environmentId", m_environmentId);

  }

  if(m_awsAccountIdHasBeenSet)
  {
   payload.WithString("awsAccountId", m_awsAccountId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", EnvironmentStatusMapper::GetNameForEnvironmentStatus(m_status));
  }

  if(m_environmentUrlHasBeenSet)
  {
   payload.WithString("environmentUrl", m_environmentUrl);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_environmentArnHasBeenSet)
  {
   payload.WithString("environmentArn", m_environmentArn);

  }

  if(m_sageMakerStudioDomainUrlHasBeenSet)
  {
   payload.WithString("sageMakerStudioDomainUrl", m_sageMakerStudioDomainUrl);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  if(m_dedicatedServiceAccountIdHasBeenSet)
  {
   payload.WithString("dedicatedServiceAccountId", m_dedicatedServiceAccountId);

  }

  if(m_federationModeHasBeenSet)
  {
   payload.WithString("federationMode", FederationModeMapper::GetNameForFederationMode(m_federationMode));
  }

  if(m_federationParametersHasBeenSet)
  {
   payload.WithObject("federationParameters", m_federationParameters.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace finspace
} // namespace Aws
