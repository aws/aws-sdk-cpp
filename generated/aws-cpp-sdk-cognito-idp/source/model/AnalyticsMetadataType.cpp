/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/AnalyticsMetadataType.h>
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

AnalyticsMetadataType::AnalyticsMetadataType() : 
    m_analyticsEndpointIdHasBeenSet(false)
{
}

AnalyticsMetadataType::AnalyticsMetadataType(JsonView jsonValue) : 
    m_analyticsEndpointIdHasBeenSet(false)
{
  *this = jsonValue;
}

AnalyticsMetadataType& AnalyticsMetadataType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AnalyticsEndpointId"))
  {
    m_analyticsEndpointId = jsonValue.GetString("AnalyticsEndpointId");

    m_analyticsEndpointIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AnalyticsMetadataType::Jsonize() const
{
  JsonValue payload;

  if(m_analyticsEndpointIdHasBeenSet)
  {
   payload.WithString("AnalyticsEndpointId", m_analyticsEndpointId);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
