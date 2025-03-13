/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Backup
{
namespace Model
{
  class UpdateRestoreTestingSelectionResult
  {
  public:
    AWS_BACKUP_API UpdateRestoreTestingSelectionResult() = default;
    AWS_BACKUP_API UpdateRestoreTestingSelectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API UpdateRestoreTestingSelectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The time the resource testing selection was updated successfully.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    UpdateRestoreTestingSelectionResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique string that is the name of the restore testing plan.</p>
     */
    inline const Aws::String& GetRestoreTestingPlanArn() const { return m_restoreTestingPlanArn; }
    template<typename RestoreTestingPlanArnT = Aws::String>
    void SetRestoreTestingPlanArn(RestoreTestingPlanArnT&& value) { m_restoreTestingPlanArnHasBeenSet = true; m_restoreTestingPlanArn = std::forward<RestoreTestingPlanArnT>(value); }
    template<typename RestoreTestingPlanArnT = Aws::String>
    UpdateRestoreTestingSelectionResult& WithRestoreTestingPlanArn(RestoreTestingPlanArnT&& value) { SetRestoreTestingPlanArn(std::forward<RestoreTestingPlanArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The restore testing plan with which the updated restore testing selection is
     * associated.</p>
     */
    inline const Aws::String& GetRestoreTestingPlanName() const { return m_restoreTestingPlanName; }
    template<typename RestoreTestingPlanNameT = Aws::String>
    void SetRestoreTestingPlanName(RestoreTestingPlanNameT&& value) { m_restoreTestingPlanNameHasBeenSet = true; m_restoreTestingPlanName = std::forward<RestoreTestingPlanNameT>(value); }
    template<typename RestoreTestingPlanNameT = Aws::String>
    UpdateRestoreTestingSelectionResult& WithRestoreTestingPlanName(RestoreTestingPlanNameT&& value) { SetRestoreTestingPlanName(std::forward<RestoreTestingPlanNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The returned restore testing selection name.</p>
     */
    inline const Aws::String& GetRestoreTestingSelectionName() const { return m_restoreTestingSelectionName; }
    template<typename RestoreTestingSelectionNameT = Aws::String>
    void SetRestoreTestingSelectionName(RestoreTestingSelectionNameT&& value) { m_restoreTestingSelectionNameHasBeenSet = true; m_restoreTestingSelectionName = std::forward<RestoreTestingSelectionNameT>(value); }
    template<typename RestoreTestingSelectionNameT = Aws::String>
    UpdateRestoreTestingSelectionResult& WithRestoreTestingSelectionName(RestoreTestingSelectionNameT&& value) { SetRestoreTestingSelectionName(std::forward<RestoreTestingSelectionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the update completed for the restore testing selection.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    UpdateRestoreTestingSelectionResult& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateRestoreTestingSelectionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_restoreTestingPlanArn;
    bool m_restoreTestingPlanArnHasBeenSet = false;

    Aws::String m_restoreTestingPlanName;
    bool m_restoreTestingPlanNameHasBeenSet = false;

    Aws::String m_restoreTestingSelectionName;
    bool m_restoreTestingSelectionNameHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
