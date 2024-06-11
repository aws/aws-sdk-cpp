/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/BootModeValues.h>
#include <aws/ec2/model/SnapshotDetail.h>
#include <aws/ec2/model/Tag.h>
#include <aws/ec2/model/ImportImageLicenseConfigurationResponse.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes an import image task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImportImageTask">AWS
   * API Reference</a></p>
   */
  class ImportImageTask
  {
  public:
    AWS_EC2_API ImportImageTask();
    AWS_EC2_API ImportImageTask(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ImportImageTask& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The architecture of the virtual machine.</p> <p>Valid values:
     * <code>i386</code> | <code>x86_64</code> | <code>arm64</code> </p>
     */
    inline const Aws::String& GetArchitecture() const{ return m_architecture; }
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
    inline void SetArchitecture(const Aws::String& value) { m_architectureHasBeenSet = true; m_architecture = value; }
    inline void SetArchitecture(Aws::String&& value) { m_architectureHasBeenSet = true; m_architecture = std::move(value); }
    inline void SetArchitecture(const char* value) { m_architectureHasBeenSet = true; m_architecture.assign(value); }
    inline ImportImageTask& WithArchitecture(const Aws::String& value) { SetArchitecture(value); return *this;}
    inline ImportImageTask& WithArchitecture(Aws::String&& value) { SetArchitecture(std::move(value)); return *this;}
    inline ImportImageTask& WithArchitecture(const char* value) { SetArchitecture(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the import task.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ImportImageTask& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ImportImageTask& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ImportImageTask& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the image is encrypted.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline ImportImageTask& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target hypervisor for the import task.</p> <p>Valid values:
     * <code>xen</code> </p>
     */
    inline const Aws::String& GetHypervisor() const{ return m_hypervisor; }
    inline bool HypervisorHasBeenSet() const { return m_hypervisorHasBeenSet; }
    inline void SetHypervisor(const Aws::String& value) { m_hypervisorHasBeenSet = true; m_hypervisor = value; }
    inline void SetHypervisor(Aws::String&& value) { m_hypervisorHasBeenSet = true; m_hypervisor = std::move(value); }
    inline void SetHypervisor(const char* value) { m_hypervisorHasBeenSet = true; m_hypervisor.assign(value); }
    inline ImportImageTask& WithHypervisor(const Aws::String& value) { SetHypervisor(value); return *this;}
    inline ImportImageTask& WithHypervisor(Aws::String&& value) { SetHypervisor(std::move(value)); return *this;}
    inline ImportImageTask& WithHypervisor(const char* value) { SetHypervisor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Machine Image (AMI) of the imported virtual machine.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }
    inline ImportImageTask& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}
    inline ImportImageTask& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}
    inline ImportImageTask& WithImageId(const char* value) { SetImageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the import image task.</p>
     */
    inline const Aws::String& GetImportTaskId() const{ return m_importTaskId; }
    inline bool ImportTaskIdHasBeenSet() const { return m_importTaskIdHasBeenSet; }
    inline void SetImportTaskId(const Aws::String& value) { m_importTaskIdHasBeenSet = true; m_importTaskId = value; }
    inline void SetImportTaskId(Aws::String&& value) { m_importTaskIdHasBeenSet = true; m_importTaskId = std::move(value); }
    inline void SetImportTaskId(const char* value) { m_importTaskIdHasBeenSet = true; m_importTaskId.assign(value); }
    inline ImportImageTask& WithImportTaskId(const Aws::String& value) { SetImportTaskId(value); return *this;}
    inline ImportImageTask& WithImportTaskId(Aws::String&& value) { SetImportTaskId(std::move(value)); return *this;}
    inline ImportImageTask& WithImportTaskId(const char* value) { SetImportTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the KMS key that was used to create the encrypted
     * image.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline ImportImageTask& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline ImportImageTask& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline ImportImageTask& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The license type of the virtual machine.</p>
     */
    inline const Aws::String& GetLicenseType() const{ return m_licenseType; }
    inline bool LicenseTypeHasBeenSet() const { return m_licenseTypeHasBeenSet; }
    inline void SetLicenseType(const Aws::String& value) { m_licenseTypeHasBeenSet = true; m_licenseType = value; }
    inline void SetLicenseType(Aws::String&& value) { m_licenseTypeHasBeenSet = true; m_licenseType = std::move(value); }
    inline void SetLicenseType(const char* value) { m_licenseTypeHasBeenSet = true; m_licenseType.assign(value); }
    inline ImportImageTask& WithLicenseType(const Aws::String& value) { SetLicenseType(value); return *this;}
    inline ImportImageTask& WithLicenseType(Aws::String&& value) { SetLicenseType(std::move(value)); return *this;}
    inline ImportImageTask& WithLicenseType(const char* value) { SetLicenseType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description string for the import image task.</p>
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }
    inline ImportImageTask& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}
    inline ImportImageTask& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}
    inline ImportImageTask& WithPlatform(const char* value) { SetPlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of progress of the import image task.</p>
     */
    inline const Aws::String& GetProgress() const{ return m_progress; }
    inline bool ProgressHasBeenSet() const { return m_progressHasBeenSet; }
    inline void SetProgress(const Aws::String& value) { m_progressHasBeenSet = true; m_progress = value; }
    inline void SetProgress(Aws::String&& value) { m_progressHasBeenSet = true; m_progress = std::move(value); }
    inline void SetProgress(const char* value) { m_progressHasBeenSet = true; m_progress.assign(value); }
    inline ImportImageTask& WithProgress(const Aws::String& value) { SetProgress(value); return *this;}
    inline ImportImageTask& WithProgress(Aws::String&& value) { SetProgress(std::move(value)); return *this;}
    inline ImportImageTask& WithProgress(const char* value) { SetProgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the snapshots.</p>
     */
    inline const Aws::Vector<SnapshotDetail>& GetSnapshotDetails() const{ return m_snapshotDetails; }
    inline bool SnapshotDetailsHasBeenSet() const { return m_snapshotDetailsHasBeenSet; }
    inline void SetSnapshotDetails(const Aws::Vector<SnapshotDetail>& value) { m_snapshotDetailsHasBeenSet = true; m_snapshotDetails = value; }
    inline void SetSnapshotDetails(Aws::Vector<SnapshotDetail>&& value) { m_snapshotDetailsHasBeenSet = true; m_snapshotDetails = std::move(value); }
    inline ImportImageTask& WithSnapshotDetails(const Aws::Vector<SnapshotDetail>& value) { SetSnapshotDetails(value); return *this;}
    inline ImportImageTask& WithSnapshotDetails(Aws::Vector<SnapshotDetail>&& value) { SetSnapshotDetails(std::move(value)); return *this;}
    inline ImportImageTask& AddSnapshotDetails(const SnapshotDetail& value) { m_snapshotDetailsHasBeenSet = true; m_snapshotDetails.push_back(value); return *this; }
    inline ImportImageTask& AddSnapshotDetails(SnapshotDetail&& value) { m_snapshotDetailsHasBeenSet = true; m_snapshotDetails.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A brief status for the import image task.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline ImportImageTask& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline ImportImageTask& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline ImportImageTask& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive status message for the import image task.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline ImportImageTask& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline ImportImageTask& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline ImportImageTask& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the import image task.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ImportImageTask& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline ImportImageTask& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline ImportImageTask& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline ImportImageTask& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARNs of the license configurations that are associated with the import
     * image task.</p>
     */
    inline const Aws::Vector<ImportImageLicenseConfigurationResponse>& GetLicenseSpecifications() const{ return m_licenseSpecifications; }
    inline bool LicenseSpecificationsHasBeenSet() const { return m_licenseSpecificationsHasBeenSet; }
    inline void SetLicenseSpecifications(const Aws::Vector<ImportImageLicenseConfigurationResponse>& value) { m_licenseSpecificationsHasBeenSet = true; m_licenseSpecifications = value; }
    inline void SetLicenseSpecifications(Aws::Vector<ImportImageLicenseConfigurationResponse>&& value) { m_licenseSpecificationsHasBeenSet = true; m_licenseSpecifications = std::move(value); }
    inline ImportImageTask& WithLicenseSpecifications(const Aws::Vector<ImportImageLicenseConfigurationResponse>& value) { SetLicenseSpecifications(value); return *this;}
    inline ImportImageTask& WithLicenseSpecifications(Aws::Vector<ImportImageLicenseConfigurationResponse>&& value) { SetLicenseSpecifications(std::move(value)); return *this;}
    inline ImportImageTask& AddLicenseSpecifications(const ImportImageLicenseConfigurationResponse& value) { m_licenseSpecificationsHasBeenSet = true; m_licenseSpecifications.push_back(value); return *this; }
    inline ImportImageTask& AddLicenseSpecifications(ImportImageLicenseConfigurationResponse&& value) { m_licenseSpecificationsHasBeenSet = true; m_licenseSpecifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The usage operation value.</p>
     */
    inline const Aws::String& GetUsageOperation() const{ return m_usageOperation; }
    inline bool UsageOperationHasBeenSet() const { return m_usageOperationHasBeenSet; }
    inline void SetUsageOperation(const Aws::String& value) { m_usageOperationHasBeenSet = true; m_usageOperation = value; }
    inline void SetUsageOperation(Aws::String&& value) { m_usageOperationHasBeenSet = true; m_usageOperation = std::move(value); }
    inline void SetUsageOperation(const char* value) { m_usageOperationHasBeenSet = true; m_usageOperation.assign(value); }
    inline ImportImageTask& WithUsageOperation(const Aws::String& value) { SetUsageOperation(value); return *this;}
    inline ImportImageTask& WithUsageOperation(Aws::String&& value) { SetUsageOperation(std::move(value)); return *this;}
    inline ImportImageTask& WithUsageOperation(const char* value) { SetUsageOperation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The boot mode of the virtual machine.</p>
     */
    inline const BootModeValues& GetBootMode() const{ return m_bootMode; }
    inline bool BootModeHasBeenSet() const { return m_bootModeHasBeenSet; }
    inline void SetBootMode(const BootModeValues& value) { m_bootModeHasBeenSet = true; m_bootMode = value; }
    inline void SetBootMode(BootModeValues&& value) { m_bootModeHasBeenSet = true; m_bootMode = std::move(value); }
    inline ImportImageTask& WithBootMode(const BootModeValues& value) { SetBootMode(value); return *this;}
    inline ImportImageTask& WithBootMode(BootModeValues&& value) { SetBootMode(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_architecture;
    bool m_architectureHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_encrypted;
    bool m_encryptedHasBeenSet = false;

    Aws::String m_hypervisor;
    bool m_hypervisorHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::String m_importTaskId;
    bool m_importTaskIdHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_licenseType;
    bool m_licenseTypeHasBeenSet = false;

    Aws::String m_platform;
    bool m_platformHasBeenSet = false;

    Aws::String m_progress;
    bool m_progressHasBeenSet = false;

    Aws::Vector<SnapshotDetail> m_snapshotDetails;
    bool m_snapshotDetailsHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<ImportImageLicenseConfigurationResponse> m_licenseSpecifications;
    bool m_licenseSpecificationsHasBeenSet = false;

    Aws::String m_usageOperation;
    bool m_usageOperationHasBeenSet = false;

    BootModeValues m_bootMode;
    bool m_bootModeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
