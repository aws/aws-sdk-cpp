/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ClientData.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/BootModeValues.h>
#include <aws/ec2/model/ImageDiskContainer.h>
#include <aws/ec2/model/ImportImageLicenseConfigurationRequest.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ImportImageRequest : public EC2Request
  {
  public:
    AWS_EC2_API ImportImageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportImage"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The architecture of the virtual machine.</p> <p>Valid values:
     * <code>i386</code> | <code>x86_64</code> </p>
     */
    inline const Aws::String& GetArchitecture() const { return m_architecture; }
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
    template<typename ArchitectureT = Aws::String>
    void SetArchitecture(ArchitectureT&& value) { m_architectureHasBeenSet = true; m_architecture = std::forward<ArchitectureT>(value); }
    template<typename ArchitectureT = Aws::String>
    ImportImageRequest& WithArchitecture(ArchitectureT&& value) { SetArchitecture(std::forward<ArchitectureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client-specific data.</p>
     */
    inline const ClientData& GetClientData() const { return m_clientData; }
    inline bool ClientDataHasBeenSet() const { return m_clientDataHasBeenSet; }
    template<typename ClientDataT = ClientData>
    void SetClientData(ClientDataT&& value) { m_clientDataHasBeenSet = true; m_clientData = std::forward<ClientDataT>(value); }
    template<typename ClientDataT = ClientData>
    ImportImageRequest& WithClientData(ClientDataT&& value) { SetClientData(std::forward<ClientDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to enable idempotency for VM import requests.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    ImportImageRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description string for the import image task.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ImportImageRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the disk containers.</p>
     */
    inline const Aws::Vector<ImageDiskContainer>& GetDiskContainers() const { return m_diskContainers; }
    inline bool DiskContainersHasBeenSet() const { return m_diskContainersHasBeenSet; }
    template<typename DiskContainersT = Aws::Vector<ImageDiskContainer>>
    void SetDiskContainers(DiskContainersT&& value) { m_diskContainersHasBeenSet = true; m_diskContainers = std::forward<DiskContainersT>(value); }
    template<typename DiskContainersT = Aws::Vector<ImageDiskContainer>>
    ImportImageRequest& WithDiskContainers(DiskContainersT&& value) { SetDiskContainers(std::forward<DiskContainersT>(value)); return *this;}
    template<typename DiskContainersT = ImageDiskContainer>
    ImportImageRequest& AddDiskContainers(DiskContainersT&& value) { m_diskContainersHasBeenSet = true; m_diskContainers.emplace_back(std::forward<DiskContainersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ImportImageRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the destination AMI of the imported image should be
     * encrypted. The default KMS key for EBS is used unless you specify a non-default
     * KMS key using <code>KmsKeyId</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
     * EBS Encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline bool GetEncrypted() const { return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline ImportImageRequest& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target hypervisor platform.</p> <p>Valid values: <code>xen</code> </p>
     */
    inline const Aws::String& GetHypervisor() const { return m_hypervisor; }
    inline bool HypervisorHasBeenSet() const { return m_hypervisorHasBeenSet; }
    template<typename HypervisorT = Aws::String>
    void SetHypervisor(HypervisorT&& value) { m_hypervisorHasBeenSet = true; m_hypervisor = std::forward<HypervisorT>(value); }
    template<typename HypervisorT = Aws::String>
    ImportImageRequest& WithHypervisor(HypervisorT&& value) { SetHypervisor(std::forward<HypervisorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier for the symmetric KMS key to use when creating the encrypted
     * AMI. This parameter is only required if you want to use a non-default KMS key;
     * if this parameter is not specified, the default KMS key for EBS is used. If a
     * <code>KmsKeyId</code> is specified, the <code>Encrypted</code> flag must also be
     * set. </p> <p>The KMS key identifier may be provided in any of the following
     * formats: </p> <ul> <li> <p>Key ID</p> </li> <li> <p>Key alias</p> </li> <li>
     * <p>ARN using key ID. The ID ARN contains the <code>arn:aws:kms</code> namespace,
     * followed by the Region of the key, the Amazon Web Services account ID of the key
     * owner, the <code>key</code> namespace, and then the key ID. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>.</p>
     * </li> <li> <p>ARN using key alias. The alias ARN contains the
     * <code>arn:aws:kms</code> namespace, followed by the Region of the key, the
     * Amazon Web Services account ID of the key owner, the <code>alias</code>
     * namespace, and then the key alias. For example,
     * arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>. </p>
     * </li> </ul> <p>Amazon Web Services parses <code>KmsKeyId</code> asynchronously,
     * meaning that the action you call may appear to complete even though you provided
     * an invalid identifier. This action will eventually report failure. </p> <p>The
     * specified KMS key must exist in the Region that the AMI is being copied to.</p>
     * <p>Amazon EBS does not support asymmetric KMS keys.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    ImportImageRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The license type to be used for the Amazon Machine Image (AMI) after
     * importing.</p> <p>Specify <code>AWS</code> to replace the source-system license
     * with an Amazon Web Services license or <code>BYOL</code> to retain the
     * source-system license. Leaving this parameter undefined is the same as choosing
     * <code>AWS</code> when importing a Windows Server operating system, and the same
     * as choosing <code>BYOL</code> when importing a Windows client operating system
     * (such as Windows 10) or a Linux operating system.</p> <p>To use
     * <code>BYOL</code>, you must have existing licenses with rights to use these
     * licenses in a third party cloud, such as Amazon Web Services. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmimport-image-import.html#prerequisites-image">Prerequisites</a>
     * in the VM Import/Export User Guide.</p>
     */
    inline const Aws::String& GetLicenseType() const { return m_licenseType; }
    inline bool LicenseTypeHasBeenSet() const { return m_licenseTypeHasBeenSet; }
    template<typename LicenseTypeT = Aws::String>
    void SetLicenseType(LicenseTypeT&& value) { m_licenseTypeHasBeenSet = true; m_licenseType = std::forward<LicenseTypeT>(value); }
    template<typename LicenseTypeT = Aws::String>
    ImportImageRequest& WithLicenseType(LicenseTypeT&& value) { SetLicenseType(std::forward<LicenseTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system of the virtual machine. If you import a VM that is
     * compatible with Unified Extensible Firmware Interface (UEFI) using an EBS
     * snapshot, you must specify a value for the platform.</p> <p>Valid values:
     * <code>Windows</code> | <code>Linux</code> </p>
     */
    inline const Aws::String& GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    template<typename PlatformT = Aws::String>
    void SetPlatform(PlatformT&& value) { m_platformHasBeenSet = true; m_platform = std::forward<PlatformT>(value); }
    template<typename PlatformT = Aws::String>
    ImportImageRequest& WithPlatform(PlatformT&& value) { SetPlatform(std::forward<PlatformT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the role to use when not using the default role, 'vmimport'.</p>
     */
    inline const Aws::String& GetRoleName() const { return m_roleName; }
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }
    template<typename RoleNameT = Aws::String>
    void SetRoleName(RoleNameT&& value) { m_roleNameHasBeenSet = true; m_roleName = std::forward<RoleNameT>(value); }
    template<typename RoleNameT = Aws::String>
    ImportImageRequest& WithRoleName(RoleNameT&& value) { SetRoleName(std::forward<RoleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARNs of the license configurations.</p>
     */
    inline const Aws::Vector<ImportImageLicenseConfigurationRequest>& GetLicenseSpecifications() const { return m_licenseSpecifications; }
    inline bool LicenseSpecificationsHasBeenSet() const { return m_licenseSpecificationsHasBeenSet; }
    template<typename LicenseSpecificationsT = Aws::Vector<ImportImageLicenseConfigurationRequest>>
    void SetLicenseSpecifications(LicenseSpecificationsT&& value) { m_licenseSpecificationsHasBeenSet = true; m_licenseSpecifications = std::forward<LicenseSpecificationsT>(value); }
    template<typename LicenseSpecificationsT = Aws::Vector<ImportImageLicenseConfigurationRequest>>
    ImportImageRequest& WithLicenseSpecifications(LicenseSpecificationsT&& value) { SetLicenseSpecifications(std::forward<LicenseSpecificationsT>(value)); return *this;}
    template<typename LicenseSpecificationsT = ImportImageLicenseConfigurationRequest>
    ImportImageRequest& AddLicenseSpecifications(LicenseSpecificationsT&& value) { m_licenseSpecificationsHasBeenSet = true; m_licenseSpecifications.emplace_back(std::forward<LicenseSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the import image task during creation.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    ImportImageRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    ImportImageRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The usage operation value. For more information, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/vmie_prereqs.html#prerequisites">Licensing
     * options</a> in the <i>VM Import/Export User Guide</i>.</p>
     */
    inline const Aws::String& GetUsageOperation() const { return m_usageOperation; }
    inline bool UsageOperationHasBeenSet() const { return m_usageOperationHasBeenSet; }
    template<typename UsageOperationT = Aws::String>
    void SetUsageOperation(UsageOperationT&& value) { m_usageOperationHasBeenSet = true; m_usageOperation = std::forward<UsageOperationT>(value); }
    template<typename UsageOperationT = Aws::String>
    ImportImageRequest& WithUsageOperation(UsageOperationT&& value) { SetUsageOperation(std::forward<UsageOperationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The boot mode of the virtual machine.</p>  <p>The
     * <code>uefi-preferred</code> boot mode isn't supported for importing images. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/vm-import/latest/userguide/prerequisites.html#vmimport-boot-modes">Boot
     * modes</a> in the <i>VM Import/Export User Guide</i>.</p> 
     */
    inline BootModeValues GetBootMode() const { return m_bootMode; }
    inline bool BootModeHasBeenSet() const { return m_bootModeHasBeenSet; }
    inline void SetBootMode(BootModeValues value) { m_bootModeHasBeenSet = true; m_bootMode = value; }
    inline ImportImageRequest& WithBootMode(BootModeValues value) { SetBootMode(value); return *this;}
    ///@}
  private:

    Aws::String m_architecture;
    bool m_architectureHasBeenSet = false;

    ClientData m_clientData;
    bool m_clientDataHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<ImageDiskContainer> m_diskContainers;
    bool m_diskContainersHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    bool m_encrypted{false};
    bool m_encryptedHasBeenSet = false;

    Aws::String m_hypervisor;
    bool m_hypervisorHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_licenseType;
    bool m_licenseTypeHasBeenSet = false;

    Aws::String m_platform;
    bool m_platformHasBeenSet = false;

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet = false;

    Aws::Vector<ImportImageLicenseConfigurationRequest> m_licenseSpecifications;
    bool m_licenseSpecificationsHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    Aws::String m_usageOperation;
    bool m_usageOperationHasBeenSet = false;

    BootModeValues m_bootMode{BootModeValues::NOT_SET};
    bool m_bootModeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
