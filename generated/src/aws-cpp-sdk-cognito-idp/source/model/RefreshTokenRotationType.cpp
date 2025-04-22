/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/RefreshTokenRotationType.h>
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

RefreshTokenRotationType::RefreshTokenRotationType(JsonView jsonValue)
{
  *this = jsonValue;
}

RefreshTokenRotationType& RefreshTokenRotationType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Feature"))
  {
    m_feature = FeatureTypeMapper::GetFeatureTypeForName(jsonValue.GetString("Feature"));
    m_featureHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RetryGracePeriodSeconds"))
  {
    m_retryGracePeriodSeconds = jsonValue.GetInteger("RetryGracePeriodSeconds");
    m_retryGracePeriodSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue RefreshTokenRotationType::Jsonize() const
{
  JsonValue payload;

  if(m_featureHasBeenSet)
  {
   payload.WithString("Feature", FeatureTypeMapper::GetNameForFeatureType(m_feature));
  }

  if(m_retryGracePeriodSecondsHasBeenSet)
  {
   payload.WithInteger("RetryGracePeriodSeconds", m_retryGracePeriodSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
