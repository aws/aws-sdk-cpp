/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/VersionStatus.h>
#include <aws/dms/model/CollectorHealthCheck.h>
#include <aws/dms/model/InventoryData.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Describes a Fleet Advisor collector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CollectorResponse">AWS
   * API Reference</a></p>
   */
  class CollectorResponse
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API CollectorResponse();
    AWS_DATABASEMIGRATIONSERVICE_API CollectorResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API CollectorResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The reference ID of the Fleet Advisor collector.</p>
     */
    inline const Aws::String& GetCollectorReferencedId() const{ return m_collectorReferencedId; }
    inline bool CollectorReferencedIdHasBeenSet() const { return m_collectorReferencedIdHasBeenSet; }
    inline void SetCollectorReferencedId(const Aws::String& value) { m_collectorReferencedIdHasBeenSet = true; m_collectorReferencedId = value; }
    inline void SetCollectorReferencedId(Aws::String&& value) { m_collectorReferencedIdHasBeenSet = true; m_collectorReferencedId = std::move(value); }
    inline void SetCollectorReferencedId(const char* value) { m_collectorReferencedIdHasBeenSet = true; m_collectorReferencedId.assign(value); }
    inline CollectorResponse& WithCollectorReferencedId(const Aws::String& value) { SetCollectorReferencedId(value); return *this;}
    inline CollectorResponse& WithCollectorReferencedId(Aws::String&& value) { SetCollectorReferencedId(std::move(value)); return *this;}
    inline CollectorResponse& WithCollectorReferencedId(const char* value) { SetCollectorReferencedId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Fleet Advisor collector .</p>
     */
    inline const Aws::String& GetCollectorName() const{ return m_collectorName; }
    inline bool CollectorNameHasBeenSet() const { return m_collectorNameHasBeenSet; }
    inline void SetCollectorName(const Aws::String& value) { m_collectorNameHasBeenSet = true; m_collectorName = value; }
    inline void SetCollectorName(Aws::String&& value) { m_collectorNameHasBeenSet = true; m_collectorName = std::move(value); }
    inline void SetCollectorName(const char* value) { m_collectorNameHasBeenSet = true; m_collectorName.assign(value); }
    inline CollectorResponse& WithCollectorName(const Aws::String& value) { SetCollectorName(value); return *this;}
    inline CollectorResponse& WithCollectorName(Aws::String&& value) { SetCollectorName(std::move(value)); return *this;}
    inline CollectorResponse& WithCollectorName(const char* value) { SetCollectorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of your Fleet Advisor collector, in semantic versioning format,
     * for example <code>1.0.2</code> </p>
     */
    inline const Aws::String& GetCollectorVersion() const{ return m_collectorVersion; }
    inline bool CollectorVersionHasBeenSet() const { return m_collectorVersionHasBeenSet; }
    inline void SetCollectorVersion(const Aws::String& value) { m_collectorVersionHasBeenSet = true; m_collectorVersion = value; }
    inline void SetCollectorVersion(Aws::String&& value) { m_collectorVersionHasBeenSet = true; m_collectorVersion = std::move(value); }
    inline void SetCollectorVersion(const char* value) { m_collectorVersionHasBeenSet = true; m_collectorVersion.assign(value); }
    inline CollectorResponse& WithCollectorVersion(const Aws::String& value) { SetCollectorVersion(value); return *this;}
    inline CollectorResponse& WithCollectorVersion(Aws::String&& value) { SetCollectorVersion(std::move(value)); return *this;}
    inline CollectorResponse& WithCollectorVersion(const char* value) { SetCollectorVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the collector version is up to date.</p>
     */
    inline const VersionStatus& GetVersionStatus() const{ return m_versionStatus; }
    inline bool VersionStatusHasBeenSet() const { return m_versionStatusHasBeenSet; }
    inline void SetVersionStatus(const VersionStatus& value) { m_versionStatusHasBeenSet = true; m_versionStatus = value; }
    inline void SetVersionStatus(VersionStatus&& value) { m_versionStatusHasBeenSet = true; m_versionStatus = std::move(value); }
    inline CollectorResponse& WithVersionStatus(const VersionStatus& value) { SetVersionStatus(value); return *this;}
    inline CollectorResponse& WithVersionStatus(VersionStatus&& value) { SetVersionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary description of the Fleet Advisor collector.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CollectorResponse& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CollectorResponse& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CollectorResponse& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket that the Fleet Advisor collector uses to store inventory
     * metadata.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }
    inline CollectorResponse& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}
    inline CollectorResponse& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}
    inline CollectorResponse& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role that grants permissions to access the specified Amazon S3
     * bucket.</p>
     */
    inline const Aws::String& GetServiceAccessRoleArn() const{ return m_serviceAccessRoleArn; }
    inline bool ServiceAccessRoleArnHasBeenSet() const { return m_serviceAccessRoleArnHasBeenSet; }
    inline void SetServiceAccessRoleArn(const Aws::String& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = value; }
    inline void SetServiceAccessRoleArn(Aws::String&& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = std::move(value); }
    inline void SetServiceAccessRoleArn(const char* value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn.assign(value); }
    inline CollectorResponse& WithServiceAccessRoleArn(const Aws::String& value) { SetServiceAccessRoleArn(value); return *this;}
    inline CollectorResponse& WithServiceAccessRoleArn(Aws::String&& value) { SetServiceAccessRoleArn(std::move(value)); return *this;}
    inline CollectorResponse& WithServiceAccessRoleArn(const char* value) { SetServiceAccessRoleArn(value); return *this;}
    ///@}

    ///@{
    
    inline const CollectorHealthCheck& GetCollectorHealthCheck() const{ return m_collectorHealthCheck; }
    inline bool CollectorHealthCheckHasBeenSet() const { return m_collectorHealthCheckHasBeenSet; }
    inline void SetCollectorHealthCheck(const CollectorHealthCheck& value) { m_collectorHealthCheckHasBeenSet = true; m_collectorHealthCheck = value; }
    inline void SetCollectorHealthCheck(CollectorHealthCheck&& value) { m_collectorHealthCheckHasBeenSet = true; m_collectorHealthCheck = std::move(value); }
    inline CollectorResponse& WithCollectorHealthCheck(const CollectorHealthCheck& value) { SetCollectorHealthCheck(value); return *this;}
    inline CollectorResponse& WithCollectorHealthCheck(CollectorHealthCheck&& value) { SetCollectorHealthCheck(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the last time the collector received data, in the following
     * format: <code>2022-01-24T19:04:02.596113Z</code> </p>
     */
    inline const Aws::String& GetLastDataReceived() const{ return m_lastDataReceived; }
    inline bool LastDataReceivedHasBeenSet() const { return m_lastDataReceivedHasBeenSet; }
    inline void SetLastDataReceived(const Aws::String& value) { m_lastDataReceivedHasBeenSet = true; m_lastDataReceived = value; }
    inline void SetLastDataReceived(Aws::String&& value) { m_lastDataReceivedHasBeenSet = true; m_lastDataReceived = std::move(value); }
    inline void SetLastDataReceived(const char* value) { m_lastDataReceivedHasBeenSet = true; m_lastDataReceived.assign(value); }
    inline CollectorResponse& WithLastDataReceived(const Aws::String& value) { SetLastDataReceived(value); return *this;}
    inline CollectorResponse& WithLastDataReceived(Aws::String&& value) { SetLastDataReceived(std::move(value)); return *this;}
    inline CollectorResponse& WithLastDataReceived(const char* value) { SetLastDataReceived(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when DMS registered the collector, in the following format:
     * <code>2022-01-24T19:04:02.596113Z</code> </p>
     */
    inline const Aws::String& GetRegisteredDate() const{ return m_registeredDate; }
    inline bool RegisteredDateHasBeenSet() const { return m_registeredDateHasBeenSet; }
    inline void SetRegisteredDate(const Aws::String& value) { m_registeredDateHasBeenSet = true; m_registeredDate = value; }
    inline void SetRegisteredDate(Aws::String&& value) { m_registeredDateHasBeenSet = true; m_registeredDate = std::move(value); }
    inline void SetRegisteredDate(const char* value) { m_registeredDateHasBeenSet = true; m_registeredDate.assign(value); }
    inline CollectorResponse& WithRegisteredDate(const Aws::String& value) { SetRegisteredDate(value); return *this;}
    inline CollectorResponse& WithRegisteredDate(Aws::String&& value) { SetRegisteredDate(std::move(value)); return *this;}
    inline CollectorResponse& WithRegisteredDate(const char* value) { SetRegisteredDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when you created the collector, in the following format:
     * <code>2022-01-24T19:04:02.596113Z</code> </p>
     */
    inline const Aws::String& GetCreatedDate() const{ return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    inline void SetCreatedDate(const Aws::String& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }
    inline void SetCreatedDate(Aws::String&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }
    inline void SetCreatedDate(const char* value) { m_createdDateHasBeenSet = true; m_createdDate.assign(value); }
    inline CollectorResponse& WithCreatedDate(const Aws::String& value) { SetCreatedDate(value); return *this;}
    inline CollectorResponse& WithCreatedDate(Aws::String&& value) { SetCreatedDate(std::move(value)); return *this;}
    inline CollectorResponse& WithCreatedDate(const char* value) { SetCreatedDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when DMS last modified the collector, in the following format:
     * <code>2022-01-24T19:04:02.596113Z</code> </p>
     */
    inline const Aws::String& GetModifiedDate() const{ return m_modifiedDate; }
    inline bool ModifiedDateHasBeenSet() const { return m_modifiedDateHasBeenSet; }
    inline void SetModifiedDate(const Aws::String& value) { m_modifiedDateHasBeenSet = true; m_modifiedDate = value; }
    inline void SetModifiedDate(Aws::String&& value) { m_modifiedDateHasBeenSet = true; m_modifiedDate = std::move(value); }
    inline void SetModifiedDate(const char* value) { m_modifiedDateHasBeenSet = true; m_modifiedDate.assign(value); }
    inline CollectorResponse& WithModifiedDate(const Aws::String& value) { SetModifiedDate(value); return *this;}
    inline CollectorResponse& WithModifiedDate(Aws::String&& value) { SetModifiedDate(std::move(value)); return *this;}
    inline CollectorResponse& WithModifiedDate(const char* value) { SetModifiedDate(value); return *this;}
    ///@}

    ///@{
    
    inline const InventoryData& GetInventoryData() const{ return m_inventoryData; }
    inline bool InventoryDataHasBeenSet() const { return m_inventoryDataHasBeenSet; }
    inline void SetInventoryData(const InventoryData& value) { m_inventoryDataHasBeenSet = true; m_inventoryData = value; }
    inline void SetInventoryData(InventoryData&& value) { m_inventoryDataHasBeenSet = true; m_inventoryData = std::move(value); }
    inline CollectorResponse& WithInventoryData(const InventoryData& value) { SetInventoryData(value); return *this;}
    inline CollectorResponse& WithInventoryData(InventoryData&& value) { SetInventoryData(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_collectorReferencedId;
    bool m_collectorReferencedIdHasBeenSet = false;

    Aws::String m_collectorName;
    bool m_collectorNameHasBeenSet = false;

    Aws::String m_collectorVersion;
    bool m_collectorVersionHasBeenSet = false;

    VersionStatus m_versionStatus;
    bool m_versionStatusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    Aws::String m_serviceAccessRoleArn;
    bool m_serviceAccessRoleArnHasBeenSet = false;

    CollectorHealthCheck m_collectorHealthCheck;
    bool m_collectorHealthCheckHasBeenSet = false;

    Aws::String m_lastDataReceived;
    bool m_lastDataReceivedHasBeenSet = false;

    Aws::String m_registeredDate;
    bool m_registeredDateHasBeenSet = false;

    Aws::String m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::String m_modifiedDate;
    bool m_modifiedDateHasBeenSet = false;

    InventoryData m_inventoryData;
    bool m_inventoryDataHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
