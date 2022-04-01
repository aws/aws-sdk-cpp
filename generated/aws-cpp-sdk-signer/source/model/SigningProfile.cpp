/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/model/SigningProfile.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace signer
{
namespace Model
{

SigningProfile::SigningProfile() : 
    m_profileNameHasBeenSet(false),
    m_profileVersionHasBeenSet(false),
    m_profileVersionArnHasBeenSet(false),
    m_signingMaterialHasBeenSet(false),
    m_signatureValidityPeriodHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_platformDisplayNameHasBeenSet(false),
    m_signingParametersHasBeenSet(false),
    m_status(SigningProfileStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

SigningProfile::SigningProfile(JsonView jsonValue) : 
    m_profileNameHasBeenSet(false),
    m_profileVersionHasBeenSet(false),
    m_profileVersionArnHasBeenSet(false),
    m_signingMaterialHasBeenSet(false),
    m_signatureValidityPeriodHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_platformDisplayNameHasBeenSet(false),
    m_signingParametersHasBeenSet(false),
    m_status(SigningProfileStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

SigningProfile& SigningProfile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("profileName"))
  {
    m_profileName = jsonValue.GetString("profileName");

    m_profileNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("profileVersion"))
  {
    m_profileVersion = jsonValue.GetString("profileVersion");

    m_profileVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("profileVersionArn"))
  {
    m_profileVersionArn = jsonValue.GetString("profileVersionArn");

    m_profileVersionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("signingMaterial"))
  {
    m_signingMaterial = jsonValue.GetObject("signingMaterial");

    m_signingMaterialHasBeenSet = true;
  }

  if(jsonValue.ValueExists("signatureValidityPeriod"))
  {
    m_signatureValidityPeriod = jsonValue.GetObject("signatureValidityPeriod");

    m_signatureValidityPeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("platformId"))
  {
    m_platformId = jsonValue.GetString("platformId");

    m_platformIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("platformDisplayName"))
  {
    m_platformDisplayName = jsonValue.GetString("platformDisplayName");

    m_platformDisplayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("signingParameters"))
  {
    Aws::Map<Aws::String, JsonView> signingParametersJsonMap = jsonValue.GetObject("signingParameters").GetAllObjects();
    for(auto& signingParametersItem : signingParametersJsonMap)
    {
      m_signingParameters[signingParametersItem.first] = signingParametersItem.second.AsString();
    }
    m_signingParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = SigningProfileStatusMapper::GetSigningProfileStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue SigningProfile::Jsonize() const
{
  JsonValue payload;

  if(m_profileNameHasBeenSet)
  {
   payload.WithString("profileName", m_profileName);

  }

  if(m_profileVersionHasBeenSet)
  {
   payload.WithString("profileVersion", m_profileVersion);

  }

  if(m_profileVersionArnHasBeenSet)
  {
   payload.WithString("profileVersionArn", m_profileVersionArn);

  }

  if(m_signingMaterialHasBeenSet)
  {
   payload.WithObject("signingMaterial", m_signingMaterial.Jsonize());

  }

  if(m_signatureValidityPeriodHasBeenSet)
  {
   payload.WithObject("signatureValidityPeriod", m_signatureValidityPeriod.Jsonize());

  }

  if(m_platformIdHasBeenSet)
  {
   payload.WithString("platformId", m_platformId);

  }

  if(m_platformDisplayNameHasBeenSet)
  {
   payload.WithString("platformDisplayName", m_platformDisplayName);

  }

  if(m_signingParametersHasBeenSet)
  {
   JsonValue signingParametersJsonMap;
   for(auto& signingParametersItem : m_signingParameters)
   {
     signingParametersJsonMap.WithString(signingParametersItem.first, signingParametersItem.second);
   }
   payload.WithObject("signingParameters", std::move(signingParametersJsonMap));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", SigningProfileStatusMapper::GetNameForSigningProfileStatus(m_status));
  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace signer
} // namespace Aws
