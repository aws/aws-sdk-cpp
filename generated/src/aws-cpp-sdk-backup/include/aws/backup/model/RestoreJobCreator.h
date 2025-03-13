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
   * <p>Contains information about the restore testing plan that Backup used to
   * initiate the restore job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/RestoreJobCreator">AWS
   * API Reference</a></p>
   */
  class RestoreJobCreator
  {
  public:
    AWS_BACKUP_API RestoreJobCreator() = default;
    AWS_BACKUP_API RestoreJobCreator(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API RestoreJobCreator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a restore testing
     * plan.</p>
     */
    inline const Aws::String& GetRestoreTestingPlanArn() const { return m_restoreTestingPlanArn; }
    inline bool RestoreTestingPlanArnHasBeenSet() const { return m_restoreTestingPlanArnHasBeenSet; }
    template<typename RestoreTestingPlanArnT = Aws::String>
    void SetRestoreTestingPlanArn(RestoreTestingPlanArnT&& value) { m_restoreTestingPlanArnHasBeenSet = true; m_restoreTestingPlanArn = std::forward<RestoreTestingPlanArnT>(value); }
    template<typename RestoreTestingPlanArnT = Aws::String>
    RestoreJobCreator& WithRestoreTestingPlanArn(RestoreTestingPlanArnT&& value) { SetRestoreTestingPlanArn(std::forward<RestoreTestingPlanArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_restoreTestingPlanArn;
    bool m_restoreTestingPlanArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
