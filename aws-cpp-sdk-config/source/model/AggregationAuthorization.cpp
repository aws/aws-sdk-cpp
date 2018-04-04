/*
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

#include <aws/config/model/AggregationAuthorization.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

AggregationAuthorization::AggregationAuthorization() : 
    m_aggregationAuthorizationArnHasBeenSet(false),
    m_authorizedAccountIdHasBeenSet(false),
    m_authorizedAwsRegionHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
}

AggregationAuthorization::AggregationAuthorization(const JsonValue& jsonValue) : 
    m_aggregationAuthorizationArnHasBeenSet(false),
    m_authorizedAccountIdHasBeenSet(false),
    m_authorizedAwsRegionHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

AggregationAuthorization& AggregationAuthorization::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("AggregationAuthorizationArn"))
  {
    m_aggregationAuthorizationArn = jsonValue.GetString("AggregationAuthorizationArn");

    m_aggregationAuthorizationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuthorizedAccountId"))
  {
    m_authorizedAccountId = jsonValue.GetString("AuthorizedAccountId");

    m_authorizedAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuthorizedAwsRegion"))
  {
    m_authorizedAwsRegion = jsonValue.GetString("AuthorizedAwsRegion");

    m_authorizedAwsRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue AggregationAuthorization::Jsonize() const
{
  JsonValue payload;

  if(m_aggregationAuthorizationArnHasBeenSet)
  {
   payload.WithString("AggregationAuthorizationArn", m_aggregationAuthorizationArn);

  }

  if(m_authorizedAccountIdHasBeenSet)
  {
   payload.WithString("AuthorizedAccountId", m_authorizedAccountId);

  }

  if(m_authorizedAwsRegionHasBeenSet)
  {
   payload.WithString("AuthorizedAwsRegion", m_authorizedAwsRegion);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
