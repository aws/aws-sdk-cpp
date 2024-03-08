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
  class CreateRestoreTestingPlanResult
  {
  public:
    AWS_BACKUP_API CreateRestoreTestingPlanResult();
    AWS_BACKUP_API CreateRestoreTestingPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API CreateRestoreTestingPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The date and time a restore testing plan was created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time a restore testing plan was created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087AM.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The date and time a restore testing plan was created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087AM.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The date and time a restore testing plan was created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087AM.</p>
     */
    inline CreateRestoreTestingPlanResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time a restore testing plan was created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087AM.</p>
     */
    inline CreateRestoreTestingPlanResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies the created restore
     * testing plan.</p>
     */
    inline const Aws::String& GetRestoreTestingPlanArn() const{ return m_restoreTestingPlanArn; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies the created restore
     * testing plan.</p>
     */
    inline void SetRestoreTestingPlanArn(const Aws::String& value) { m_restoreTestingPlanArn = value; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies the created restore
     * testing plan.</p>
     */
    inline void SetRestoreTestingPlanArn(Aws::String&& value) { m_restoreTestingPlanArn = std::move(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies the created restore
     * testing plan.</p>
     */
    inline void SetRestoreTestingPlanArn(const char* value) { m_restoreTestingPlanArn.assign(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies the created restore
     * testing plan.</p>
     */
    inline CreateRestoreTestingPlanResult& WithRestoreTestingPlanArn(const Aws::String& value) { SetRestoreTestingPlanArn(value); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies the created restore
     * testing plan.</p>
     */
    inline CreateRestoreTestingPlanResult& WithRestoreTestingPlanArn(Aws::String&& value) { SetRestoreTestingPlanArn(std::move(value)); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies the created restore
     * testing plan.</p>
     */
    inline CreateRestoreTestingPlanResult& WithRestoreTestingPlanArn(const char* value) { SetRestoreTestingPlanArn(value); return *this;}


    /**
     * <p>This unique string is the name of the restore testing plan.</p> <p>The name
     * cannot be changed after creation. The name consists of only alphanumeric
     * characters and underscores. Maximum length is 50.</p>
     */
    inline const Aws::String& GetRestoreTestingPlanName() const{ return m_restoreTestingPlanName; }

    /**
     * <p>This unique string is the name of the restore testing plan.</p> <p>The name
     * cannot be changed after creation. The name consists of only alphanumeric
     * characters and underscores. Maximum length is 50.</p>
     */
    inline void SetRestoreTestingPlanName(const Aws::String& value) { m_restoreTestingPlanName = value; }

    /**
     * <p>This unique string is the name of the restore testing plan.</p> <p>The name
     * cannot be changed after creation. The name consists of only alphanumeric
     * characters and underscores. Maximum length is 50.</p>
     */
    inline void SetRestoreTestingPlanName(Aws::String&& value) { m_restoreTestingPlanName = std::move(value); }

    /**
     * <p>This unique string is the name of the restore testing plan.</p> <p>The name
     * cannot be changed after creation. The name consists of only alphanumeric
     * characters and underscores. Maximum length is 50.</p>
     */
    inline void SetRestoreTestingPlanName(const char* value) { m_restoreTestingPlanName.assign(value); }

    /**
     * <p>This unique string is the name of the restore testing plan.</p> <p>The name
     * cannot be changed after creation. The name consists of only alphanumeric
     * characters and underscores. Maximum length is 50.</p>
     */
    inline CreateRestoreTestingPlanResult& WithRestoreTestingPlanName(const Aws::String& value) { SetRestoreTestingPlanName(value); return *this;}

    /**
     * <p>This unique string is the name of the restore testing plan.</p> <p>The name
     * cannot be changed after creation. The name consists of only alphanumeric
     * characters and underscores. Maximum length is 50.</p>
     */
    inline CreateRestoreTestingPlanResult& WithRestoreTestingPlanName(Aws::String&& value) { SetRestoreTestingPlanName(std::move(value)); return *this;}

    /**
     * <p>This unique string is the name of the restore testing plan.</p> <p>The name
     * cannot be changed after creation. The name consists of only alphanumeric
     * characters and underscores. Maximum length is 50.</p>
     */
    inline CreateRestoreTestingPlanResult& WithRestoreTestingPlanName(const char* value) { SetRestoreTestingPlanName(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateRestoreTestingPlanResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateRestoreTestingPlanResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateRestoreTestingPlanResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_restoreTestingPlanArn;

    Aws::String m_restoreTestingPlanName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
