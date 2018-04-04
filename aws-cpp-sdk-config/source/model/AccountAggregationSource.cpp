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

#include <aws/config/model/AccountAggregationSource.h>
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

AccountAggregationSource::AccountAggregationSource() : 
    m_accountIdsHasBeenSet(false),
    m_allAwsRegions(false),
    m_allAwsRegionsHasBeenSet(false),
    m_awsRegionsHasBeenSet(false)
{
}

AccountAggregationSource::AccountAggregationSource(const JsonValue& jsonValue) : 
    m_accountIdsHasBeenSet(false),
    m_allAwsRegions(false),
    m_allAwsRegionsHasBeenSet(false),
    m_awsRegionsHasBeenSet(false)
{
  *this = jsonValue;
}

AccountAggregationSource& AccountAggregationSource::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("AccountIds"))
  {
    Array<JsonValue> accountIdsJsonList = jsonValue.GetArray("AccountIds");
    for(unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex)
    {
      m_accountIds.push_back(accountIdsJsonList[accountIdsIndex].AsString());
    }
    m_accountIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllAwsRegions"))
  {
    m_allAwsRegions = jsonValue.GetBool("AllAwsRegions");

    m_allAwsRegionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsRegions"))
  {
    Array<JsonValue> awsRegionsJsonList = jsonValue.GetArray("AwsRegions");
    for(unsigned awsRegionsIndex = 0; awsRegionsIndex < awsRegionsJsonList.GetLength(); ++awsRegionsIndex)
    {
      m_awsRegions.push_back(awsRegionsJsonList[awsRegionsIndex].AsString());
    }
    m_awsRegionsHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountAggregationSource::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdsHasBeenSet)
  {
   Array<JsonValue> accountIdsJsonList(m_accountIds.size());
   for(unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex)
   {
     accountIdsJsonList[accountIdsIndex].AsString(m_accountIds[accountIdsIndex]);
   }
   payload.WithArray("AccountIds", std::move(accountIdsJsonList));

  }

  if(m_allAwsRegionsHasBeenSet)
  {
   payload.WithBool("AllAwsRegions", m_allAwsRegions);

  }

  if(m_awsRegionsHasBeenSet)
  {
   Array<JsonValue> awsRegionsJsonList(m_awsRegions.size());
   for(unsigned awsRegionsIndex = 0; awsRegionsIndex < awsRegionsJsonList.GetLength(); ++awsRegionsIndex)
   {
     awsRegionsJsonList[awsRegionsIndex].AsString(m_awsRegions[awsRegionsIndex]);
   }
   payload.WithArray("AwsRegions", std::move(awsRegionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
