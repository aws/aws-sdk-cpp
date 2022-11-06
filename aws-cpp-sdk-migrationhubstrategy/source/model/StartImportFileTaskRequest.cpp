/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/StartImportFileTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MigrationHubStrategyRecommendations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartImportFileTaskRequest::StartImportFileTaskRequest() : 
    m_s3BucketHasBeenSet(false),
    m_dataSourceType(DataSourceType::NOT_SET),
    m_dataSourceTypeHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_s3bucketForReportDataHasBeenSet(false),
    m_s3keyHasBeenSet(false)
{
}

Aws::String StartImportFileTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_s3BucketHasBeenSet)
  {
   payload.WithString("S3Bucket", m_s3Bucket);

  }

  if(m_dataSourceTypeHasBeenSet)
  {
   payload.WithString("dataSourceType", DataSourceTypeMapper::GetNameForDataSourceType(m_dataSourceType));
  }

  if(m_groupIdHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupIdJsonList(m_groupId.size());
   for(unsigned groupIdIndex = 0; groupIdIndex < groupIdJsonList.GetLength(); ++groupIdIndex)
   {
     groupIdJsonList[groupIdIndex].AsObject(m_groupId[groupIdIndex].Jsonize());
   }
   payload.WithArray("groupId", std::move(groupIdJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_s3bucketForReportDataHasBeenSet)
  {
   payload.WithString("s3bucketForReportData", m_s3bucketForReportData);

  }

  if(m_s3keyHasBeenSet)
  {
   payload.WithString("s3key", m_s3key);

  }

  return payload.View().WriteReadable();
}




