﻿/**
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
  class AWS_EC2_API ImportImageResponse
  {
  public:
    ImportImageResponse();
    ImportImageResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ImportImageResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The architecture of the virtual machine.</p>
     */
    inline const Aws::String& GetArchitecture() const{ return m_architecture; }

    /**
     * <p>The architecture of the virtual machine.</p>
     */
    inline void SetArchitecture(const Aws::String& value) { m_architecture = value; }

    /**
     * <p>The architecture of the virtual machine.</p>
     */
    inline void SetArchitecture(Aws::String&& value) { m_architecture = std::move(value); }

    /**
     * <p>The architecture of the virtual machine.</p>
     */
    inline void SetArchitecture(const char* value) { m_architecture.assign(value); }

    /**
     * <p>The architecture of the virtual machine.</p>
     */
    inline ImportImageResponse& WithArchitecture(const Aws::String& value) { SetArchitecture(value); return *this;}

    /**
     * <p>The architecture of the virtual machine.</p>
     */
    inline ImportImageResponse& WithArchitecture(Aws::String&& value) { SetArchitecture(std::move(value)); return *this;}

    /**
     * <p>The architecture of the virtual machine.</p>
     */
    inline ImportImageResponse& WithArchitecture(const char* value) { SetArchitecture(value); return *this;}


    /**
     * <p>A description of the import task.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the import task.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>A description of the import task.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>A description of the import task.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>A description of the import task.</p>
     */
    inline ImportImageResponse& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the import task.</p>
     */
    inline ImportImageResponse& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the import task.</p>
     */
    inline ImportImageResponse& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Indicates whether the AMI is encrypted.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>Indicates whether the AMI is encrypted.</p>
     */
    inline void SetEncrypted(bool value) { m_encrypted = value; }

    /**
     * <p>Indicates whether the AMI is encrypted.</p>
     */
    inline ImportImageResponse& WithEncrypted(bool value) { SetEncrypted(value); return *this;}


    /**
     * <p>The target hypervisor of the import task.</p>
     */
    inline const Aws::String& GetHypervisor() const{ return m_hypervisor; }

    /**
     * <p>The target hypervisor of the import task.</p>
     */
    inline void SetHypervisor(const Aws::String& value) { m_hypervisor = value; }

    /**
     * <p>The target hypervisor of the import task.</p>
     */
    inline void SetHypervisor(Aws::String&& value) { m_hypervisor = std::move(value); }

    /**
     * <p>The target hypervisor of the import task.</p>
     */
    inline void SetHypervisor(const char* value) { m_hypervisor.assign(value); }

    /**
     * <p>The target hypervisor of the import task.</p>
     */
    inline ImportImageResponse& WithHypervisor(const Aws::String& value) { SetHypervisor(value); return *this;}

    /**
     * <p>The target hypervisor of the import task.</p>
     */
    inline ImportImageResponse& WithHypervisor(Aws::String&& value) { SetHypervisor(std::move(value)); return *this;}

    /**
     * <p>The target hypervisor of the import task.</p>
     */
    inline ImportImageResponse& WithHypervisor(const char* value) { SetHypervisor(value); return *this;}


    /**
     * <p>The ID of the Amazon Machine Image (AMI) created by the import task.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>The ID of the Amazon Machine Image (AMI) created by the import task.</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageId = value; }

    /**
     * <p>The ID of the Amazon Machine Image (AMI) created by the import task.</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageId = std::move(value); }

    /**
     * <p>The ID of the Amazon Machine Image (AMI) created by the import task.</p>
     */
    inline void SetImageId(const char* value) { m_imageId.assign(value); }

    /**
     * <p>The ID of the Amazon Machine Image (AMI) created by the import task.</p>
     */
    inline ImportImageResponse& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The ID of the Amazon Machine Image (AMI) created by the import task.</p>
     */
    inline ImportImageResponse& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Machine Image (AMI) created by the import task.</p>
     */
    inline ImportImageResponse& WithImageId(const char* value) { SetImageId(value); return *this;}


    /**
     * <p>The task ID of the import image task.</p>
     */
    inline const Aws::String& GetImportTaskId() const{ return m_importTaskId; }

    /**
     * <p>The task ID of the import image task.</p>
     */
    inline void SetImportTaskId(const Aws::String& value) { m_importTaskId = value; }

    /**
     * <p>The task ID of the import image task.</p>
     */
    inline void SetImportTaskId(Aws::String&& value) { m_importTaskId = std::move(value); }

    /**
     * <p>The task ID of the import image task.</p>
     */
    inline void SetImportTaskId(const char* value) { m_importTaskId.assign(value); }

    /**
     * <p>The task ID of the import image task.</p>
     */
    inline ImportImageResponse& WithImportTaskId(const Aws::String& value) { SetImportTaskId(value); return *this;}

    /**
     * <p>The task ID of the import image task.</p>
     */
    inline ImportImageResponse& WithImportTaskId(Aws::String&& value) { SetImportTaskId(std::move(value)); return *this;}

    /**
     * <p>The task ID of the import image task.</p>
     */
    inline ImportImageResponse& WithImportTaskId(const char* value) { SetImportTaskId(value); return *this;}


    /**
     * <p>The identifier for the symmetric KMS key that was used to create the
     * encrypted AMI.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The identifier for the symmetric KMS key that was used to create the
     * encrypted AMI.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }

    /**
     * <p>The identifier for the symmetric KMS key that was used to create the
     * encrypted AMI.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }

    /**
     * <p>The identifier for the symmetric KMS key that was used to create the
     * encrypted AMI.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }

    /**
     * <p>The identifier for the symmetric KMS key that was used to create the
     * encrypted AMI.</p>
     */
    inline ImportImageResponse& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The identifier for the symmetric KMS key that was used to create the
     * encrypted AMI.</p>
     */
    inline ImportImageResponse& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the symmetric KMS key that was used to create the
     * encrypted AMI.</p>
     */
    inline ImportImageResponse& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The license type of the virtual machine.</p>
     */
    inline const Aws::String& GetLicenseType() const{ return m_licenseType; }

    /**
     * <p>The license type of the virtual machine.</p>
     */
    inline void SetLicenseType(const Aws::String& value) { m_licenseType = value; }

    /**
     * <p>The license type of the virtual machine.</p>
     */
    inline void SetLicenseType(Aws::String&& value) { m_licenseType = std::move(value); }

    /**
     * <p>The license type of the virtual machine.</p>
     */
    inline void SetLicenseType(const char* value) { m_licenseType.assign(value); }

    /**
     * <p>The license type of the virtual machine.</p>
     */
    inline ImportImageResponse& WithLicenseType(const Aws::String& value) { SetLicenseType(value); return *this;}

    /**
     * <p>The license type of the virtual machine.</p>
     */
    inline ImportImageResponse& WithLicenseType(Aws::String&& value) { SetLicenseType(std::move(value)); return *this;}

    /**
     * <p>The license type of the virtual machine.</p>
     */
    inline ImportImageResponse& WithLicenseType(const char* value) { SetLicenseType(value); return *this;}


    /**
     * <p>The operating system of the virtual machine.</p>
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }

    /**
     * <p>The operating system of the virtual machine.</p>
     */
    inline void SetPlatform(const Aws::String& value) { m_platform = value; }

    /**
     * <p>The operating system of the virtual machine.</p>
     */
    inline void SetPlatform(Aws::String&& value) { m_platform = std::move(value); }

    /**
     * <p>The operating system of the virtual machine.</p>
     */
    inline void SetPlatform(const char* value) { m_platform.assign(value); }

    /**
     * <p>The operating system of the virtual machine.</p>
     */
    inline ImportImageResponse& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}

    /**
     * <p>The operating system of the virtual machine.</p>
     */
    inline ImportImageResponse& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}

    /**
     * <p>The operating system of the virtual machine.</p>
     */
    inline ImportImageResponse& WithPlatform(const char* value) { SetPlatform(value); return *this;}


    /**
     * <p>The progress of the task.</p>
     */
    inline const Aws::String& GetProgress() const{ return m_progress; }

    /**
     * <p>The progress of the task.</p>
     */
    inline void SetProgress(const Aws::String& value) { m_progress = value; }

    /**
     * <p>The progress of the task.</p>
     */
    inline void SetProgress(Aws::String&& value) { m_progress = std::move(value); }

    /**
     * <p>The progress of the task.</p>
     */
    inline void SetProgress(const char* value) { m_progress.assign(value); }

    /**
     * <p>The progress of the task.</p>
     */
    inline ImportImageResponse& WithProgress(const Aws::String& value) { SetProgress(value); return *this;}

    /**
     * <p>The progress of the task.</p>
     */
    inline ImportImageResponse& WithProgress(Aws::String&& value) { SetProgress(std::move(value)); return *this;}

    /**
     * <p>The progress of the task.</p>
     */
    inline ImportImageResponse& WithProgress(const char* value) { SetProgress(value); return *this;}


    /**
     * <p>Information about the snapshots.</p>
     */
    inline const Aws::Vector<SnapshotDetail>& GetSnapshotDetails() const{ return m_snapshotDetails; }

    /**
     * <p>Information about the snapshots.</p>
     */
    inline void SetSnapshotDetails(const Aws::Vector<SnapshotDetail>& value) { m_snapshotDetails = value; }

    /**
     * <p>Information about the snapshots.</p>
     */
    inline void SetSnapshotDetails(Aws::Vector<SnapshotDetail>&& value) { m_snapshotDetails = std::move(value); }

    /**
     * <p>Information about the snapshots.</p>
     */
    inline ImportImageResponse& WithSnapshotDetails(const Aws::Vector<SnapshotDetail>& value) { SetSnapshotDetails(value); return *this;}

    /**
     * <p>Information about the snapshots.</p>
     */
    inline ImportImageResponse& WithSnapshotDetails(Aws::Vector<SnapshotDetail>&& value) { SetSnapshotDetails(std::move(value)); return *this;}

    /**
     * <p>Information about the snapshots.</p>
     */
    inline ImportImageResponse& AddSnapshotDetails(const SnapshotDetail& value) { m_snapshotDetails.push_back(value); return *this; }

    /**
     * <p>Information about the snapshots.</p>
     */
    inline ImportImageResponse& AddSnapshotDetails(SnapshotDetail&& value) { m_snapshotDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>A brief status of the task.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>A brief status of the task.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>A brief status of the task.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>A brief status of the task.</p>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>A brief status of the task.</p>
     */
    inline ImportImageResponse& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>A brief status of the task.</p>
     */
    inline ImportImageResponse& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>A brief status of the task.</p>
     */
    inline ImportImageResponse& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>A detailed status message of the import task.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>A detailed status message of the import task.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }

    /**
     * <p>A detailed status message of the import task.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }

    /**
     * <p>A detailed status message of the import task.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }

    /**
     * <p>A detailed status message of the import task.</p>
     */
    inline ImportImageResponse& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>A detailed status message of the import task.</p>
     */
    inline ImportImageResponse& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>A detailed status message of the import task.</p>
     */
    inline ImportImageResponse& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The ARNs of the license configurations.</p>
     */
    inline const Aws::Vector<ImportImageLicenseConfigurationResponse>& GetLicenseSpecifications() const{ return m_licenseSpecifications; }

    /**
     * <p>The ARNs of the license configurations.</p>
     */
    inline void SetLicenseSpecifications(const Aws::Vector<ImportImageLicenseConfigurationResponse>& value) { m_licenseSpecifications = value; }

    /**
     * <p>The ARNs of the license configurations.</p>
     */
    inline void SetLicenseSpecifications(Aws::Vector<ImportImageLicenseConfigurationResponse>&& value) { m_licenseSpecifications = std::move(value); }

    /**
     * <p>The ARNs of the license configurations.</p>
     */
    inline ImportImageResponse& WithLicenseSpecifications(const Aws::Vector<ImportImageLicenseConfigurationResponse>& value) { SetLicenseSpecifications(value); return *this;}

    /**
     * <p>The ARNs of the license configurations.</p>
     */
    inline ImportImageResponse& WithLicenseSpecifications(Aws::Vector<ImportImageLicenseConfigurationResponse>&& value) { SetLicenseSpecifications(std::move(value)); return *this;}

    /**
     * <p>The ARNs of the license configurations.</p>
     */
    inline ImportImageResponse& AddLicenseSpecifications(const ImportImageLicenseConfigurationResponse& value) { m_licenseSpecifications.push_back(value); return *this; }

    /**
     * <p>The ARNs of the license configurations.</p>
     */
    inline ImportImageResponse& AddLicenseSpecifications(ImportImageLicenseConfigurationResponse&& value) { m_licenseSpecifications.push_back(std::move(value)); return *this; }


    /**
     * <p>Any tags assigned to the import image task.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags assigned to the import image task.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>Any tags assigned to the import image task.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>Any tags assigned to the import image task.</p>
     */
    inline ImportImageResponse& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the import image task.</p>
     */
    inline ImportImageResponse& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags assigned to the import image task.</p>
     */
    inline ImportImageResponse& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the import image task.</p>
     */
    inline ImportImageResponse& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The usage operation value.</p>
     */
    inline const Aws::String& GetUsageOperation() const{ return m_usageOperation; }

    /**
     * <p>The usage operation value.</p>
     */
    inline void SetUsageOperation(const Aws::String& value) { m_usageOperation = value; }

    /**
     * <p>The usage operation value.</p>
     */
    inline void SetUsageOperation(Aws::String&& value) { m_usageOperation = std::move(value); }

    /**
     * <p>The usage operation value.</p>
     */
    inline void SetUsageOperation(const char* value) { m_usageOperation.assign(value); }

    /**
     * <p>The usage operation value.</p>
     */
    inline ImportImageResponse& WithUsageOperation(const Aws::String& value) { SetUsageOperation(value); return *this;}

    /**
     * <p>The usage operation value.</p>
     */
    inline ImportImageResponse& WithUsageOperation(Aws::String&& value) { SetUsageOperation(std::move(value)); return *this;}

    /**
     * <p>The usage operation value.</p>
     */
    inline ImportImageResponse& WithUsageOperation(const char* value) { SetUsageOperation(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ImportImageResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ImportImageResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_architecture;

    Aws::String m_description;

    bool m_encrypted;

    Aws::String m_hypervisor;

    Aws::String m_imageId;

    Aws::String m_importTaskId;

    Aws::String m_kmsKeyId;

    Aws::String m_licenseType;

    Aws::String m_platform;

    Aws::String m_progress;

    Aws::Vector<SnapshotDetail> m_snapshotDetails;

    Aws::String m_status;

    Aws::String m_statusMessage;

    Aws::Vector<ImportImageLicenseConfigurationResponse> m_licenseSpecifications;

    Aws::Vector<Tag> m_tags;

    Aws::String m_usageOperation;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
