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
    AWS_DATABASEMIGRATIONSERVICE_API CollectorResponse() = default;
    AWS_DATABASEMIGRATIONSERVICE_API CollectorResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API CollectorResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The reference ID of the Fleet Advisor collector.</p>
     */
    inline const Aws::String& GetCollectorReferencedId() const { return m_collectorReferencedId; }
    inline bool CollectorReferencedIdHasBeenSet() const { return m_collectorReferencedIdHasBeenSet; }
    template<typename CollectorReferencedIdT = Aws::String>
    void SetCollectorReferencedId(CollectorReferencedIdT&& value) { m_collectorReferencedIdHasBeenSet = true; m_collectorReferencedId = std::forward<CollectorReferencedIdT>(value); }
    template<typename CollectorReferencedIdT = Aws::String>
    CollectorResponse& WithCollectorReferencedId(CollectorReferencedIdT&& value) { SetCollectorReferencedId(std::forward<CollectorReferencedIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Fleet Advisor collector .</p>
     */
    inline const Aws::String& GetCollectorName() const { return m_collectorName; }
    inline bool CollectorNameHasBeenSet() const { return m_collectorNameHasBeenSet; }
    template<typename CollectorNameT = Aws::String>
    void SetCollectorName(CollectorNameT&& value) { m_collectorNameHasBeenSet = true; m_collectorName = std::forward<CollectorNameT>(value); }
    template<typename CollectorNameT = Aws::String>
    CollectorResponse& WithCollectorName(CollectorNameT&& value) { SetCollectorName(std::forward<CollectorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of your Fleet Advisor collector, in semantic versioning format,
     * for example <code>1.0.2</code> </p>
     */
    inline const Aws::String& GetCollectorVersion() const { return m_collectorVersion; }
    inline bool CollectorVersionHasBeenSet() const { return m_collectorVersionHasBeenSet; }
    template<typename CollectorVersionT = Aws::String>
    void SetCollectorVersion(CollectorVersionT&& value) { m_collectorVersionHasBeenSet = true; m_collectorVersion = std::forward<CollectorVersionT>(value); }
    template<typename CollectorVersionT = Aws::String>
    CollectorResponse& WithCollectorVersion(CollectorVersionT&& value) { SetCollectorVersion(std::forward<CollectorVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the collector version is up to date.</p>
     */
    inline VersionStatus GetVersionStatus() const { return m_versionStatus; }
    inline bool VersionStatusHasBeenSet() const { return m_versionStatusHasBeenSet; }
    inline void SetVersionStatus(VersionStatus value) { m_versionStatusHasBeenSet = true; m_versionStatus = value; }
    inline CollectorResponse& WithVersionStatus(VersionStatus value) { SetVersionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary description of the Fleet Advisor collector.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CollectorResponse& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket that the Fleet Advisor collector uses to store inventory
     * metadata.</p>
     */
    inline const Aws::String& GetS3BucketName() const { return m_s3BucketName; }
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }
    template<typename S3BucketNameT = Aws::String>
    void SetS3BucketName(S3BucketNameT&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::forward<S3BucketNameT>(value); }
    template<typename S3BucketNameT = Aws::String>
    CollectorResponse& WithS3BucketName(S3BucketNameT&& value) { SetS3BucketName(std::forward<S3BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role that grants permissions to access the specified Amazon S3
     * bucket.</p>
     */
    inline const Aws::String& GetServiceAccessRoleArn() const { return m_serviceAccessRoleArn; }
    inline bool ServiceAccessRoleArnHasBeenSet() const { return m_serviceAccessRoleArnHasBeenSet; }
    template<typename ServiceAccessRoleArnT = Aws::String>
    void SetServiceAccessRoleArn(ServiceAccessRoleArnT&& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = std::forward<ServiceAccessRoleArnT>(value); }
    template<typename ServiceAccessRoleArnT = Aws::String>
    CollectorResponse& WithServiceAccessRoleArn(ServiceAccessRoleArnT&& value) { SetServiceAccessRoleArn(std::forward<ServiceAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CollectorHealthCheck& GetCollectorHealthCheck() const { return m_collectorHealthCheck; }
    inline bool CollectorHealthCheckHasBeenSet() const { return m_collectorHealthCheckHasBeenSet; }
    template<typename CollectorHealthCheckT = CollectorHealthCheck>
    void SetCollectorHealthCheck(CollectorHealthCheckT&& value) { m_collectorHealthCheckHasBeenSet = true; m_collectorHealthCheck = std::forward<CollectorHealthCheckT>(value); }
    template<typename CollectorHealthCheckT = CollectorHealthCheck>
    CollectorResponse& WithCollectorHealthCheck(CollectorHealthCheckT&& value) { SetCollectorHealthCheck(std::forward<CollectorHealthCheckT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the last time the collector received data, in the following
     * format: <code>2022-01-24T19:04:02.596113Z</code> </p>
     */
    inline const Aws::String& GetLastDataReceived() const { return m_lastDataReceived; }
    inline bool LastDataReceivedHasBeenSet() const { return m_lastDataReceivedHasBeenSet; }
    template<typename LastDataReceivedT = Aws::String>
    void SetLastDataReceived(LastDataReceivedT&& value) { m_lastDataReceivedHasBeenSet = true; m_lastDataReceived = std::forward<LastDataReceivedT>(value); }
    template<typename LastDataReceivedT = Aws::String>
    CollectorResponse& WithLastDataReceived(LastDataReceivedT&& value) { SetLastDataReceived(std::forward<LastDataReceivedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when DMS registered the collector, in the following format:
     * <code>2022-01-24T19:04:02.596113Z</code> </p>
     */
    inline const Aws::String& GetRegisteredDate() const { return m_registeredDate; }
    inline bool RegisteredDateHasBeenSet() const { return m_registeredDateHasBeenSet; }
    template<typename RegisteredDateT = Aws::String>
    void SetRegisteredDate(RegisteredDateT&& value) { m_registeredDateHasBeenSet = true; m_registeredDate = std::forward<RegisteredDateT>(value); }
    template<typename RegisteredDateT = Aws::String>
    CollectorResponse& WithRegisteredDate(RegisteredDateT&& value) { SetRegisteredDate(std::forward<RegisteredDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when you created the collector, in the following format:
     * <code>2022-01-24T19:04:02.596113Z</code> </p>
     */
    inline const Aws::String& GetCreatedDate() const { return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    template<typename CreatedDateT = Aws::String>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::String>
    CollectorResponse& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when DMS last modified the collector, in the following format:
     * <code>2022-01-24T19:04:02.596113Z</code> </p>
     */
    inline const Aws::String& GetModifiedDate() const { return m_modifiedDate; }
    inline bool ModifiedDateHasBeenSet() const { return m_modifiedDateHasBeenSet; }
    template<typename ModifiedDateT = Aws::String>
    void SetModifiedDate(ModifiedDateT&& value) { m_modifiedDateHasBeenSet = true; m_modifiedDate = std::forward<ModifiedDateT>(value); }
    template<typename ModifiedDateT = Aws::String>
    CollectorResponse& WithModifiedDate(ModifiedDateT&& value) { SetModifiedDate(std::forward<ModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const InventoryData& GetInventoryData() const { return m_inventoryData; }
    inline bool InventoryDataHasBeenSet() const { return m_inventoryDataHasBeenSet; }
    template<typename InventoryDataT = InventoryData>
    void SetInventoryData(InventoryDataT&& value) { m_inventoryDataHasBeenSet = true; m_inventoryData = std::forward<InventoryDataT>(value); }
    template<typename InventoryDataT = InventoryData>
    CollectorResponse& WithInventoryData(InventoryDataT&& value) { SetInventoryData(std::forward<InventoryDataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_collectorReferencedId;
    bool m_collectorReferencedIdHasBeenSet = false;

    Aws::String m_collectorName;
    bool m_collectorNameHasBeenSet = false;

    Aws::String m_collectorVersion;
    bool m_collectorVersionHasBeenSet = false;

    VersionStatus m_versionStatus{VersionStatus::NOT_SET};
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
