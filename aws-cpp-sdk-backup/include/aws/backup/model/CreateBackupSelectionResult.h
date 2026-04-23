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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class AWS_BACKUP_API CreateBackupSelectionResult
  {
  public:
    CreateBackupSelectionResult();
    CreateBackupSelectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateBackupSelectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Uniquely identifies the body of a request to assign a set of resources to a
     * backup plan.</p>
     */
    inline const Aws::String& GetSelectionId() const{ return m_selectionId; }

    /**
     * <p>Uniquely identifies the body of a request to assign a set of resources to a
     * backup plan.</p>
     */
    inline void SetSelectionId(const Aws::String& value) { m_selectionId = value; }

    /**
     * <p>Uniquely identifies the body of a request to assign a set of resources to a
     * backup plan.</p>
     */
    inline void SetSelectionId(Aws::String&& value) { m_selectionId = std::move(value); }

    /**
     * <p>Uniquely identifies the body of a request to assign a set of resources to a
     * backup plan.</p>
     */
    inline void SetSelectionId(const char* value) { m_selectionId.assign(value); }

    /**
     * <p>Uniquely identifies the body of a request to assign a set of resources to a
     * backup plan.</p>
     */
    inline CreateBackupSelectionResult& WithSelectionId(const Aws::String& value) { SetSelectionId(value); return *this;}

    /**
     * <p>Uniquely identifies the body of a request to assign a set of resources to a
     * backup plan.</p>
     */
    inline CreateBackupSelectionResult& WithSelectionId(Aws::String&& value) { SetSelectionId(std::move(value)); return *this;}

    /**
     * <p>Uniquely identifies the body of a request to assign a set of resources to a
     * backup plan.</p>
     */
    inline CreateBackupSelectionResult& WithSelectionId(const char* value) { SetSelectionId(value); return *this;}


    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline const Aws::String& GetBackupPlanId() const{ return m_backupPlanId; }

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline void SetBackupPlanId(const Aws::String& value) { m_backupPlanId = value; }

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline void SetBackupPlanId(Aws::String&& value) { m_backupPlanId = std::move(value); }

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline void SetBackupPlanId(const char* value) { m_backupPlanId.assign(value); }

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline CreateBackupSelectionResult& WithBackupPlanId(const Aws::String& value) { SetBackupPlanId(value); return *this;}

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline CreateBackupSelectionResult& WithBackupPlanId(Aws::String&& value) { SetBackupPlanId(std::move(value)); return *this;}

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline CreateBackupSelectionResult& WithBackupPlanId(const char* value) { SetBackupPlanId(value); return *this;}


    /**
     * <p>The date and time a backup selection is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time a backup selection is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    /**
     * <p>The date and time a backup selection is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }

    /**
     * <p>The date and time a backup selection is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline CreateBackupSelectionResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time a backup selection is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline CreateBackupSelectionResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}

  private:

    Aws::String m_selectionId;

    Aws::String m_backupPlanId;

    Aws::Utils::DateTime m_creationDate;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
