/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/Lifecycle.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Backup
{
namespace Model
{

  /**
   * <p>The details of the copy operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/CopyAction">AWS
   * API Reference</a></p>
   */
  class CopyAction
  {
  public:
    AWS_BACKUP_API CopyAction() = default;
    AWS_BACKUP_API CopyAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API CopyAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Lifecycle& GetLifecycle() const { return m_lifecycle; }
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }
    template<typename LifecycleT = Lifecycle>
    void SetLifecycle(LifecycleT&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::forward<LifecycleT>(value); }
    template<typename LifecycleT = Lifecycle>
    CopyAction& WithLifecycle(LifecycleT&& value) { SetLifecycle(std::forward<LifecycleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies the destination backup
     * vault for the copied backup. For example,
     * <code>arn:aws:backup:us-east-1:123456789012:backup-vault:aBackupVault</code>.</p>
     */
    inline const Aws::String& GetDestinationBackupVaultArn() const { return m_destinationBackupVaultArn; }
    inline bool DestinationBackupVaultArnHasBeenSet() const { return m_destinationBackupVaultArnHasBeenSet; }
    template<typename DestinationBackupVaultArnT = Aws::String>
    void SetDestinationBackupVaultArn(DestinationBackupVaultArnT&& value) { m_destinationBackupVaultArnHasBeenSet = true; m_destinationBackupVaultArn = std::forward<DestinationBackupVaultArnT>(value); }
    template<typename DestinationBackupVaultArnT = Aws::String>
    CopyAction& WithDestinationBackupVaultArn(DestinationBackupVaultArnT&& value) { SetDestinationBackupVaultArn(std::forward<DestinationBackupVaultArnT>(value)); return *this;}
    ///@}
  private:

    Lifecycle m_lifecycle;
    bool m_lifecycleHasBeenSet = false;

    Aws::String m_destinationBackupVaultArn;
    bool m_destinationBackupVaultArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
