/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>A virtual machine that is on a hypervisor.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/VirtualMachine">AWS
   * API Reference</a></p>
   */
  class VirtualMachine
  {
  public:
    AWS_BACKUPGATEWAY_API VirtualMachine() = default;
    AWS_BACKUPGATEWAY_API VirtualMachine(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPGATEWAY_API VirtualMachine& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The host name of the virtual machine.</p>
     */
    inline const Aws::String& GetHostName() const { return m_hostName; }
    inline bool HostNameHasBeenSet() const { return m_hostNameHasBeenSet; }
    template<typename HostNameT = Aws::String>
    void SetHostName(HostNameT&& value) { m_hostNameHasBeenSet = true; m_hostName = std::forward<HostNameT>(value); }
    template<typename HostNameT = Aws::String>
    VirtualMachine& WithHostName(HostNameT&& value) { SetHostName(std::forward<HostNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the virtual machine's hypervisor.</p>
     */
    inline const Aws::String& GetHypervisorId() const { return m_hypervisorId; }
    inline bool HypervisorIdHasBeenSet() const { return m_hypervisorIdHasBeenSet; }
    template<typename HypervisorIdT = Aws::String>
    void SetHypervisorId(HypervisorIdT&& value) { m_hypervisorIdHasBeenSet = true; m_hypervisorId = std::forward<HypervisorIdT>(value); }
    template<typename HypervisorIdT = Aws::String>
    VirtualMachine& WithHypervisorId(HypervisorIdT&& value) { SetHypervisorId(std::forward<HypervisorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent date a virtual machine was backed up, in Unix format and UTC
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastBackupDate() const { return m_lastBackupDate; }
    inline bool LastBackupDateHasBeenSet() const { return m_lastBackupDateHasBeenSet; }
    template<typename LastBackupDateT = Aws::Utils::DateTime>
    void SetLastBackupDate(LastBackupDateT&& value) { m_lastBackupDateHasBeenSet = true; m_lastBackupDate = std::forward<LastBackupDateT>(value); }
    template<typename LastBackupDateT = Aws::Utils::DateTime>
    VirtualMachine& WithLastBackupDate(LastBackupDateT&& value) { SetLastBackupDate(std::forward<LastBackupDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the virtual machine.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    VirtualMachine& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path of the virtual machine.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    VirtualMachine& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the virtual machine. For example,
     * <code>arn:aws:backup-gateway:us-west-1:0000000000000:vm/vm-0000ABCDEFGIJKL</code>.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    VirtualMachine& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hostName;
    bool m_hostNameHasBeenSet = false;

    Aws::String m_hypervisorId;
    bool m_hypervisorIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastBackupDate{};
    bool m_lastBackupDateHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
