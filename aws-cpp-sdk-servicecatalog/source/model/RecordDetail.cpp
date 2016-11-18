/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/servicecatalog/model/RecordDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

RecordDetail::RecordDetail() : 
    m_recordIdHasBeenSet(false),
    m_provisionedProductNameHasBeenSet(false),
    m_status(RecordStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false),
    m_provisionedProductTypeHasBeenSet(false),
    m_recordTypeHasBeenSet(false),
    m_provisionedProductIdHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_provisioningArtifactIdHasBeenSet(false),
    m_pathIdHasBeenSet(false),
    m_recordErrorsHasBeenSet(false),
    m_recordTagsHasBeenSet(false)
{
}

RecordDetail::RecordDetail(const JsonValue& jsonValue) : 
    m_recordIdHasBeenSet(false),
    m_provisionedProductNameHasBeenSet(false),
    m_status(RecordStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false),
    m_provisionedProductTypeHasBeenSet(false),
    m_recordTypeHasBeenSet(false),
    m_provisionedProductIdHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_provisioningArtifactIdHasBeenSet(false),
    m_pathIdHasBeenSet(false),
    m_recordErrorsHasBeenSet(false),
    m_recordTagsHasBeenSet(false)
{
  *this = jsonValue;
}

RecordDetail& RecordDetail::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("RecordId"))
  {
    m_recordId = jsonValue.GetString("RecordId");

    m_recordIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisionedProductName"))
  {
    m_provisionedProductName = jsonValue.GetString("ProvisionedProductName");

    m_provisionedProductNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = RecordStatusMapper::GetRecordStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedTime"))
  {
    m_updatedTime = jsonValue.GetDouble("UpdatedTime");

    m_updatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisionedProductType"))
  {
    m_provisionedProductType = jsonValue.GetString("ProvisionedProductType");

    m_provisionedProductTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecordType"))
  {
    m_recordType = jsonValue.GetString("RecordType");

    m_recordTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisionedProductId"))
  {
    m_provisionedProductId = jsonValue.GetString("ProvisionedProductId");

    m_provisionedProductIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductId"))
  {
    m_productId = jsonValue.GetString("ProductId");

    m_productIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisioningArtifactId"))
  {
    m_provisioningArtifactId = jsonValue.GetString("ProvisioningArtifactId");

    m_provisioningArtifactIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PathId"))
  {
    m_pathId = jsonValue.GetString("PathId");

    m_pathIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecordErrors"))
  {
    Array<JsonValue> recordErrorsJsonList = jsonValue.GetArray("RecordErrors");
    for(unsigned recordErrorsIndex = 0; recordErrorsIndex < recordErrorsJsonList.GetLength(); ++recordErrorsIndex)
    {
      m_recordErrors.push_back(recordErrorsJsonList[recordErrorsIndex].AsObject());
    }
    m_recordErrorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecordTags"))
  {
    Array<JsonValue> recordTagsJsonList = jsonValue.GetArray("RecordTags");
    for(unsigned recordTagsIndex = 0; recordTagsIndex < recordTagsJsonList.GetLength(); ++recordTagsIndex)
    {
      m_recordTags.push_back(recordTagsJsonList[recordTagsIndex].AsObject());
    }
    m_recordTagsHasBeenSet = true;
  }

  return *this;
}

JsonValue RecordDetail::Jsonize() const
{
  JsonValue payload;

  if(m_recordIdHasBeenSet)
  {
   payload.WithString("RecordId", m_recordId);

  }

  if(m_provisionedProductNameHasBeenSet)
  {
   payload.WithString("ProvisionedProductName", m_provisionedProductName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", RecordStatusMapper::GetNameForRecordStatus(m_status));
  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_updatedTimeHasBeenSet)
  {
   payload.WithDouble("UpdatedTime", m_updatedTime.SecondsWithMSPrecision());
  }

  if(m_provisionedProductTypeHasBeenSet)
  {
   payload.WithString("ProvisionedProductType", m_provisionedProductType);

  }

  if(m_recordTypeHasBeenSet)
  {
   payload.WithString("RecordType", m_recordType);

  }

  if(m_provisionedProductIdHasBeenSet)
  {
   payload.WithString("ProvisionedProductId", m_provisionedProductId);

  }

  if(m_productIdHasBeenSet)
  {
   payload.WithString("ProductId", m_productId);

  }

  if(m_provisioningArtifactIdHasBeenSet)
  {
   payload.WithString("ProvisioningArtifactId", m_provisioningArtifactId);

  }

  if(m_pathIdHasBeenSet)
  {
   payload.WithString("PathId", m_pathId);

  }

  if(m_recordErrorsHasBeenSet)
  {
   Array<JsonValue> recordErrorsJsonList(m_recordErrors.size());
   for(unsigned recordErrorsIndex = 0; recordErrorsIndex < recordErrorsJsonList.GetLength(); ++recordErrorsIndex)
   {
     recordErrorsJsonList[recordErrorsIndex].AsObject(m_recordErrors[recordErrorsIndex].Jsonize());
   }
   payload.WithArray("RecordErrors", std::move(recordErrorsJsonList));

  }

  if(m_recordTagsHasBeenSet)
  {
   Array<JsonValue> recordTagsJsonList(m_recordTags.size());
   for(unsigned recordTagsIndex = 0; recordTagsIndex < recordTagsJsonList.GetLength(); ++recordTagsIndex)
   {
     recordTagsJsonList[recordTagsIndex].AsObject(m_recordTags[recordTagsIndex].Jsonize());
   }
   payload.WithArray("RecordTags", std::move(recordTagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws