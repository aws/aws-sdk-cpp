/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backup-gateway/model/VmwareTag.h>
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
namespace BackupGateway
{
namespace Model
{

  /**
   * <p>Your <code>VirtualMachine</code> objects, ordered by their Amazon Resource
   * Names (ARNs).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/VirtualMachineDetails">AWS
   * API Reference</a></p>
   */
  class VirtualMachineDetails
  {
  public:
    AWS_BACKUPGATEWAY_API VirtualMachineDetails();
    AWS_BACKUPGATEWAY_API VirtualMachineDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPGATEWAY_API VirtualMachineDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The host name of the virtual machine.</p>
     */
    inline const Aws::String& GetHostName() const{ return m_hostName; }

    /**
     * <p>The host name of the virtual machine.</p>
     */
    inline bool HostNameHasBeenSet() const { return m_hostNameHasBeenSet; }

    /**
     * <p>The host name of the virtual machine.</p>
     */
    inline void SetHostName(const Aws::String& value) { m_hostNameHasBeenSet = true; m_hostName = value; }

    /**
     * <p>The host name of the virtual machine.</p>
     */
    inline void SetHostName(Aws::String&& value) { m_hostNameHasBeenSet = true; m_hostName = std::move(value); }

    /**
     * <p>The host name of the virtual machine.</p>
     */
    inline void SetHostName(const char* value) { m_hostNameHasBeenSet = true; m_hostName.assign(value); }

    /**
     * <p>The host name of the virtual machine.</p>
     */
    inline VirtualMachineDetails& WithHostName(const Aws::String& value) { SetHostName(value); return *this;}

    /**
     * <p>The host name of the virtual machine.</p>
     */
    inline VirtualMachineDetails& WithHostName(Aws::String&& value) { SetHostName(std::move(value)); return *this;}

    /**
     * <p>The host name of the virtual machine.</p>
     */
    inline VirtualMachineDetails& WithHostName(const char* value) { SetHostName(value); return *this;}


    /**
     * <p>The ID of the virtual machine's hypervisor.</p>
     */
    inline const Aws::String& GetHypervisorId() const{ return m_hypervisorId; }

    /**
     * <p>The ID of the virtual machine's hypervisor.</p>
     */
    inline bool HypervisorIdHasBeenSet() const { return m_hypervisorIdHasBeenSet; }

    /**
     * <p>The ID of the virtual machine's hypervisor.</p>
     */
    inline void SetHypervisorId(const Aws::String& value) { m_hypervisorIdHasBeenSet = true; m_hypervisorId = value; }

    /**
     * <p>The ID of the virtual machine's hypervisor.</p>
     */
    inline void SetHypervisorId(Aws::String&& value) { m_hypervisorIdHasBeenSet = true; m_hypervisorId = std::move(value); }

    /**
     * <p>The ID of the virtual machine's hypervisor.</p>
     */
    inline void SetHypervisorId(const char* value) { m_hypervisorIdHasBeenSet = true; m_hypervisorId.assign(value); }

    /**
     * <p>The ID of the virtual machine's hypervisor.</p>
     */
    inline VirtualMachineDetails& WithHypervisorId(const Aws::String& value) { SetHypervisorId(value); return *this;}

    /**
     * <p>The ID of the virtual machine's hypervisor.</p>
     */
    inline VirtualMachineDetails& WithHypervisorId(Aws::String&& value) { SetHypervisorId(std::move(value)); return *this;}

    /**
     * <p>The ID of the virtual machine's hypervisor.</p>
     */
    inline VirtualMachineDetails& WithHypervisorId(const char* value) { SetHypervisorId(value); return *this;}


    /**
     * <p>The most recent date a virtual machine was backed up, in Unix format and UTC
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastBackupDate() const{ return m_lastBackupDate; }

    /**
     * <p>The most recent date a virtual machine was backed up, in Unix format and UTC
     * time.</p>
     */
    inline bool LastBackupDateHasBeenSet() const { return m_lastBackupDateHasBeenSet; }

    /**
     * <p>The most recent date a virtual machine was backed up, in Unix format and UTC
     * time.</p>
     */
    inline void SetLastBackupDate(const Aws::Utils::DateTime& value) { m_lastBackupDateHasBeenSet = true; m_lastBackupDate = value; }

    /**
     * <p>The most recent date a virtual machine was backed up, in Unix format and UTC
     * time.</p>
     */
    inline void SetLastBackupDate(Aws::Utils::DateTime&& value) { m_lastBackupDateHasBeenSet = true; m_lastBackupDate = std::move(value); }

    /**
     * <p>The most recent date a virtual machine was backed up, in Unix format and UTC
     * time.</p>
     */
    inline VirtualMachineDetails& WithLastBackupDate(const Aws::Utils::DateTime& value) { SetLastBackupDate(value); return *this;}

    /**
     * <p>The most recent date a virtual machine was backed up, in Unix format and UTC
     * time.</p>
     */
    inline VirtualMachineDetails& WithLastBackupDate(Aws::Utils::DateTime&& value) { SetLastBackupDate(std::move(value)); return *this;}


    /**
     * <p>The name of the virtual machine.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the virtual machine.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the virtual machine.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the virtual machine.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the virtual machine.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the virtual machine.</p>
     */
    inline VirtualMachineDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the virtual machine.</p>
     */
    inline VirtualMachineDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the virtual machine.</p>
     */
    inline VirtualMachineDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The path of the virtual machine.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The path of the virtual machine.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The path of the virtual machine.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path of the virtual machine.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The path of the virtual machine.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The path of the virtual machine.</p>
     */
    inline VirtualMachineDetails& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The path of the virtual machine.</p>
     */
    inline VirtualMachineDetails& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The path of the virtual machine.</p>
     */
    inline VirtualMachineDetails& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the virtual machine. For example,
     * <code>arn:aws:backup-gateway:us-west-1:0000000000000:vm/vm-0000ABCDEFGIJKL</code>.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual machine. For example,
     * <code>arn:aws:backup-gateway:us-west-1:0000000000000:vm/vm-0000ABCDEFGIJKL</code>.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual machine. For example,
     * <code>arn:aws:backup-gateway:us-west-1:0000000000000:vm/vm-0000ABCDEFGIJKL</code>.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual machine. For example,
     * <code>arn:aws:backup-gateway:us-west-1:0000000000000:vm/vm-0000ABCDEFGIJKL</code>.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual machine. For example,
     * <code>arn:aws:backup-gateway:us-west-1:0000000000000:vm/vm-0000ABCDEFGIJKL</code>.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual machine. For example,
     * <code>arn:aws:backup-gateway:us-west-1:0000000000000:vm/vm-0000ABCDEFGIJKL</code>.</p>
     */
    inline VirtualMachineDetails& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual machine. For example,
     * <code>arn:aws:backup-gateway:us-west-1:0000000000000:vm/vm-0000ABCDEFGIJKL</code>.</p>
     */
    inline VirtualMachineDetails& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual machine. For example,
     * <code>arn:aws:backup-gateway:us-west-1:0000000000000:vm/vm-0000ABCDEFGIJKL</code>.</p>
     */
    inline VirtualMachineDetails& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>These are the details of the VMware tags associated with the specified
     * virtual machine.</p>
     */
    inline const Aws::Vector<VmwareTag>& GetVmwareTags() const{ return m_vmwareTags; }

    /**
     * <p>These are the details of the VMware tags associated with the specified
     * virtual machine.</p>
     */
    inline bool VmwareTagsHasBeenSet() const { return m_vmwareTagsHasBeenSet; }

    /**
     * <p>These are the details of the VMware tags associated with the specified
     * virtual machine.</p>
     */
    inline void SetVmwareTags(const Aws::Vector<VmwareTag>& value) { m_vmwareTagsHasBeenSet = true; m_vmwareTags = value; }

    /**
     * <p>These are the details of the VMware tags associated with the specified
     * virtual machine.</p>
     */
    inline void SetVmwareTags(Aws::Vector<VmwareTag>&& value) { m_vmwareTagsHasBeenSet = true; m_vmwareTags = std::move(value); }

    /**
     * <p>These are the details of the VMware tags associated with the specified
     * virtual machine.</p>
     */
    inline VirtualMachineDetails& WithVmwareTags(const Aws::Vector<VmwareTag>& value) { SetVmwareTags(value); return *this;}

    /**
     * <p>These are the details of the VMware tags associated with the specified
     * virtual machine.</p>
     */
    inline VirtualMachineDetails& WithVmwareTags(Aws::Vector<VmwareTag>&& value) { SetVmwareTags(std::move(value)); return *this;}

    /**
     * <p>These are the details of the VMware tags associated with the specified
     * virtual machine.</p>
     */
    inline VirtualMachineDetails& AddVmwareTags(const VmwareTag& value) { m_vmwareTagsHasBeenSet = true; m_vmwareTags.push_back(value); return *this; }

    /**
     * <p>These are the details of the VMware tags associated with the specified
     * virtual machine.</p>
     */
    inline VirtualMachineDetails& AddVmwareTags(VmwareTag&& value) { m_vmwareTagsHasBeenSet = true; m_vmwareTags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_hostName;
    bool m_hostNameHasBeenSet = false;

    Aws::String m_hypervisorId;
    bool m_hypervisorIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastBackupDate;
    bool m_lastBackupDateHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Vector<VmwareTag> m_vmwareTags;
    bool m_vmwareTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
