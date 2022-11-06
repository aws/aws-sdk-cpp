/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/FeatureGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

FeatureGroup::FeatureGroup() : 
    m_featureGroupArnHasBeenSet(false),
    m_featureGroupNameHasBeenSet(false),
    m_recordIdentifierFeatureNameHasBeenSet(false),
    m_eventTimeFeatureNameHasBeenSet(false),
    m_featureDefinitionsHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_onlineStoreConfigHasBeenSet(false),
    m_offlineStoreConfigHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_featureGroupStatus(FeatureGroupStatus::NOT_SET),
    m_featureGroupStatusHasBeenSet(false),
    m_offlineStoreStatusHasBeenSet(false),
    m_lastUpdateStatusHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

FeatureGroup::FeatureGroup(JsonView jsonValue) : 
    m_featureGroupArnHasBeenSet(false),
    m_featureGroupNameHasBeenSet(false),
    m_recordIdentifierFeatureNameHasBeenSet(false),
    m_eventTimeFeatureNameHasBeenSet(false),
    m_featureDefinitionsHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_onlineStoreConfigHasBeenSet(false),
    m_offlineStoreConfigHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_featureGroupStatus(FeatureGroupStatus::NOT_SET),
    m_featureGroupStatusHasBeenSet(false),
    m_offlineStoreStatusHasBeenSet(false),
    m_lastUpdateStatusHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

FeatureGroup& FeatureGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FeatureGroupArn"))
  {
    m_featureGroupArn = jsonValue.GetString("FeatureGroupArn");

    m_featureGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FeatureGroupName"))
  {
    m_featureGroupName = jsonValue.GetString("FeatureGroupName");

    m_featureGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecordIdentifierFeatureName"))
  {
    m_recordIdentifierFeatureName = jsonValue.GetString("RecordIdentifierFeatureName");

    m_recordIdentifierFeatureNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventTimeFeatureName"))
  {
    m_eventTimeFeatureName = jsonValue.GetString("EventTimeFeatureName");

    m_eventTimeFeatureNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FeatureDefinitions"))
  {
    Aws::Utils::Array<JsonView> featureDefinitionsJsonList = jsonValue.GetArray("FeatureDefinitions");
    for(unsigned featureDefinitionsIndex = 0; featureDefinitionsIndex < featureDefinitionsJsonList.GetLength(); ++featureDefinitionsIndex)
    {
      m_featureDefinitions.push_back(featureDefinitionsJsonList[featureDefinitionsIndex].AsObject());
    }
    m_featureDefinitionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OnlineStoreConfig"))
  {
    m_onlineStoreConfig = jsonValue.GetObject("OnlineStoreConfig");

    m_onlineStoreConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OfflineStoreConfig"))
  {
    m_offlineStoreConfig = jsonValue.GetObject("OfflineStoreConfig");

    m_offlineStoreConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FeatureGroupStatus"))
  {
    m_featureGroupStatus = FeatureGroupStatusMapper::GetFeatureGroupStatusForName(jsonValue.GetString("FeatureGroupStatus"));

    m_featureGroupStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OfflineStoreStatus"))
  {
    m_offlineStoreStatus = jsonValue.GetObject("OfflineStoreStatus");

    m_offlineStoreStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdateStatus"))
  {
    m_lastUpdateStatus = jsonValue.GetObject("LastUpdateStatus");

    m_lastUpdateStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue FeatureGroup::Jsonize() const
{
  JsonValue payload;

  if(m_featureGroupArnHasBeenSet)
  {
   payload.WithString("FeatureGroupArn", m_featureGroupArn);

  }

  if(m_featureGroupNameHasBeenSet)
  {
   payload.WithString("FeatureGroupName", m_featureGroupName);

  }

  if(m_recordIdentifierFeatureNameHasBeenSet)
  {
   payload.WithString("RecordIdentifierFeatureName", m_recordIdentifierFeatureName);

  }

  if(m_eventTimeFeatureNameHasBeenSet)
  {
   payload.WithString("EventTimeFeatureName", m_eventTimeFeatureName);

  }

  if(m_featureDefinitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> featureDefinitionsJsonList(m_featureDefinitions.size());
   for(unsigned featureDefinitionsIndex = 0; featureDefinitionsIndex < featureDefinitionsJsonList.GetLength(); ++featureDefinitionsIndex)
   {
     featureDefinitionsJsonList[featureDefinitionsIndex].AsObject(m_featureDefinitions[featureDefinitionsIndex].Jsonize());
   }
   payload.WithArray("FeatureDefinitions", std::move(featureDefinitionsJsonList));

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_onlineStoreConfigHasBeenSet)
  {
   payload.WithObject("OnlineStoreConfig", m_onlineStoreConfig.Jsonize());

  }

  if(m_offlineStoreConfigHasBeenSet)
  {
   payload.WithObject("OfflineStoreConfig", m_offlineStoreConfig.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_featureGroupStatusHasBeenSet)
  {
   payload.WithString("FeatureGroupStatus", FeatureGroupStatusMapper::GetNameForFeatureGroupStatus(m_featureGroupStatus));
  }

  if(m_offlineStoreStatusHasBeenSet)
  {
   payload.WithObject("OfflineStoreStatus", m_offlineStoreStatus.Jsonize());

  }

  if(m_lastUpdateStatusHasBeenSet)
  {
   payload.WithObject("LastUpdateStatus", m_lastUpdateStatus.Jsonize());

  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
