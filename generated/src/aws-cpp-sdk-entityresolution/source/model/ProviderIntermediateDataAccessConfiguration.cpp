/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/ProviderIntermediateDataAccessConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

ProviderIntermediateDataAccessConfiguration::ProviderIntermediateDataAccessConfiguration() : 
    m_awsAccountIdsHasBeenSet(false),
    m_requiredBucketActionsHasBeenSet(false)
{
}

ProviderIntermediateDataAccessConfiguration::ProviderIntermediateDataAccessConfiguration(JsonView jsonValue) : 
    m_awsAccountIdsHasBeenSet(false),
    m_requiredBucketActionsHasBeenSet(false)
{
  *this = jsonValue;
}

ProviderIntermediateDataAccessConfiguration& ProviderIntermediateDataAccessConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("awsAccountIds"))
  {
    Aws::Utils::Array<JsonView> awsAccountIdsJsonList = jsonValue.GetArray("awsAccountIds");
    for(unsigned awsAccountIdsIndex = 0; awsAccountIdsIndex < awsAccountIdsJsonList.GetLength(); ++awsAccountIdsIndex)
    {
      m_awsAccountIds.push_back(awsAccountIdsJsonList[awsAccountIdsIndex].AsString());
    }
    m_awsAccountIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requiredBucketActions"))
  {
    Aws::Utils::Array<JsonView> requiredBucketActionsJsonList = jsonValue.GetArray("requiredBucketActions");
    for(unsigned requiredBucketActionsIndex = 0; requiredBucketActionsIndex < requiredBucketActionsJsonList.GetLength(); ++requiredBucketActionsIndex)
    {
      m_requiredBucketActions.push_back(requiredBucketActionsJsonList[requiredBucketActionsIndex].AsString());
    }
    m_requiredBucketActionsHasBeenSet = true;
  }

  return *this;
}

JsonValue ProviderIntermediateDataAccessConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_awsAccountIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> awsAccountIdsJsonList(m_awsAccountIds.size());
   for(unsigned awsAccountIdsIndex = 0; awsAccountIdsIndex < awsAccountIdsJsonList.GetLength(); ++awsAccountIdsIndex)
   {
     awsAccountIdsJsonList[awsAccountIdsIndex].AsString(m_awsAccountIds[awsAccountIdsIndex]);
   }
   payload.WithArray("awsAccountIds", std::move(awsAccountIdsJsonList));

  }

  if(m_requiredBucketActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> requiredBucketActionsJsonList(m_requiredBucketActions.size());
   for(unsigned requiredBucketActionsIndex = 0; requiredBucketActionsIndex < requiredBucketActionsJsonList.GetLength(); ++requiredBucketActionsIndex)
   {
     requiredBucketActionsJsonList[requiredBucketActionsIndex].AsString(m_requiredBucketActions[requiredBucketActionsIndex]);
   }
   payload.WithArray("requiredBucketActions", std::move(requiredBucketActionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
