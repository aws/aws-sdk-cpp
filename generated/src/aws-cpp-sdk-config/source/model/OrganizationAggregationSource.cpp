/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/OrganizationAggregationSource.h>
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

OrganizationAggregationSource::OrganizationAggregationSource() : 
    m_roleArnHasBeenSet(false),
    m_awsRegionsHasBeenSet(false),
    m_allAwsRegions(false),
    m_allAwsRegionsHasBeenSet(false)
{
}

OrganizationAggregationSource::OrganizationAggregationSource(JsonView jsonValue) : 
    m_roleArnHasBeenSet(false),
    m_awsRegionsHasBeenSet(false),
    m_allAwsRegions(false),
    m_allAwsRegionsHasBeenSet(false)
{
  *this = jsonValue;
}

OrganizationAggregationSource& OrganizationAggregationSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsRegions"))
  {
    Aws::Utils::Array<JsonView> awsRegionsJsonList = jsonValue.GetArray("AwsRegions");
    for(unsigned awsRegionsIndex = 0; awsRegionsIndex < awsRegionsJsonList.GetLength(); ++awsRegionsIndex)
    {
      m_awsRegions.push_back(awsRegionsJsonList[awsRegionsIndex].AsString());
    }
    m_awsRegionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllAwsRegions"))
  {
    m_allAwsRegions = jsonValue.GetBool("AllAwsRegions");

    m_allAwsRegionsHasBeenSet = true;
  }

  return *this;
}

JsonValue OrganizationAggregationSource::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_awsRegionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> awsRegionsJsonList(m_awsRegions.size());
   for(unsigned awsRegionsIndex = 0; awsRegionsIndex < awsRegionsJsonList.GetLength(); ++awsRegionsIndex)
   {
     awsRegionsJsonList[awsRegionsIndex].AsString(m_awsRegions[awsRegionsIndex]);
   }
   payload.WithArray("AwsRegions", std::move(awsRegionsJsonList));

  }

  if(m_allAwsRegionsHasBeenSet)
  {
   payload.WithBool("AllAwsRegions", m_allAwsRegions);

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
