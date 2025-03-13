/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/SnapshotDetail.h>
#include <aws/ec2/model/ImportImageLicenseConfigurationResponse.h>
#include <aws/ec2/model/Tag.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class ImportImageResponse
  {
  public:
    AWS_EC2_API ImportImageResponse() = default;
    AWS_EC2_API ImportImageResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ImportImageResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The architecture of the virtual machine.</p>
     */
    inline const Aws::String& GetArchitecture() const { return m_architecture; }
    template<typename ArchitectureT = Aws::String>
    void SetArchitecture(ArchitectureT&& value) { m_architectureHasBeenSet = true; m_architecture = std::forward<ArchitectureT>(value); }
    template<typename ArchitectureT = Aws::String>
    ImportImageResponse& WithArchitecture(ArchitectureT&& value) { SetArchitecture(std::forward<ArchitectureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the import task.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ImportImageResponse& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the AMI is encrypted.</p>
     */
    inline bool GetEncrypted() const { return m_encrypted; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline ImportImageResponse& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target hypervisor of the import task.</p>
     */
    inline const Aws::String& GetHypervisor() const { return m_hypervisor; }
    template<typename HypervisorT = Aws::String>
    void SetHypervisor(HypervisorT&& value) { m_hypervisorHasBeenSet = true; m_hypervisor = std::forward<HypervisorT>(value); }
    template<typename HypervisorT = Aws::String>
    ImportImageResponse& WithHypervisor(HypervisorT&& value) { SetHypervisor(std::forward<HypervisorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Machine Image (AMI) created by the import task.</p>
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    ImportImageResponse& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task ID of the import image task.</p>
     */
    inline const Aws::String& GetImportTaskId() const { return m_importTaskId; }
    template<typename ImportTaskIdT = Aws::String>
    void SetImportTaskId(ImportTaskIdT&& value) { m_importTaskIdHasBeenSet = true; m_importTaskId = std::forward<ImportTaskIdT>(value); }
    template<typename ImportTaskIdT = Aws::String>
    ImportImageResponse& WithImportTaskId(ImportTaskIdT&& value) { SetImportTaskId(std::forward<ImportTaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the symmetric KMS key that was used to create the
     * encrypted AMI.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    ImportImageResponse& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The license type of the virtual machine.</p>
     */
    inline const Aws::String& GetLicenseType() const { return m_licenseType; }
    template<typename LicenseTypeT = Aws::String>
    void SetLicenseType(LicenseTypeT&& value) { m_licenseTypeHasBeenSet = true; m_licenseType = std::forward<LicenseTypeT>(value); }
    template<typename LicenseTypeT = Aws::String>
    ImportImageResponse& WithLicenseType(LicenseTypeT&& value) { SetLicenseType(std::forward<LicenseTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system of the virtual machine.</p>
     */
    inline const Aws::String& GetPlatform() const { return m_platform; }
    template<typename PlatformT = Aws::String>
    void SetPlatform(PlatformT&& value) { m_platformHasBeenSet = true; m_platform = std::forward<PlatformT>(value); }
    template<typename PlatformT = Aws::String>
    ImportImageResponse& WithPlatform(PlatformT&& value) { SetPlatform(std::forward<PlatformT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The progress of the task.</p>
     */
    inline const Aws::String& GetProgress() const { return m_progress; }
    template<typename ProgressT = Aws::String>
    void SetProgress(ProgressT&& value) { m_progressHasBeenSet = true; m_progress = std::forward<ProgressT>(value); }
    template<typename ProgressT = Aws::String>
    ImportImageResponse& WithProgress(ProgressT&& value) { SetProgress(std::forward<ProgressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the snapshots.</p>
     */
    inline const Aws::Vector<SnapshotDetail>& GetSnapshotDetails() const { return m_snapshotDetails; }
    template<typename SnapshotDetailsT = Aws::Vector<SnapshotDetail>>
    void SetSnapshotDetails(SnapshotDetailsT&& value) { m_snapshotDetailsHasBeenSet = true; m_snapshotDetails = std::forward<SnapshotDetailsT>(value); }
    template<typename SnapshotDetailsT = Aws::Vector<SnapshotDetail>>
    ImportImageResponse& WithSnapshotDetails(SnapshotDetailsT&& value) { SetSnapshotDetails(std::forward<SnapshotDetailsT>(value)); return *this;}
    template<typename SnapshotDetailsT = SnapshotDetail>
    ImportImageResponse& AddSnapshotDetails(SnapshotDetailsT&& value) { m_snapshotDetailsHasBeenSet = true; m_snapshotDetails.emplace_back(std::forward<SnapshotDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A brief status of the task.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    ImportImageResponse& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed status message of the import task.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ImportImageResponse& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARNs of the license configurations.</p>
     */
    inline const Aws::Vector<ImportImageLicenseConfigurationResponse>& GetLicenseSpecifications() const { return m_licenseSpecifications; }
    template<typename LicenseSpecificationsT = Aws::Vector<ImportImageLicenseConfigurationResponse>>
    void SetLicenseSpecifications(LicenseSpecificationsT&& value) { m_licenseSpecificationsHasBeenSet = true; m_licenseSpecifications = std::forward<LicenseSpecificationsT>(value); }
    template<typename LicenseSpecificationsT = Aws::Vector<ImportImageLicenseConfigurationResponse>>
    ImportImageResponse& WithLicenseSpecifications(LicenseSpecificationsT&& value) { SetLicenseSpecifications(std::forward<LicenseSpecificationsT>(value)); return *this;}
    template<typename LicenseSpecificationsT = ImportImageLicenseConfigurationResponse>
    ImportImageResponse& AddLicenseSpecifications(LicenseSpecificationsT&& value) { m_licenseSpecificationsHasBeenSet = true; m_licenseSpecifications.emplace_back(std::forward<LicenseSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the import image task.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ImportImageResponse& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ImportImageResponse& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The usage operation value.</p>
     */
    inline const Aws::String& GetUsageOperation() const { return m_usageOperation; }
    template<typename UsageOperationT = Aws::String>
    void SetUsageOperation(UsageOperationT&& value) { m_usageOperationHasBeenSet = true; m_usageOperation = std::forward<UsageOperationT>(value); }
    template<typename UsageOperationT = Aws::String>
    ImportImageResponse& WithUsageOperation(UsageOperationT&& value) { SetUsageOperation(std::forward<UsageOperationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ImportImageResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_architecture;
    bool m_architectureHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_encrypted{false};
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

    Aws::Vector<ImportImageLicenseConfigurationResponse> m_licenseSpecifications;
    bool m_licenseSpecificationsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_usageOperation;
    bool m_usageOperationHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
