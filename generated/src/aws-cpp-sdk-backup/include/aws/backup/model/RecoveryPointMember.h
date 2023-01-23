/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
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
   * <p>This is a recovery point which is a child (nested) recovery point of a parent
   * (composite) recovery point. These recovery points can be disassociated from
   * their parent (composite) recovery point, in which case they will no longer be a
   * member.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/RecoveryPointMember">AWS
   * API Reference</a></p>
   */
  class RecoveryPointMember
  {
  public:
    AWS_BACKUP_API RecoveryPointMember();
    AWS_BACKUP_API RecoveryPointMember(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API RecoveryPointMember& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>This is the Amazon Resource Name (ARN) of the parent (composite) recovery
     * point.</p>
     */
    inline const Aws::String& GetRecoveryPointArn() const{ return m_recoveryPointArn; }

    /**
     * <p>This is the Amazon Resource Name (ARN) of the parent (composite) recovery
     * point.</p>
     */
    inline bool RecoveryPointArnHasBeenSet() const { return m_recoveryPointArnHasBeenSet; }

    /**
     * <p>This is the Amazon Resource Name (ARN) of the parent (composite) recovery
     * point.</p>
     */
    inline void SetRecoveryPointArn(const Aws::String& value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn = value; }

    /**
     * <p>This is the Amazon Resource Name (ARN) of the parent (composite) recovery
     * point.</p>
     */
    inline void SetRecoveryPointArn(Aws::String&& value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn = std::move(value); }

    /**
     * <p>This is the Amazon Resource Name (ARN) of the parent (composite) recovery
     * point.</p>
     */
    inline void SetRecoveryPointArn(const char* value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn.assign(value); }

    /**
     * <p>This is the Amazon Resource Name (ARN) of the parent (composite) recovery
     * point.</p>
     */
    inline RecoveryPointMember& WithRecoveryPointArn(const Aws::String& value) { SetRecoveryPointArn(value); return *this;}

    /**
     * <p>This is the Amazon Resource Name (ARN) of the parent (composite) recovery
     * point.</p>
     */
    inline RecoveryPointMember& WithRecoveryPointArn(Aws::String&& value) { SetRecoveryPointArn(std::move(value)); return *this;}

    /**
     * <p>This is the Amazon Resource Name (ARN) of the parent (composite) recovery
     * point.</p>
     */
    inline RecoveryPointMember& WithRecoveryPointArn(const char* value) { SetRecoveryPointArn(value); return *this;}

  private:

    Aws::String m_recoveryPointArn;
    bool m_recoveryPointArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
