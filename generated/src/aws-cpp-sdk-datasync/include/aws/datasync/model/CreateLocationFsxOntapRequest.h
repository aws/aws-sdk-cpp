/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/datasync/model/FsxProtocol.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/TagListEntry.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   */
  class CreateLocationFsxOntapRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API CreateLocationFsxOntapRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLocationFsxOntap"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const FsxProtocol& GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    template<typename ProtocolT = FsxProtocol>
    void SetProtocol(ProtocolT&& value) { m_protocolHasBeenSet = true; m_protocol = std::forward<ProtocolT>(value); }
    template<typename ProtocolT = FsxProtocol>
    CreateLocationFsxOntapRequest& WithProtocol(ProtocolT&& value) { SetProtocol(std::forward<ProtocolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon EC2 security groups that provide access to your file
     * system's preferred subnet.</p> <p>The security groups must allow outbound
     * traffic on the following ports (depending on the protocol you use):</p> <ul>
     * <li> <p> <b>Network File System (NFS)</b>: TCP ports 111, 635, and 2049</p>
     * </li> <li> <p> <b>Server Message Block (SMB)</b>: TCP port 445</p> </li> </ul>
     * <p>Your file system's security groups must also allow inbound traffic on the
     * same ports.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupArns() const { return m_securityGroupArns; }
    inline bool SecurityGroupArnsHasBeenSet() const { return m_securityGroupArnsHasBeenSet; }
    template<typename SecurityGroupArnsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupArns(SecurityGroupArnsT&& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns = std::forward<SecurityGroupArnsT>(value); }
    template<typename SecurityGroupArnsT = Aws::Vector<Aws::String>>
    CreateLocationFsxOntapRequest& WithSecurityGroupArns(SecurityGroupArnsT&& value) { SetSecurityGroupArns(std::forward<SecurityGroupArnsT>(value)); return *this;}
    template<typename SecurityGroupArnsT = Aws::String>
    CreateLocationFsxOntapRequest& AddSecurityGroupArns(SecurityGroupArnsT&& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.emplace_back(std::forward<SecurityGroupArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the ARN of the storage virtual machine (SVM) in your file system
     * where you want to copy data to or from.</p>
     */
    inline const Aws::String& GetStorageVirtualMachineArn() const { return m_storageVirtualMachineArn; }
    inline bool StorageVirtualMachineArnHasBeenSet() const { return m_storageVirtualMachineArnHasBeenSet; }
    template<typename StorageVirtualMachineArnT = Aws::String>
    void SetStorageVirtualMachineArn(StorageVirtualMachineArnT&& value) { m_storageVirtualMachineArnHasBeenSet = true; m_storageVirtualMachineArn = std::forward<StorageVirtualMachineArnT>(value); }
    template<typename StorageVirtualMachineArnT = Aws::String>
    CreateLocationFsxOntapRequest& WithStorageVirtualMachineArn(StorageVirtualMachineArnT&& value) { SetStorageVirtualMachineArn(std::forward<StorageVirtualMachineArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a path to the file share in the SVM where you want to transfer data
     * to or from.</p> <p>You can specify a junction path (also known as a mount
     * point), qtree path (for NFS file shares), or share name (for SMB file shares).
     * For example, your mount path might be <code>/vol1</code>,
     * <code>/vol1/tree1</code>, or <code>/share1</code>.</p>  <p>Don't specify a
     * junction path in the SVM's root volume. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/managing-svms.html">Managing
     * FSx for ONTAP storage virtual machines</a> in the <i>Amazon FSx for NetApp ONTAP
     * User Guide</i>.</p> 
     */
    inline const Aws::String& GetSubdirectory() const { return m_subdirectory; }
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }
    template<typename SubdirectoryT = Aws::String>
    void SetSubdirectory(SubdirectoryT&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::forward<SubdirectoryT>(value); }
    template<typename SubdirectoryT = Aws::String>
    CreateLocationFsxOntapRequest& WithSubdirectory(SubdirectoryT&& value) { SetSubdirectory(std::forward<SubdirectoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * location.</p>
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<TagListEntry>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<TagListEntry>>
    CreateLocationFsxOntapRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = TagListEntry>
    CreateLocationFsxOntapRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    FsxProtocol m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupArns;
    bool m_securityGroupArnsHasBeenSet = false;

    Aws::String m_storageVirtualMachineArn;
    bool m_storageVirtualMachineArnHasBeenSet = false;

    Aws::String m_subdirectory;
    bool m_subdirectoryHasBeenSet = false;

    Aws::Vector<TagListEntry> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
