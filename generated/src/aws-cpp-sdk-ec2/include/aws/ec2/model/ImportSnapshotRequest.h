/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/model/ClientData.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/SnapshotDiskContainer.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class ImportSnapshotRequest : public EC2Request
  {
  public:
    AWS_EC2_API ImportSnapshotRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportSnapshot"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The client-specific data.</p>
     */
    inline const ClientData& GetClientData() const { return m_clientData; }
    inline bool ClientDataHasBeenSet() const { return m_clientDataHasBeenSet; }
    template<typename ClientDataT = ClientData>
    void SetClientData(ClientDataT&& value) { m_clientDataHasBeenSet = true; m_clientData = std::forward<ClientDataT>(value); }
    template<typename ClientDataT = ClientData>
    ImportSnapshotRequest& WithClientData(ClientDataT&& value) { SetClientData(std::forward<ClientDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Token to enable idempotency for VM import requests.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    ImportSnapshotRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description string for the import snapshot task.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ImportSnapshotRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the disk container.</p>
     */
    inline const SnapshotDiskContainer& GetDiskContainer() const { return m_diskContainer; }
    inline bool DiskContainerHasBeenSet() const { return m_diskContainerHasBeenSet; }
    template<typename DiskContainerT = SnapshotDiskContainer>
    void SetDiskContainer(DiskContainerT&& value) { m_diskContainerHasBeenSet = true; m_diskContainer = std::forward<DiskContainerT>(value); }
    template<typename DiskContainerT = SnapshotDiskContainer>
    ImportSnapshotRequest& WithDiskContainer(DiskContainerT&& value) { SetDiskContainer(std::forward<DiskContainerT>(value)); return *this;}
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
    inline ImportSnapshotRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the destination snapshot of the imported image should be
     * encrypted. The default KMS key for EBS is used unless you specify a non-default
     * KMS key using <code>KmsKeyId</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
     * EBS Encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline bool GetEncrypted() const { return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline ImportSnapshotRequest& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier for the symmetric KMS key to use when creating the encrypted
     * snapshot. This parameter is only required if you want to use a non-default KMS
     * key; if this parameter is not specified, the default KMS key for EBS is used. If
     * a <code>KmsKeyId</code> is specified, the <code>Encrypted</code> flag must also
     * be set. </p> <p>The KMS key identifier may be provided in any of the following
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
     * specified KMS key must exist in the Region that the snapshot is being copied
     * to.</p> <p>Amazon EBS does not support asymmetric KMS keys.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    ImportSnapshotRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
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
    ImportSnapshotRequest& WithRoleName(RoleNameT&& value) { SetRoleName(std::forward<RoleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the import snapshot task during creation.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    ImportSnapshotRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    ImportSnapshotRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
    ///@}
  private:

    ClientData m_clientData;
    bool m_clientDataHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    SnapshotDiskContainer m_diskContainer;
    bool m_diskContainerHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    bool m_encrypted{false};
    bool m_encryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
