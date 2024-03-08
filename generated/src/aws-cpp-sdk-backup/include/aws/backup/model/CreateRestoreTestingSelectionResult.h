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


    /**
     * <p>This is the time the resource testing selection was created successfully.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>This is the time the resource testing selection was created successfully.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>This is the time the resource testing selection was created successfully.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>This is the time the resource testing selection was created successfully.</p>
     */
    inline CreateRestoreTestingSelectionResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>This is the time the resource testing selection was created successfully.</p>
     */
    inline CreateRestoreTestingSelectionResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>This is the ARN of the restore testing plan with which the restore testing
     * selection is associated.</p>
     */
    inline const Aws::String& GetRestoreTestingPlanArn() const{ return m_restoreTestingPlanArn; }

    /**
     * <p>This is the ARN of the restore testing plan with which the restore testing
     * selection is associated.</p>
     */
    inline void SetRestoreTestingPlanArn(const Aws::String& value) { m_restoreTestingPlanArn = value; }

    /**
     * <p>This is the ARN of the restore testing plan with which the restore testing
     * selection is associated.</p>
     */
    inline void SetRestoreTestingPlanArn(Aws::String&& value) { m_restoreTestingPlanArn = std::move(value); }

    /**
     * <p>This is the ARN of the restore testing plan with which the restore testing
     * selection is associated.</p>
     */
    inline void SetRestoreTestingPlanArn(const char* value) { m_restoreTestingPlanArn.assign(value); }

    /**
     * <p>This is the ARN of the restore testing plan with which the restore testing
     * selection is associated.</p>
     */
    inline CreateRestoreTestingSelectionResult& WithRestoreTestingPlanArn(const Aws::String& value) { SetRestoreTestingPlanArn(value); return *this;}

    /**
     * <p>This is the ARN of the restore testing plan with which the restore testing
     * selection is associated.</p>
     */
    inline CreateRestoreTestingSelectionResult& WithRestoreTestingPlanArn(Aws::String&& value) { SetRestoreTestingPlanArn(std::move(value)); return *this;}

    /**
     * <p>This is the ARN of the restore testing plan with which the restore testing
     * selection is associated.</p>
     */
    inline CreateRestoreTestingSelectionResult& WithRestoreTestingPlanArn(const char* value) { SetRestoreTestingPlanArn(value); return *this;}


    /**
     * <p>Unique string that is the name of the restore testing plan.</p> <p>The name
     * cannot be changed after creation. The name consists of only alphanumeric
     * characters and underscores. Maximum length is 50.</p>
     */
    inline const Aws::String& GetRestoreTestingPlanName() const{ return m_restoreTestingPlanName; }

    /**
     * <p>Unique string that is the name of the restore testing plan.</p> <p>The name
     * cannot be changed after creation. The name consists of only alphanumeric
     * characters and underscores. Maximum length is 50.</p>
     */
    inline void SetRestoreTestingPlanName(const Aws::String& value) { m_restoreTestingPlanName = value; }

    /**
     * <p>Unique string that is the name of the restore testing plan.</p> <p>The name
     * cannot be changed after creation. The name consists of only alphanumeric
     * characters and underscores. Maximum length is 50.</p>
     */
    inline void SetRestoreTestingPlanName(Aws::String&& value) { m_restoreTestingPlanName = std::move(value); }

    /**
     * <p>Unique string that is the name of the restore testing plan.</p> <p>The name
     * cannot be changed after creation. The name consists of only alphanumeric
     * characters and underscores. Maximum length is 50.</p>
     */
    inline void SetRestoreTestingPlanName(const char* value) { m_restoreTestingPlanName.assign(value); }

    /**
     * <p>Unique string that is the name of the restore testing plan.</p> <p>The name
     * cannot be changed after creation. The name consists of only alphanumeric
     * characters and underscores. Maximum length is 50.</p>
     */
    inline CreateRestoreTestingSelectionResult& WithRestoreTestingPlanName(const Aws::String& value) { SetRestoreTestingPlanName(value); return *this;}

    /**
     * <p>Unique string that is the name of the restore testing plan.</p> <p>The name
     * cannot be changed after creation. The name consists of only alphanumeric
     * characters and underscores. Maximum length is 50.</p>
     */
    inline CreateRestoreTestingSelectionResult& WithRestoreTestingPlanName(Aws::String&& value) { SetRestoreTestingPlanName(std::move(value)); return *this;}

    /**
     * <p>Unique string that is the name of the restore testing plan.</p> <p>The name
     * cannot be changed after creation. The name consists of only alphanumeric
     * characters and underscores. Maximum length is 50.</p>
     */
    inline CreateRestoreTestingSelectionResult& WithRestoreTestingPlanName(const char* value) { SetRestoreTestingPlanName(value); return *this;}


    /**
     * <p>This is the unique name of the restore testing selection that belongs to the
     * related restore testing plan.</p>
     */
    inline const Aws::String& GetRestoreTestingSelectionName() const{ return m_restoreTestingSelectionName; }

    /**
     * <p>This is the unique name of the restore testing selection that belongs to the
     * related restore testing plan.</p>
     */
    inline void SetRestoreTestingSelectionName(const Aws::String& value) { m_restoreTestingSelectionName = value; }

    /**
     * <p>This is the unique name of the restore testing selection that belongs to the
     * related restore testing plan.</p>
     */
    inline void SetRestoreTestingSelectionName(Aws::String&& value) { m_restoreTestingSelectionName = std::move(value); }

    /**
     * <p>This is the unique name of the restore testing selection that belongs to the
     * related restore testing plan.</p>
     */
    inline void SetRestoreTestingSelectionName(const char* value) { m_restoreTestingSelectionName.assign(value); }

    /**
     * <p>This is the unique name of the restore testing selection that belongs to the
     * related restore testing plan.</p>
     */
    inline CreateRestoreTestingSelectionResult& WithRestoreTestingSelectionName(const Aws::String& value) { SetRestoreTestingSelectionName(value); return *this;}

    /**
     * <p>This is the unique name of the restore testing selection that belongs to the
     * related restore testing plan.</p>
     */
    inline CreateRestoreTestingSelectionResult& WithRestoreTestingSelectionName(Aws::String&& value) { SetRestoreTestingSelectionName(std::move(value)); return *this;}

    /**
     * <p>This is the unique name of the restore testing selection that belongs to the
     * related restore testing plan.</p>
     */
    inline CreateRestoreTestingSelectionResult& WithRestoreTestingSelectionName(const char* value) { SetRestoreTestingSelectionName(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateRestoreTestingSelectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateRestoreTestingSelectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateRestoreTestingSelectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

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
