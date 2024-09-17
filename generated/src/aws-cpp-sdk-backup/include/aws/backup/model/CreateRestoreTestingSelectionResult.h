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
  class CreateRestoreTestingSelectionResult
  {
  public:
    AWS_BACKUP_API CreateRestoreTestingSelectionResult();
    AWS_BACKUP_API CreateRestoreTestingSelectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API CreateRestoreTestingSelectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The time that the resource testing selection was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline CreateRestoreTestingSelectionResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline CreateRestoreTestingSelectionResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the restore testing plan with which the restore testing selection
     * is associated.</p>
     */
    inline const Aws::String& GetRestoreTestingPlanArn() const{ return m_restoreTestingPlanArn; }
    inline void SetRestoreTestingPlanArn(const Aws::String& value) { m_restoreTestingPlanArn = value; }
    inline void SetRestoreTestingPlanArn(Aws::String&& value) { m_restoreTestingPlanArn = std::move(value); }
    inline void SetRestoreTestingPlanArn(const char* value) { m_restoreTestingPlanArn.assign(value); }
    inline CreateRestoreTestingSelectionResult& WithRestoreTestingPlanArn(const Aws::String& value) { SetRestoreTestingPlanArn(value); return *this;}
    inline CreateRestoreTestingSelectionResult& WithRestoreTestingPlanArn(Aws::String&& value) { SetRestoreTestingPlanArn(std::move(value)); return *this;}
    inline CreateRestoreTestingSelectionResult& WithRestoreTestingPlanArn(const char* value) { SetRestoreTestingPlanArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the restore testing plan.</p> <p>The name cannot be changed after
     * creation. The name consists of only alphanumeric characters and underscores.
     * Maximum length is 50.</p>
     */
    inline const Aws::String& GetRestoreTestingPlanName() const{ return m_restoreTestingPlanName; }
    inline void SetRestoreTestingPlanName(const Aws::String& value) { m_restoreTestingPlanName = value; }
    inline void SetRestoreTestingPlanName(Aws::String&& value) { m_restoreTestingPlanName = std::move(value); }
    inline void SetRestoreTestingPlanName(const char* value) { m_restoreTestingPlanName.assign(value); }
    inline CreateRestoreTestingSelectionResult& WithRestoreTestingPlanName(const Aws::String& value) { SetRestoreTestingPlanName(value); return *this;}
    inline CreateRestoreTestingSelectionResult& WithRestoreTestingPlanName(Aws::String&& value) { SetRestoreTestingPlanName(std::move(value)); return *this;}
    inline CreateRestoreTestingSelectionResult& WithRestoreTestingPlanName(const char* value) { SetRestoreTestingPlanName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the restore testing selection for the related restore testing
     * plan.</p>
     */
    inline const Aws::String& GetRestoreTestingSelectionName() const{ return m_restoreTestingSelectionName; }
    inline void SetRestoreTestingSelectionName(const Aws::String& value) { m_restoreTestingSelectionName = value; }
    inline void SetRestoreTestingSelectionName(Aws::String&& value) { m_restoreTestingSelectionName = std::move(value); }
    inline void SetRestoreTestingSelectionName(const char* value) { m_restoreTestingSelectionName.assign(value); }
    inline CreateRestoreTestingSelectionResult& WithRestoreTestingSelectionName(const Aws::String& value) { SetRestoreTestingSelectionName(value); return *this;}
    inline CreateRestoreTestingSelectionResult& WithRestoreTestingSelectionName(Aws::String&& value) { SetRestoreTestingSelectionName(std::move(value)); return *this;}
    inline CreateRestoreTestingSelectionResult& WithRestoreTestingSelectionName(const char* value) { SetRestoreTestingSelectionName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateRestoreTestingSelectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateRestoreTestingSelectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateRestoreTestingSelectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_restoreTestingPlanArn;

    Aws::String m_restoreTestingPlanName;

    Aws::String m_restoreTestingSelectionName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
