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

#include <aws/dynamodb/model/ReplicaDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

ReplicaDescription::ReplicaDescription() : 
    m_regionNameHasBeenSet(false),
    m_replicaStatus(ReplicaStatus::NOT_SET),
    m_replicaStatusHasBeenSet(false),
    m_replicaStatusDescriptionHasBeenSet(false),
    m_replicaStatusPercentProgressHasBeenSet(false),
    m_kMSMasterKeyIdHasBeenSet(false),
    m_provisionedThroughputOverrideHasBeenSet(false),
    m_globalSecondaryIndexesHasBeenSet(false)
{
}

ReplicaDescription::ReplicaDescription(JsonView jsonValue) : 
    m_regionNameHasBeenSet(false),
    m_replicaStatus(ReplicaStatus::NOT_SET),
    m_replicaStatusHasBeenSet(false),
    m_replicaStatusDescriptionHasBeenSet(false),
    m_replicaStatusPercentProgressHasBeenSet(false),
    m_kMSMasterKeyIdHasBeenSet(false),
    m_provisionedThroughputOverrideHasBeenSet(false),
    m_globalSecondaryIndexesHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicaDescription& ReplicaDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RegionName"))
  {
    m_regionName = jsonValue.GetString("RegionName");

    m_regionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicaStatus"))
  {
    m_replicaStatus = ReplicaStatusMapper::GetReplicaStatusForName(jsonValue.GetString("ReplicaStatus"));

    m_replicaStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicaStatusDescription"))
  {
    m_replicaStatusDescription = jsonValue.GetString("ReplicaStatusDescription");

    m_replicaStatusDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicaStatusPercentProgress"))
  {
    m_replicaStatusPercentProgress = jsonValue.GetString("ReplicaStatusPercentProgress");

    m_replicaStatusPercentProgressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KMSMasterKeyId"))
  {
    m_kMSMasterKeyId = jsonValue.GetString("KMSMasterKeyId");

    m_kMSMasterKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisionedThroughputOverride"))
  {
    m_provisionedThroughputOverride = jsonValue.GetObject("ProvisionedThroughputOverride");

    m_provisionedThroughputOverrideHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GlobalSecondaryIndexes"))
  {
    Array<JsonView> globalSecondaryIndexesJsonList = jsonValue.GetArray("GlobalSecondaryIndexes");
    for(unsigned globalSecondaryIndexesIndex = 0; globalSecondaryIndexesIndex < globalSecondaryIndexesJsonList.GetLength(); ++globalSecondaryIndexesIndex)
    {
      m_globalSecondaryIndexes.push_back(globalSecondaryIndexesJsonList[globalSecondaryIndexesIndex].AsObject());
    }
    m_globalSecondaryIndexesHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicaDescription::Jsonize() const
{
  JsonValue payload;

  if(m_regionNameHasBeenSet)
  {
   payload.WithString("RegionName", m_regionName);

  }

  if(m_replicaStatusHasBeenSet)
  {
   payload.WithString("ReplicaStatus", ReplicaStatusMapper::GetNameForReplicaStatus(m_replicaStatus));
  }

  if(m_replicaStatusDescriptionHasBeenSet)
  {
   payload.WithString("ReplicaStatusDescription", m_replicaStatusDescription);

  }

  if(m_replicaStatusPercentProgressHasBeenSet)
  {
   payload.WithString("ReplicaStatusPercentProgress", m_replicaStatusPercentProgress);

  }

  if(m_kMSMasterKeyIdHasBeenSet)
  {
   payload.WithString("KMSMasterKeyId", m_kMSMasterKeyId);

  }

  if(m_provisionedThroughputOverrideHasBeenSet)
  {
   payload.WithObject("ProvisionedThroughputOverride", m_provisionedThroughputOverride.Jsonize());

  }

  if(m_globalSecondaryIndexesHasBeenSet)
  {
   Array<JsonValue> globalSecondaryIndexesJsonList(m_globalSecondaryIndexes.size());
   for(unsigned globalSecondaryIndexesIndex = 0; globalSecondaryIndexesIndex < globalSecondaryIndexesJsonList.GetLength(); ++globalSecondaryIndexesIndex)
   {
     globalSecondaryIndexesJsonList[globalSecondaryIndexesIndex].AsObject(m_globalSecondaryIndexes[globalSecondaryIndexesIndex].Jsonize());
   }
   payload.WithArray("GlobalSecondaryIndexes", std::move(globalSecondaryIndexesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
