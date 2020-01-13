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
  class AWS_BACKUP_API CopyAction
  {
  public:
    CopyAction();
    CopyAction(Aws::Utils::Json::JsonView jsonValue);
    CopyAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Lifecycle& GetLifecycle() const{ return m_lifecycle; }

    
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }

    
    inline void SetLifecycle(const Lifecycle& value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }

    
    inline void SetLifecycle(Lifecycle&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::move(value); }

    
    inline CopyAction& WithLifecycle(const Lifecycle& value) { SetLifecycle(value); return *this;}

    
    inline CopyAction& WithLifecycle(Lifecycle&& value) { SetLifecycle(std::move(value)); return *this;}


    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies the destination backup
     * vault for the copied backup. For example,
     * arn:aws:backup:us-east-1:123456789012:vault:aBackupVault.</p>
     */
    inline const Aws::String& GetDestinationBackupVaultArn() const{ return m_destinationBackupVaultArn; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies the destination backup
     * vault for the copied backup. For example,
     * arn:aws:backup:us-east-1:123456789012:vault:aBackupVault.</p>
     */
    inline bool DestinationBackupVaultArnHasBeenSet() const { return m_destinationBackupVaultArnHasBeenSet; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies the destination backup
     * vault for the copied backup. For example,
     * arn:aws:backup:us-east-1:123456789012:vault:aBackupVault.</p>
     */
    inline void SetDestinationBackupVaultArn(const Aws::String& value) { m_destinationBackupVaultArnHasBeenSet = true; m_destinationBackupVaultArn = value; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies the destination backup
     * vault for the copied backup. For example,
     * arn:aws:backup:us-east-1:123456789012:vault:aBackupVault.</p>
     */
    inline void SetDestinationBackupVaultArn(Aws::String&& value) { m_destinationBackupVaultArnHasBeenSet = true; m_destinationBackupVaultArn = std::move(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies the destination backup
     * vault for the copied backup. For example,
     * arn:aws:backup:us-east-1:123456789012:vault:aBackupVault.</p>
     */
    inline void SetDestinationBackupVaultArn(const char* value) { m_destinationBackupVaultArnHasBeenSet = true; m_destinationBackupVaultArn.assign(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies the destination backup
     * vault for the copied backup. For example,
     * arn:aws:backup:us-east-1:123456789012:vault:aBackupVault.</p>
     */
    inline CopyAction& WithDestinationBackupVaultArn(const Aws::String& value) { SetDestinationBackupVaultArn(value); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies the destination backup
     * vault for the copied backup. For example,
     * arn:aws:backup:us-east-1:123456789012:vault:aBackupVault.</p>
     */
    inline CopyAction& WithDestinationBackupVaultArn(Aws::String&& value) { SetDestinationBackupVaultArn(std::move(value)); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies the destination backup
     * vault for the copied backup. For example,
     * arn:aws:backup:us-east-1:123456789012:vault:aBackupVault.</p>
     */
    inline CopyAction& WithDestinationBackupVaultArn(const char* value) { SetDestinationBackupVaultArn(value); return *this;}

  private:

    Lifecycle m_lifecycle;
    bool m_lifecycleHasBeenSet;

    Aws::String m_destinationBackupVaultArn;
    bool m_destinationBackupVaultArnHasBeenSet;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
