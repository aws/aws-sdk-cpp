﻿/*
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
    m_signingMaterialHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_signingParametersHasBeenSet(false),
    m_status(SigningProfileStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

SigningProfile::SigningProfile(JsonView jsonValue) : 
    m_profileNameHasBeenSet(false),
    m_signingMaterialHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_signingParametersHasBeenSet(false),
    m_status(SigningProfileStatus::NOT_SET),
    m_statusHasBeenSet(false)
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

  if(jsonValue.ValueExists("signingMaterial"))
  {
    m_signingMaterial = jsonValue.GetObject("signingMaterial");

    m_signingMaterialHasBeenSet = true;
  }

  if(jsonValue.ValueExists("platformId"))
  {
    m_platformId = jsonValue.GetString("platformId");

    m_platformIdHasBeenSet = true;
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

  return *this;
}

JsonValue SigningProfile::Jsonize() const
{
  JsonValue payload;

  if(m_profileNameHasBeenSet)
  {
   payload.WithString("profileName", m_profileName);

  }

  if(m_signingMaterialHasBeenSet)
  {
   payload.WithObject("signingMaterial", m_signingMaterial.Jsonize());

  }

  if(m_platformIdHasBeenSet)
  {
   payload.WithString("platformId", m_platformId);

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

  return payload;
}

} // namespace Model
} // namespace signer
} // namespace Aws
