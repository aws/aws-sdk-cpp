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
    AWS_DATASYNC_API CreateLocationFsxOntapRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLocationFsxOntap"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const FsxProtocol& GetProtocol() const{ return m_protocol; }

    
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    
    inline void SetProtocol(const FsxProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    
    inline void SetProtocol(FsxProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    
    inline CreateLocationFsxOntapRequest& WithProtocol(const FsxProtocol& value) { SetProtocol(value); return *this;}

    
    inline CreateLocationFsxOntapRequest& WithProtocol(FsxProtocol&& value) { SetProtocol(std::move(value)); return *this;}


    /**
     * <p>Specifies the Amazon EC2 security groups that provide access to your file
     * system's preferred subnet.</p> <p>The security groups must allow outbound
     * traffic on the following ports (depending on the protocol you use):</p> <ul>
     * <li> <p> <b>Network File System (NFS)</b>: TCP ports 111, 635, and 2049</p>
     * </li> <li> <p> <b>Server Message Block (SMB)</b>: TCP port 445</p> </li> </ul>
     * <p>Your file system's security groups must also allow inbound traffic on the
     * same ports.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupArns() const{ return m_securityGroupArns; }

    /**
     * <p>Specifies the Amazon EC2 security groups that provide access to your file
     * system's preferred subnet.</p> <p>The security groups must allow outbound
     * traffic on the following ports (depending on the protocol you use):</p> <ul>
     * <li> <p> <b>Network File System (NFS)</b>: TCP ports 111, 635, and 2049</p>
     * </li> <li> <p> <b>Server Message Block (SMB)</b>: TCP port 445</p> </li> </ul>
     * <p>Your file system's security groups must also allow inbound traffic on the
     * same ports.</p>
     */
    inline bool SecurityGroupArnsHasBeenSet() const { return m_securityGroupArnsHasBeenSet; }

    /**
     * <p>Specifies the Amazon EC2 security groups that provide access to your file
     * system's preferred subnet.</p> <p>The security groups must allow outbound
     * traffic on the following ports (depending on the protocol you use):</p> <ul>
     * <li> <p> <b>Network File System (NFS)</b>: TCP ports 111, 635, and 2049</p>
     * </li> <li> <p> <b>Server Message Block (SMB)</b>: TCP port 445</p> </li> </ul>
     * <p>Your file system's security groups must also allow inbound traffic on the
     * same ports.</p>
     */
    inline void SetSecurityGroupArns(const Aws::Vector<Aws::String>& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns = value; }

    /**
     * <p>Specifies the Amazon EC2 security groups that provide access to your file
     * system's preferred subnet.</p> <p>The security groups must allow outbound
     * traffic on the following ports (depending on the protocol you use):</p> <ul>
     * <li> <p> <b>Network File System (NFS)</b>: TCP ports 111, 635, and 2049</p>
     * </li> <li> <p> <b>Server Message Block (SMB)</b>: TCP port 445</p> </li> </ul>
     * <p>Your file system's security groups must also allow inbound traffic on the
     * same ports.</p>
     */
    inline void SetSecurityGroupArns(Aws::Vector<Aws::String>&& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns = std::move(value); }

    /**
     * <p>Specifies the Amazon EC2 security groups that provide access to your file
     * system's preferred subnet.</p> <p>The security groups must allow outbound
     * traffic on the following ports (depending on the protocol you use):</p> <ul>
     * <li> <p> <b>Network File System (NFS)</b>: TCP ports 111, 635, and 2049</p>
     * </li> <li> <p> <b>Server Message Block (SMB)</b>: TCP port 445</p> </li> </ul>
     * <p>Your file system's security groups must also allow inbound traffic on the
     * same ports.</p>
     */
    inline CreateLocationFsxOntapRequest& WithSecurityGroupArns(const Aws::Vector<Aws::String>& value) { SetSecurityGroupArns(value); return *this;}

    /**
     * <p>Specifies the Amazon EC2 security groups that provide access to your file
     * system's preferred subnet.</p> <p>The security groups must allow outbound
     * traffic on the following ports (depending on the protocol you use):</p> <ul>
     * <li> <p> <b>Network File System (NFS)</b>: TCP ports 111, 635, and 2049</p>
     * </li> <li> <p> <b>Server Message Block (SMB)</b>: TCP port 445</p> </li> </ul>
     * <p>Your file system's security groups must also allow inbound traffic on the
     * same ports.</p>
     */
    inline CreateLocationFsxOntapRequest& WithSecurityGroupArns(Aws::Vector<Aws::String>&& value) { SetSecurityGroupArns(std::move(value)); return *this;}

    /**
     * <p>Specifies the Amazon EC2 security groups that provide access to your file
     * system's preferred subnet.</p> <p>The security groups must allow outbound
     * traffic on the following ports (depending on the protocol you use):</p> <ul>
     * <li> <p> <b>Network File System (NFS)</b>: TCP ports 111, 635, and 2049</p>
     * </li> <li> <p> <b>Server Message Block (SMB)</b>: TCP port 445</p> </li> </ul>
     * <p>Your file system's security groups must also allow inbound traffic on the
     * same ports.</p>
     */
    inline CreateLocationFsxOntapRequest& AddSecurityGroupArns(const Aws::String& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.push_back(value); return *this; }

    /**
     * <p>Specifies the Amazon EC2 security groups that provide access to your file
     * system's preferred subnet.</p> <p>The security groups must allow outbound
     * traffic on the following ports (depending on the protocol you use):</p> <ul>
     * <li> <p> <b>Network File System (NFS)</b>: TCP ports 111, 635, and 2049</p>
     * </li> <li> <p> <b>Server Message Block (SMB)</b>: TCP port 445</p> </li> </ul>
     * <p>Your file system's security groups must also allow inbound traffic on the
     * same ports.</p>
     */
    inline CreateLocationFsxOntapRequest& AddSecurityGroupArns(Aws::String&& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the Amazon EC2 security groups that provide access to your file
     * system's preferred subnet.</p> <p>The security groups must allow outbound
     * traffic on the following ports (depending on the protocol you use):</p> <ul>
     * <li> <p> <b>Network File System (NFS)</b>: TCP ports 111, 635, and 2049</p>
     * </li> <li> <p> <b>Server Message Block (SMB)</b>: TCP port 445</p> </li> </ul>
     * <p>Your file system's security groups must also allow inbound traffic on the
     * same ports.</p>
     */
    inline CreateLocationFsxOntapRequest& AddSecurityGroupArns(const char* value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.push_back(value); return *this; }


    /**
     * <p>Specifies the ARN of the storage virtual machine (SVM) on your file system
     * where you're copying data to or from.</p>
     */
    inline const Aws::String& GetStorageVirtualMachineArn() const{ return m_storageVirtualMachineArn; }

    /**
     * <p>Specifies the ARN of the storage virtual machine (SVM) on your file system
     * where you're copying data to or from.</p>
     */
    inline bool StorageVirtualMachineArnHasBeenSet() const { return m_storageVirtualMachineArnHasBeenSet; }

    /**
     * <p>Specifies the ARN of the storage virtual machine (SVM) on your file system
     * where you're copying data to or from.</p>
     */
    inline void SetStorageVirtualMachineArn(const Aws::String& value) { m_storageVirtualMachineArnHasBeenSet = true; m_storageVirtualMachineArn = value; }

    /**
     * <p>Specifies the ARN of the storage virtual machine (SVM) on your file system
     * where you're copying data to or from.</p>
     */
    inline void SetStorageVirtualMachineArn(Aws::String&& value) { m_storageVirtualMachineArnHasBeenSet = true; m_storageVirtualMachineArn = std::move(value); }

    /**
     * <p>Specifies the ARN of the storage virtual machine (SVM) on your file system
     * where you're copying data to or from.</p>
     */
    inline void SetStorageVirtualMachineArn(const char* value) { m_storageVirtualMachineArnHasBeenSet = true; m_storageVirtualMachineArn.assign(value); }

    /**
     * <p>Specifies the ARN of the storage virtual machine (SVM) on your file system
     * where you're copying data to or from.</p>
     */
    inline CreateLocationFsxOntapRequest& WithStorageVirtualMachineArn(const Aws::String& value) { SetStorageVirtualMachineArn(value); return *this;}

    /**
     * <p>Specifies the ARN of the storage virtual machine (SVM) on your file system
     * where you're copying data to or from.</p>
     */
    inline CreateLocationFsxOntapRequest& WithStorageVirtualMachineArn(Aws::String&& value) { SetStorageVirtualMachineArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the ARN of the storage virtual machine (SVM) on your file system
     * where you're copying data to or from.</p>
     */
    inline CreateLocationFsxOntapRequest& WithStorageVirtualMachineArn(const char* value) { SetStorageVirtualMachineArn(value); return *this;}


    /**
     * <p>Specifies the junction path (also known as a mount point) in the SVM volume
     * where you're copying data to or from (for example, <code>/vol1</code>).</p>
     *  <p>Don't specify a junction path in the SVM's root volume. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/managing-svms.html">Managing
     * FSx for ONTAP storage virtual machines</a> in the <i>Amazon FSx for NetApp ONTAP
     * User Guide</i>.</p> 
     */
    inline const Aws::String& GetSubdirectory() const{ return m_subdirectory; }

    /**
     * <p>Specifies the junction path (also known as a mount point) in the SVM volume
     * where you're copying data to or from (for example, <code>/vol1</code>).</p>
     *  <p>Don't specify a junction path in the SVM's root volume. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/managing-svms.html">Managing
     * FSx for ONTAP storage virtual machines</a> in the <i>Amazon FSx for NetApp ONTAP
     * User Guide</i>.</p> 
     */
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }

    /**
     * <p>Specifies the junction path (also known as a mount point) in the SVM volume
     * where you're copying data to or from (for example, <code>/vol1</code>).</p>
     *  <p>Don't specify a junction path in the SVM's root volume. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/managing-svms.html">Managing
     * FSx for ONTAP storage virtual machines</a> in the <i>Amazon FSx for NetApp ONTAP
     * User Guide</i>.</p> 
     */
    inline void SetSubdirectory(const Aws::String& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = value; }

    /**
     * <p>Specifies the junction path (also known as a mount point) in the SVM volume
     * where you're copying data to or from (for example, <code>/vol1</code>).</p>
     *  <p>Don't specify a junction path in the SVM's root volume. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/managing-svms.html">Managing
     * FSx for ONTAP storage virtual machines</a> in the <i>Amazon FSx for NetApp ONTAP
     * User Guide</i>.</p> 
     */
    inline void SetSubdirectory(Aws::String&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::move(value); }

    /**
     * <p>Specifies the junction path (also known as a mount point) in the SVM volume
     * where you're copying data to or from (for example, <code>/vol1</code>).</p>
     *  <p>Don't specify a junction path in the SVM's root volume. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/managing-svms.html">Managing
     * FSx for ONTAP storage virtual machines</a> in the <i>Amazon FSx for NetApp ONTAP
     * User Guide</i>.</p> 
     */
    inline void SetSubdirectory(const char* value) { m_subdirectoryHasBeenSet = true; m_subdirectory.assign(value); }

    /**
     * <p>Specifies the junction path (also known as a mount point) in the SVM volume
     * where you're copying data to or from (for example, <code>/vol1</code>).</p>
     *  <p>Don't specify a junction path in the SVM's root volume. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/managing-svms.html">Managing
     * FSx for ONTAP storage virtual machines</a> in the <i>Amazon FSx for NetApp ONTAP
     * User Guide</i>.</p> 
     */
    inline CreateLocationFsxOntapRequest& WithSubdirectory(const Aws::String& value) { SetSubdirectory(value); return *this;}

    /**
     * <p>Specifies the junction path (also known as a mount point) in the SVM volume
     * where you're copying data to or from (for example, <code>/vol1</code>).</p>
     *  <p>Don't specify a junction path in the SVM's root volume. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/managing-svms.html">Managing
     * FSx for ONTAP storage virtual machines</a> in the <i>Amazon FSx for NetApp ONTAP
     * User Guide</i>.</p> 
     */
    inline CreateLocationFsxOntapRequest& WithSubdirectory(Aws::String&& value) { SetSubdirectory(std::move(value)); return *this;}

    /**
     * <p>Specifies the junction path (also known as a mount point) in the SVM volume
     * where you're copying data to or from (for example, <code>/vol1</code>).</p>
     *  <p>Don't specify a junction path in the SVM's root volume. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/managing-svms.html">Managing
     * FSx for ONTAP storage virtual machines</a> in the <i>Amazon FSx for NetApp ONTAP
     * User Guide</i>.</p> 
     */
    inline CreateLocationFsxOntapRequest& WithSubdirectory(const char* value) { SetSubdirectory(value); return *this;}


    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * location.</p>
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const{ return m_tags; }

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * location.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * location.</p>
     */
    inline void SetTags(const Aws::Vector<TagListEntry>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * location.</p>
     */
    inline void SetTags(Aws::Vector<TagListEntry>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * location.</p>
     */
    inline CreateLocationFsxOntapRequest& WithTags(const Aws::Vector<TagListEntry>& value) { SetTags(value); return *this;}

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * location.</p>
     */
    inline CreateLocationFsxOntapRequest& WithTags(Aws::Vector<TagListEntry>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * location.</p>
     */
    inline CreateLocationFsxOntapRequest& AddTags(const TagListEntry& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * location.</p>
     */
    inline CreateLocationFsxOntapRequest& AddTags(TagListEntry&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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
