﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/SmsConfigurationType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

SmsConfigurationType::SmsConfigurationType() : 
    m_snsCallerArnHasBeenSet(false),
    m_externalIdHasBeenSet(false),
    m_snsRegionHasBeenSet(false)
{
}

SmsConfigurationType::SmsConfigurationType(JsonView jsonValue) : 
    m_snsCallerArnHasBeenSet(false),
    m_externalIdHasBeenSet(false),
    m_snsRegionHasBeenSet(false)
{
  *this = jsonValue;
}

SmsConfigurationType& SmsConfigurationType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SnsCallerArn"))
  {
    m_snsCallerArn = jsonValue.GetString("SnsCallerArn");

    m_snsCallerArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExternalId"))
  {
    m_externalId = jsonValue.GetString("ExternalId");

    m_externalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnsRegion"))
  {
    m_snsRegion = jsonValue.GetString("SnsRegion");

    m_snsRegionHasBeenSet = true;
  }

  return *this;
}

JsonValue SmsConfigurationType::Jsonize() const
{
  JsonValue payload;

  if(m_snsCallerArnHasBeenSet)
  {
   payload.WithString("SnsCallerArn", m_snsCallerArn);

  }

  if(m_externalIdHasBeenSet)
  {
   payload.WithString("ExternalId", m_externalId);

  }

  if(m_snsRegionHasBeenSet)
  {
   payload.WithString("SnsRegion", m_snsRegion);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
