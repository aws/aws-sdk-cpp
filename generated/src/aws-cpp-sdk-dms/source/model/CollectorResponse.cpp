/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/CollectorResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

CollectorResponse::CollectorResponse() : 
    m_collectorReferencedIdHasBeenSet(false),
    m_collectorNameHasBeenSet(false),
    m_collectorVersionHasBeenSet(false),
    m_versionStatus(VersionStatus::NOT_SET),
    m_versionStatusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false),
    m_serviceAccessRoleArnHasBeenSet(false),
    m_collectorHealthCheckHasBeenSet(false),
    m_lastDataReceivedHasBeenSet(false),
    m_registeredDateHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_modifiedDateHasBeenSet(false),
    m_inventoryDataHasBeenSet(false)
{
}

CollectorResponse::CollectorResponse(JsonView jsonValue) : 
    m_collectorReferencedIdHasBeenSet(false),
    m_collectorNameHasBeenSet(false),
    m_collectorVersionHasBeenSet(false),
    m_versionStatus(VersionStatus::NOT_SET),
    m_versionStatusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false),
    m_serviceAccessRoleArnHasBeenSet(false),
    m_collectorHealthCheckHasBeenSet(false),
    m_lastDataReceivedHasBeenSet(false),
    m_registeredDateHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_modifiedDateHasBeenSet(false),
    m_inventoryDataHasBeenSet(false)
{
  *this = jsonValue;
}

CollectorResponse& CollectorResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CollectorReferencedId"))
  {
    m_collectorReferencedId = jsonValue.GetString("CollectorReferencedId");

    m_collectorReferencedIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CollectorName"))
  {
    m_collectorName = jsonValue.GetString("CollectorName");

    m_collectorNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CollectorVersion"))
  {
    m_collectorVersion = jsonValue.GetString("CollectorVersion");

    m_collectorVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VersionStatus"))
  {
    m_versionStatus = VersionStatusMapper::GetVersionStatusForName(jsonValue.GetString("VersionStatus"));

    m_versionStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3BucketName"))
  {
    m_s3BucketName = jsonValue.GetString("S3BucketName");

    m_s3BucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceAccessRoleArn"))
  {
    m_serviceAccessRoleArn = jsonValue.GetString("ServiceAccessRoleArn");

    m_serviceAccessRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CollectorHealthCheck"))
  {
    m_collectorHealthCheck = jsonValue.GetObject("CollectorHealthCheck");

    m_collectorHealthCheckHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastDataReceived"))
  {
    m_lastDataReceived = jsonValue.GetString("LastDataReceived");

    m_lastDataReceivedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegisteredDate"))
  {
    m_registeredDate = jsonValue.GetString("RegisteredDate");

    m_registeredDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetString("CreatedDate");

    m_createdDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModifiedDate"))
  {
    m_modifiedDate = jsonValue.GetString("ModifiedDate");

    m_modifiedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InventoryData"))
  {
    m_inventoryData = jsonValue.GetObject("InventoryData");

    m_inventoryDataHasBeenSet = true;
  }

  return *this;
}

JsonValue CollectorResponse::Jsonize() const
{
  JsonValue payload;

  if(m_collectorReferencedIdHasBeenSet)
  {
   payload.WithString("CollectorReferencedId", m_collectorReferencedId);

  }

  if(m_collectorNameHasBeenSet)
  {
   payload.WithString("CollectorName", m_collectorName);

  }

  if(m_collectorVersionHasBeenSet)
  {
   payload.WithString("CollectorVersion", m_collectorVersion);

  }

  if(m_versionStatusHasBeenSet)
  {
   payload.WithString("VersionStatus", VersionStatusMapper::GetNameForVersionStatus(m_versionStatus));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_s3BucketNameHasBeenSet)
  {
   payload.WithString("S3BucketName", m_s3BucketName);

  }

  if(m_serviceAccessRoleArnHasBeenSet)
  {
   payload.WithString("ServiceAccessRoleArn", m_serviceAccessRoleArn);

  }

  if(m_collectorHealthCheckHasBeenSet)
  {
   payload.WithObject("CollectorHealthCheck", m_collectorHealthCheck.Jsonize());

  }

  if(m_lastDataReceivedHasBeenSet)
  {
   payload.WithString("LastDataReceived", m_lastDataReceived);

  }

  if(m_registeredDateHasBeenSet)
  {
   payload.WithString("RegisteredDate", m_registeredDate);

  }

  if(m_createdDateHasBeenSet)
  {
   payload.WithString("CreatedDate", m_createdDate);

  }

  if(m_modifiedDateHasBeenSet)
  {
   payload.WithString("ModifiedDate", m_modifiedDate);

  }

  if(m_inventoryDataHasBeenSet)
  {
   payload.WithObject("InventoryData", m_inventoryData.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
