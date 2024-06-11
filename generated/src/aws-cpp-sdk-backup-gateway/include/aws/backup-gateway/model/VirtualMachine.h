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
    AWS_BACKUPGATEWAY_API VirtualMachine();
    AWS_BACKUPGATEWAY_API VirtualMachine(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPGATEWAY_API VirtualMachine& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The host name of the virtual machine.</p>
     */
    inline const Aws::String& GetHostName() const{ return m_hostName; }
    inline bool HostNameHasBeenSet() const { return m_hostNameHasBeenSet; }
    inline void SetHostName(const Aws::String& value) { m_hostNameHasBeenSet = true; m_hostName = value; }
    inline void SetHostName(Aws::String&& value) { m_hostNameHasBeenSet = true; m_hostName = std::move(value); }
    inline void SetHostName(const char* value) { m_hostNameHasBeenSet = true; m_hostName.assign(value); }
    inline VirtualMachine& WithHostName(const Aws::String& value) { SetHostName(value); return *this;}
    inline VirtualMachine& WithHostName(Aws::String&& value) { SetHostName(std::move(value)); return *this;}
    inline VirtualMachine& WithHostName(const char* value) { SetHostName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the virtual machine's hypervisor.</p>
     */
    inline const Aws::String& GetHypervisorId() const{ return m_hypervisorId; }
    inline bool HypervisorIdHasBeenSet() const { return m_hypervisorIdHasBeenSet; }
    inline void SetHypervisorId(const Aws::String& value) { m_hypervisorIdHasBeenSet = true; m_hypervisorId = value; }
    inline void SetHypervisorId(Aws::String&& value) { m_hypervisorIdHasBeenSet = true; m_hypervisorId = std::move(value); }
    inline void SetHypervisorId(const char* value) { m_hypervisorIdHasBeenSet = true; m_hypervisorId.assign(value); }
    inline VirtualMachine& WithHypervisorId(const Aws::String& value) { SetHypervisorId(value); return *this;}
    inline VirtualMachine& WithHypervisorId(Aws::String&& value) { SetHypervisorId(std::move(value)); return *this;}
    inline VirtualMachine& WithHypervisorId(const char* value) { SetHypervisorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent date a virtual machine was backed up, in Unix format and UTC
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastBackupDate() const{ return m_lastBackupDate; }
    inline bool LastBackupDateHasBeenSet() const { return m_lastBackupDateHasBeenSet; }
    inline void SetLastBackupDate(const Aws::Utils::DateTime& value) { m_lastBackupDateHasBeenSet = true; m_lastBackupDate = value; }
    inline void SetLastBackupDate(Aws::Utils::DateTime&& value) { m_lastBackupDateHasBeenSet = true; m_lastBackupDate = std::move(value); }
    inline VirtualMachine& WithLastBackupDate(const Aws::Utils::DateTime& value) { SetLastBackupDate(value); return *this;}
    inline VirtualMachine& WithLastBackupDate(Aws::Utils::DateTime&& value) { SetLastBackupDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the virtual machine.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline VirtualMachine& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline VirtualMachine& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline VirtualMachine& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path of the virtual machine.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }
    inline VirtualMachine& WithPath(const Aws::String& value) { SetPath(value); return *this;}
    inline VirtualMachine& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}
    inline VirtualMachine& WithPath(const char* value) { SetPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the virtual machine. For example,
     * <code>arn:aws:backup-gateway:us-west-1:0000000000000:vm/vm-0000ABCDEFGIJKL</code>.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline VirtualMachine& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline VirtualMachine& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline VirtualMachine& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}
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
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
