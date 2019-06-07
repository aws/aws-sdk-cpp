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

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/SnapshotDetail.h>
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
  class AWS_EC2_API ImportImageTask
  {
  public:
    ImportImageTask();
    ImportImageTask(const Aws::Utils::Xml::XmlNode& xmlNode);
    ImportImageTask& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The architecture of the virtual machine.</p> <p>Valid values:
     * <code>i386</code> | <code>x86_64</code> | <code>arm64</code> </p>
     */
    inline const Aws::String& GetArchitecture() const{ return m_architecture; }

    /**
     * <p>The architecture of the virtual machine.</p> <p>Valid values:
     * <code>i386</code> | <code>x86_64</code> | <code>arm64</code> </p>
     */
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }

    /**
     * <p>The architecture of the virtual machine.</p> <p>Valid values:
     * <code>i386</code> | <code>x86_64</code> | <code>arm64</code> </p>
     */
    inline void SetArchitecture(const Aws::String& value) { m_architectureHasBeenSet = true; m_architecture = value; }

    /**
     * <p>The architecture of the virtual machine.</p> <p>Valid values:
     * <code>i386</code> | <code>x86_64</code> | <code>arm64</code> </p>
     */
    inline void SetArchitecture(Aws::String&& value) { m_architectureHasBeenSet = true; m_architecture = std::move(value); }

    /**
     * <p>The architecture of the virtual machine.</p> <p>Valid values:
     * <code>i386</code> | <code>x86_64</code> | <code>arm64</code> </p>
     */
    inline void SetArchitecture(const char* value) { m_architectureHasBeenSet = true; m_architecture.assign(value); }

    /**
     * <p>The architecture of the virtual machine.</p> <p>Valid values:
     * <code>i386</code> | <code>x86_64</code> | <code>arm64</code> </p>
     */
    inline ImportImageTask& WithArchitecture(const Aws::String& value) { SetArchitecture(value); return *this;}

    /**
     * <p>The architecture of the virtual machine.</p> <p>Valid values:
     * <code>i386</code> | <code>x86_64</code> | <code>arm64</code> </p>
     */
    inline ImportImageTask& WithArchitecture(Aws::String&& value) { SetArchitecture(std::move(value)); return *this;}

    /**
     * <p>The architecture of the virtual machine.</p> <p>Valid values:
     * <code>i386</code> | <code>x86_64</code> | <code>arm64</code> </p>
     */
    inline ImportImageTask& WithArchitecture(const char* value) { SetArchitecture(value); return *this;}


    /**
     * <p>A description of the import task.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the import task.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the import task.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the import task.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the import task.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the import task.</p>
     */
    inline ImportImageTask& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the import task.</p>
     */
    inline ImportImageTask& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the import task.</p>
     */
    inline ImportImageTask& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Indicates whether the image is encrypted.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>Indicates whether the image is encrypted.</p>
     */
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }

    /**
     * <p>Indicates whether the image is encrypted.</p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>Indicates whether the image is encrypted.</p>
     */
    inline ImportImageTask& WithEncrypted(bool value) { SetEncrypted(value); return *this;}


    /**
     * <p>The target hypervisor for the import task.</p> <p>Valid values:
     * <code>xen</code> </p>
     */
    inline const Aws::String& GetHypervisor() const{ return m_hypervisor; }

    /**
     * <p>The target hypervisor for the import task.</p> <p>Valid values:
     * <code>xen</code> </p>
     */
    inline bool HypervisorHasBeenSet() const { return m_hypervisorHasBeenSet; }

    /**
     * <p>The target hypervisor for the import task.</p> <p>Valid values:
     * <code>xen</code> </p>
     */
    inline void SetHypervisor(const Aws::String& value) { m_hypervisorHasBeenSet = true; m_hypervisor = value; }

    /**
     * <p>The target hypervisor for the import task.</p> <p>Valid values:
     * <code>xen</code> </p>
     */
    inline void SetHypervisor(Aws::String&& value) { m_hypervisorHasBeenSet = true; m_hypervisor = std::move(value); }

    /**
     * <p>The target hypervisor for the import task.</p> <p>Valid values:
     * <code>xen</code> </p>
     */
    inline void SetHypervisor(const char* value) { m_hypervisorHasBeenSet = true; m_hypervisor.assign(value); }

    /**
     * <p>The target hypervisor for the import task.</p> <p>Valid values:
     * <code>xen</code> </p>
     */
    inline ImportImageTask& WithHypervisor(const Aws::String& value) { SetHypervisor(value); return *this;}

    /**
     * <p>The target hypervisor for the import task.</p> <p>Valid values:
     * <code>xen</code> </p>
     */
    inline ImportImageTask& WithHypervisor(Aws::String&& value) { SetHypervisor(std::move(value)); return *this;}

    /**
     * <p>The target hypervisor for the import task.</p> <p>Valid values:
     * <code>xen</code> </p>
     */
    inline ImportImageTask& WithHypervisor(const char* value) { SetHypervisor(value); return *this;}


    /**
     * <p>The ID of the Amazon Machine Image (AMI) of the imported virtual machine.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>The ID of the Amazon Machine Image (AMI) of the imported virtual machine.</p>
     */
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Machine Image (AMI) of the imported virtual machine.</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>The ID of the Amazon Machine Image (AMI) of the imported virtual machine.</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }

    /**
     * <p>The ID of the Amazon Machine Image (AMI) of the imported virtual machine.</p>
     */
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }

    /**
     * <p>The ID of the Amazon Machine Image (AMI) of the imported virtual machine.</p>
     */
    inline ImportImageTask& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The ID of the Amazon Machine Image (AMI) of the imported virtual machine.</p>
     */
    inline ImportImageTask& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Machine Image (AMI) of the imported virtual machine.</p>
     */
    inline ImportImageTask& WithImageId(const char* value) { SetImageId(value); return *this;}


    /**
     * <p>The ID of the import image task.</p>
     */
    inline const Aws::String& GetImportTaskId() const{ return m_importTaskId; }

    /**
     * <p>The ID of the import image task.</p>
     */
    inline bool ImportTaskIdHasBeenSet() const { return m_importTaskIdHasBeenSet; }

    /**
     * <p>The ID of the import image task.</p>
     */
    inline void SetImportTaskId(const Aws::String& value) { m_importTaskIdHasBeenSet = true; m_importTaskId = value; }

    /**
     * <p>The ID of the import image task.</p>
     */
    inline void SetImportTaskId(Aws::String&& value) { m_importTaskIdHasBeenSet = true; m_importTaskId = std::move(value); }

    /**
     * <p>The ID of the import image task.</p>
     */
    inline void SetImportTaskId(const char* value) { m_importTaskIdHasBeenSet = true; m_importTaskId.assign(value); }

    /**
     * <p>The ID of the import image task.</p>
     */
    inline ImportImageTask& WithImportTaskId(const Aws::String& value) { SetImportTaskId(value); return *this;}

    /**
     * <p>The ID of the import image task.</p>
     */
    inline ImportImageTask& WithImportTaskId(Aws::String&& value) { SetImportTaskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the import image task.</p>
     */
    inline ImportImageTask& WithImportTaskId(const char* value) { SetImportTaskId(value); return *this;}


    /**
     * <p>The identifier for the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) that was used to create the encrypted image.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The identifier for the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) that was used to create the encrypted image.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The identifier for the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) that was used to create the encrypted image.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The identifier for the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) that was used to create the encrypted image.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The identifier for the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) that was used to create the encrypted image.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The identifier for the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) that was used to create the encrypted image.</p>
     */
    inline ImportImageTask& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The identifier for the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) that was used to create the encrypted image.</p>
     */
    inline ImportImageTask& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the AWS Key Management Service (AWS KMS) customer master
     * key (CMK) that was used to create the encrypted image.</p>
     */
    inline ImportImageTask& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The license type of the virtual machine.</p>
     */
    inline const Aws::String& GetLicenseType() const{ return m_licenseType; }

    /**
     * <p>The license type of the virtual machine.</p>
     */
    inline bool LicenseTypeHasBeenSet() const { return m_licenseTypeHasBeenSet; }

    /**
     * <p>The license type of the virtual machine.</p>
     */
    inline void SetLicenseType(const Aws::String& value) { m_licenseTypeHasBeenSet = true; m_licenseType = value; }

    /**
     * <p>The license type of the virtual machine.</p>
     */
    inline void SetLicenseType(Aws::String&& value) { m_licenseTypeHasBeenSet = true; m_licenseType = std::move(value); }

    /**
     * <p>The license type of the virtual machine.</p>
     */
    inline void SetLicenseType(const char* value) { m_licenseTypeHasBeenSet = true; m_licenseType.assign(value); }

    /**
     * <p>The license type of the virtual machine.</p>
     */
    inline ImportImageTask& WithLicenseType(const Aws::String& value) { SetLicenseType(value); return *this;}

    /**
     * <p>The license type of the virtual machine.</p>
     */
    inline ImportImageTask& WithLicenseType(Aws::String&& value) { SetLicenseType(std::move(value)); return *this;}

    /**
     * <p>The license type of the virtual machine.</p>
     */
    inline ImportImageTask& WithLicenseType(const char* value) { SetLicenseType(value); return *this;}


    /**
     * <p>The description string for the import image task.</p>
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }

    /**
     * <p>The description string for the import image task.</p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p>The description string for the import image task.</p>
     */
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The description string for the import image task.</p>
     */
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The description string for the import image task.</p>
     */
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }

    /**
     * <p>The description string for the import image task.</p>
     */
    inline ImportImageTask& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}

    /**
     * <p>The description string for the import image task.</p>
     */
    inline ImportImageTask& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}

    /**
     * <p>The description string for the import image task.</p>
     */
    inline ImportImageTask& WithPlatform(const char* value) { SetPlatform(value); return *this;}


    /**
     * <p>The percentage of progress of the import image task.</p>
     */
    inline const Aws::String& GetProgress() const{ return m_progress; }

    /**
     * <p>The percentage of progress of the import image task.</p>
     */
    inline bool ProgressHasBeenSet() const { return m_progressHasBeenSet; }

    /**
     * <p>The percentage of progress of the import image task.</p>
     */
    inline void SetProgress(const Aws::String& value) { m_progressHasBeenSet = true; m_progress = value; }

    /**
     * <p>The percentage of progress of the import image task.</p>
     */
    inline void SetProgress(Aws::String&& value) { m_progressHasBeenSet = true; m_progress = std::move(value); }

    /**
     * <p>The percentage of progress of the import image task.</p>
     */
    inline void SetProgress(const char* value) { m_progressHasBeenSet = true; m_progress.assign(value); }

    /**
     * <p>The percentage of progress of the import image task.</p>
     */
    inline ImportImageTask& WithProgress(const Aws::String& value) { SetProgress(value); return *this;}

    /**
     * <p>The percentage of progress of the import image task.</p>
     */
    inline ImportImageTask& WithProgress(Aws::String&& value) { SetProgress(std::move(value)); return *this;}

    /**
     * <p>The percentage of progress of the import image task.</p>
     */
    inline ImportImageTask& WithProgress(const char* value) { SetProgress(value); return *this;}


    /**
     * <p>Information about the snapshots.</p>
     */
    inline const Aws::Vector<SnapshotDetail>& GetSnapshotDetails() const{ return m_snapshotDetails; }

    /**
     * <p>Information about the snapshots.</p>
     */
    inline bool SnapshotDetailsHasBeenSet() const { return m_snapshotDetailsHasBeenSet; }

    /**
     * <p>Information about the snapshots.</p>
     */
    inline void SetSnapshotDetails(const Aws::Vector<SnapshotDetail>& value) { m_snapshotDetailsHasBeenSet = true; m_snapshotDetails = value; }

    /**
     * <p>Information about the snapshots.</p>
     */
    inline void SetSnapshotDetails(Aws::Vector<SnapshotDetail>&& value) { m_snapshotDetailsHasBeenSet = true; m_snapshotDetails = std::move(value); }

    /**
     * <p>Information about the snapshots.</p>
     */
    inline ImportImageTask& WithSnapshotDetails(const Aws::Vector<SnapshotDetail>& value) { SetSnapshotDetails(value); return *this;}

    /**
     * <p>Information about the snapshots.</p>
     */
    inline ImportImageTask& WithSnapshotDetails(Aws::Vector<SnapshotDetail>&& value) { SetSnapshotDetails(std::move(value)); return *this;}

    /**
     * <p>Information about the snapshots.</p>
     */
    inline ImportImageTask& AddSnapshotDetails(const SnapshotDetail& value) { m_snapshotDetailsHasBeenSet = true; m_snapshotDetails.push_back(value); return *this; }

    /**
     * <p>Information about the snapshots.</p>
     */
    inline ImportImageTask& AddSnapshotDetails(SnapshotDetail&& value) { m_snapshotDetailsHasBeenSet = true; m_snapshotDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>A brief status for the import image task.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>A brief status for the import image task.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>A brief status for the import image task.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>A brief status for the import image task.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>A brief status for the import image task.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>A brief status for the import image task.</p>
     */
    inline ImportImageTask& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>A brief status for the import image task.</p>
     */
    inline ImportImageTask& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>A brief status for the import image task.</p>
     */
    inline ImportImageTask& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>A descriptive status message for the import image task.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>A descriptive status message for the import image task.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>A descriptive status message for the import image task.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>A descriptive status message for the import image task.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>A descriptive status message for the import image task.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>A descriptive status message for the import image task.</p>
     */
    inline ImportImageTask& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>A descriptive status message for the import image task.</p>
     */
    inline ImportImageTask& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>A descriptive status message for the import image task.</p>
     */
    inline ImportImageTask& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    Aws::String m_architecture;
    bool m_architectureHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    bool m_encrypted;
    bool m_encryptedHasBeenSet;

    Aws::String m_hypervisor;
    bool m_hypervisorHasBeenSet;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet;

    Aws::String m_importTaskId;
    bool m_importTaskIdHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    Aws::String m_licenseType;
    bool m_licenseTypeHasBeenSet;

    Aws::String m_platform;
    bool m_platformHasBeenSet;

    Aws::String m_progress;
    bool m_progressHasBeenSet;

    Aws::Vector<SnapshotDetail> m_snapshotDetails;
    bool m_snapshotDetailsHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
