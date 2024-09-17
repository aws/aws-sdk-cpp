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
  class UpdateRestoreTestingPlanResult
  {
  public:
    AWS_BACKUP_API UpdateRestoreTestingPlanResult();
    AWS_BACKUP_API UpdateRestoreTestingPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API UpdateRestoreTestingPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The time the resource testing plan was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline UpdateRestoreTestingPlanResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline UpdateRestoreTestingPlanResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique ARN (Amazon Resource Name) of the restore testing plan.</p>
     */
    inline const Aws::String& GetRestoreTestingPlanArn() const{ return m_restoreTestingPlanArn; }
    inline void SetRestoreTestingPlanArn(const Aws::String& value) { m_restoreTestingPlanArn = value; }
    inline void SetRestoreTestingPlanArn(Aws::String&& value) { m_restoreTestingPlanArn = std::move(value); }
    inline void SetRestoreTestingPlanArn(const char* value) { m_restoreTestingPlanArn.assign(value); }
    inline UpdateRestoreTestingPlanResult& WithRestoreTestingPlanArn(const Aws::String& value) { SetRestoreTestingPlanArn(value); return *this;}
    inline UpdateRestoreTestingPlanResult& WithRestoreTestingPlanArn(Aws::String&& value) { SetRestoreTestingPlanArn(std::move(value)); return *this;}
    inline UpdateRestoreTestingPlanResult& WithRestoreTestingPlanArn(const char* value) { SetRestoreTestingPlanArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name cannot be changed after creation. The name consists of only
     * alphanumeric characters and underscores. Maximum length is 50.</p>
     */
    inline const Aws::String& GetRestoreTestingPlanName() const{ return m_restoreTestingPlanName; }
    inline void SetRestoreTestingPlanName(const Aws::String& value) { m_restoreTestingPlanName = value; }
    inline void SetRestoreTestingPlanName(Aws::String&& value) { m_restoreTestingPlanName = std::move(value); }
    inline void SetRestoreTestingPlanName(const char* value) { m_restoreTestingPlanName.assign(value); }
    inline UpdateRestoreTestingPlanResult& WithRestoreTestingPlanName(const Aws::String& value) { SetRestoreTestingPlanName(value); return *this;}
    inline UpdateRestoreTestingPlanResult& WithRestoreTestingPlanName(Aws::String&& value) { SetRestoreTestingPlanName(std::move(value)); return *this;}
    inline UpdateRestoreTestingPlanResult& WithRestoreTestingPlanName(const char* value) { SetRestoreTestingPlanName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the update completed for the restore testing plan.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }
    inline UpdateRestoreTestingPlanResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline UpdateRestoreTestingPlanResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateRestoreTestingPlanResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateRestoreTestingPlanResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateRestoreTestingPlanResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_restoreTestingPlanArn;

    Aws::String m_restoreTestingPlanName;

    Aws::Utils::DateTime m_updateTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
