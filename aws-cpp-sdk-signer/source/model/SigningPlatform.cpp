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

#include <aws/signer/model/SigningPlatform.h>
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

SigningPlatform::SigningPlatform() : 
    m_platformIdHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_partnerHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_category(Category::NOT_SET),
    m_categoryHasBeenSet(false),
    m_signingConfigurationHasBeenSet(false),
    m_signingImageFormatHasBeenSet(false),
    m_maxSizeInMB(0),
    m_maxSizeInMBHasBeenSet(false)
{
}

SigningPlatform::SigningPlatform(JsonView jsonValue) : 
    m_platformIdHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_partnerHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_category(Category::NOT_SET),
    m_categoryHasBeenSet(false),
    m_signingConfigurationHasBeenSet(false),
    m_signingImageFormatHasBeenSet(false),
    m_maxSizeInMB(0),
    m_maxSizeInMBHasBeenSet(false)
{
  *this = jsonValue;
}

SigningPlatform& SigningPlatform::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("platformId"))
  {
    m_platformId = jsonValue.GetString("platformId");

    m_platformIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("partner"))
  {
    m_partner = jsonValue.GetString("partner");

    m_partnerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("target"))
  {
    m_target = jsonValue.GetString("target");

    m_targetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("category"))
  {
    m_category = CategoryMapper::GetCategoryForName(jsonValue.GetString("category"));

    m_categoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("signingConfiguration"))
  {
    m_signingConfiguration = jsonValue.GetObject("signingConfiguration");

    m_signingConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("signingImageFormat"))
  {
    m_signingImageFormat = jsonValue.GetObject("signingImageFormat");

    m_signingImageFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxSizeInMB"))
  {
    m_maxSizeInMB = jsonValue.GetInteger("maxSizeInMB");

    m_maxSizeInMBHasBeenSet = true;
  }

  return *this;
}

JsonValue SigningPlatform::Jsonize() const
{
  JsonValue payload;

  if(m_platformIdHasBeenSet)
  {
   payload.WithString("platformId", m_platformId);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_partnerHasBeenSet)
  {
   payload.WithString("partner", m_partner);

  }

  if(m_targetHasBeenSet)
  {
   payload.WithString("target", m_target);

  }

  if(m_categoryHasBeenSet)
  {
   payload.WithString("category", CategoryMapper::GetNameForCategory(m_category));
  }

  if(m_signingConfigurationHasBeenSet)
  {
   payload.WithObject("signingConfiguration", m_signingConfiguration.Jsonize());

  }

  if(m_signingImageFormatHasBeenSet)
  {
   payload.WithObject("signingImageFormat", m_signingImageFormat.Jsonize());

  }

  if(m_maxSizeInMBHasBeenSet)
  {
   payload.WithInteger("maxSizeInMB", m_maxSizeInMB);

  }

  return payload;
}

} // namespace Model
} // namespace signer
} // namespace Aws
