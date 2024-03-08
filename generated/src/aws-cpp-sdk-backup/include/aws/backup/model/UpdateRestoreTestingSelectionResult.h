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
    AWS_BACKUP_API UpdateRestoreTestingSelectionResult();
    AWS_BACKUP_API UpdateRestoreTestingSelectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API UpdateRestoreTestingSelectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>This is the time the resource testing selection was updated successfully.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>This is the time the resource testing selection was updated successfully.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>This is the time the resource testing selection was updated successfully.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>This is the time the resource testing selection was updated successfully.</p>
     */
    inline UpdateRestoreTestingSelectionResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>This is the time the resource testing selection was updated successfully.</p>
     */
    inline UpdateRestoreTestingSelectionResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>Unique string that is the name of the restore testing plan.</p>
     */
    inline const Aws::String& GetRestoreTestingPlanArn() const{ return m_restoreTestingPlanArn; }

    /**
     * <p>Unique string that is the name of the restore testing plan.</p>
     */
    inline void SetRestoreTestingPlanArn(const Aws::String& value) { m_restoreTestingPlanArn = value; }

    /**
     * <p>Unique string that is the name of the restore testing plan.</p>
     */
    inline void SetRestoreTestingPlanArn(Aws::String&& value) { m_restoreTestingPlanArn = std::move(value); }

    /**
     * <p>Unique string that is the name of the restore testing plan.</p>
     */
    inline void SetRestoreTestingPlanArn(const char* value) { m_restoreTestingPlanArn.assign(value); }

    /**
     * <p>Unique string that is the name of the restore testing plan.</p>
     */
    inline UpdateRestoreTestingSelectionResult& WithRestoreTestingPlanArn(const Aws::String& value) { SetRestoreTestingPlanArn(value); return *this;}

    /**
     * <p>Unique string that is the name of the restore testing plan.</p>
     */
    inline UpdateRestoreTestingSelectionResult& WithRestoreTestingPlanArn(Aws::String&& value) { SetRestoreTestingPlanArn(std::move(value)); return *this;}

    /**
     * <p>Unique string that is the name of the restore testing plan.</p>
     */
    inline UpdateRestoreTestingSelectionResult& WithRestoreTestingPlanArn(const char* value) { SetRestoreTestingPlanArn(value); return *this;}


    /**
     * <p>This is the restore testing plan with which the updated restore testing
     * selection is associated.</p>
     */
    inline const Aws::String& GetRestoreTestingPlanName() const{ return m_restoreTestingPlanName; }

    /**
     * <p>This is the restore testing plan with which the updated restore testing
     * selection is associated.</p>
     */
    inline void SetRestoreTestingPlanName(const Aws::String& value) { m_restoreTestingPlanName = value; }

    /**
     * <p>This is the restore testing plan with which the updated restore testing
     * selection is associated.</p>
     */
    inline void SetRestoreTestingPlanName(Aws::String&& value) { m_restoreTestingPlanName = std::move(value); }

    /**
     * <p>This is the restore testing plan with which the updated restore testing
     * selection is associated.</p>
     */
    inline void SetRestoreTestingPlanName(const char* value) { m_restoreTestingPlanName.assign(value); }

    /**
     * <p>This is the restore testing plan with which the updated restore testing
     * selection is associated.</p>
     */
    inline UpdateRestoreTestingSelectionResult& WithRestoreTestingPlanName(const Aws::String& value) { SetRestoreTestingPlanName(value); return *this;}

    /**
     * <p>This is the restore testing plan with which the updated restore testing
     * selection is associated.</p>
     */
    inline UpdateRestoreTestingSelectionResult& WithRestoreTestingPlanName(Aws::String&& value) { SetRestoreTestingPlanName(std::move(value)); return *this;}

    /**
     * <p>This is the restore testing plan with which the updated restore testing
     * selection is associated.</p>
     */
    inline UpdateRestoreTestingSelectionResult& WithRestoreTestingPlanName(const char* value) { SetRestoreTestingPlanName(value); return *this;}


    /**
     * <p>This is the returned restore testing selection name.</p>
     */
    inline const Aws::String& GetRestoreTestingSelectionName() const{ return m_restoreTestingSelectionName; }

    /**
     * <p>This is the returned restore testing selection name.</p>
     */
    inline void SetRestoreTestingSelectionName(const Aws::String& value) { m_restoreTestingSelectionName = value; }

    /**
     * <p>This is the returned restore testing selection name.</p>
     */
    inline void SetRestoreTestingSelectionName(Aws::String&& value) { m_restoreTestingSelectionName = std::move(value); }

    /**
     * <p>This is the returned restore testing selection name.</p>
     */
    inline void SetRestoreTestingSelectionName(const char* value) { m_restoreTestingSelectionName.assign(value); }

    /**
     * <p>This is the returned restore testing selection name.</p>
     */
    inline UpdateRestoreTestingSelectionResult& WithRestoreTestingSelectionName(const Aws::String& value) { SetRestoreTestingSelectionName(value); return *this;}

    /**
     * <p>This is the returned restore testing selection name.</p>
     */
    inline UpdateRestoreTestingSelectionResult& WithRestoreTestingSelectionName(Aws::String&& value) { SetRestoreTestingSelectionName(std::move(value)); return *this;}

    /**
     * <p>This is the returned restore testing selection name.</p>
     */
    inline UpdateRestoreTestingSelectionResult& WithRestoreTestingSelectionName(const char* value) { SetRestoreTestingSelectionName(value); return *this;}


    /**
     * <p>This is the time the update completed for the restore testing selection.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>This is the time the update completed for the restore testing selection.</p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }

    /**
     * <p>This is the time the update completed for the restore testing selection.</p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }

    /**
     * <p>This is the time the update completed for the restore testing selection.</p>
     */
    inline UpdateRestoreTestingSelectionResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>This is the time the update completed for the restore testing selection.</p>
     */
    inline UpdateRestoreTestingSelectionResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateRestoreTestingSelectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateRestoreTestingSelectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateRestoreTestingSelectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_restoreTestingPlanArn;

    Aws::String m_restoreTestingPlanName;

    Aws::String m_restoreTestingSelectionName;

    Aws::Utils::DateTime m_updateTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
