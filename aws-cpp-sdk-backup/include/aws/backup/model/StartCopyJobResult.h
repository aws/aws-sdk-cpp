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
  class AWS_BACKUP_API StartCopyJobResult
  {
  public:
    StartCopyJobResult();
    StartCopyJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartCopyJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Uniquely identifies a request to AWS Backup to copy a resource.</p>
     */
    inline const Aws::String& GetCopyJobId() const{ return m_copyJobId; }

    /**
     * <p>Uniquely identifies a request to AWS Backup to copy a resource.</p>
     */
    inline void SetCopyJobId(const Aws::String& value) { m_copyJobId = value; }

    /**
     * <p>Uniquely identifies a request to AWS Backup to copy a resource.</p>
     */
    inline void SetCopyJobId(Aws::String&& value) { m_copyJobId = std::move(value); }

    /**
     * <p>Uniquely identifies a request to AWS Backup to copy a resource.</p>
     */
    inline void SetCopyJobId(const char* value) { m_copyJobId.assign(value); }

    /**
     * <p>Uniquely identifies a request to AWS Backup to copy a resource.</p>
     */
    inline StartCopyJobResult& WithCopyJobId(const Aws::String& value) { SetCopyJobId(value); return *this;}

    /**
     * <p>Uniquely identifies a request to AWS Backup to copy a resource.</p>
     */
    inline StartCopyJobResult& WithCopyJobId(Aws::String&& value) { SetCopyJobId(std::move(value)); return *this;}

    /**
     * <p>Uniquely identifies a request to AWS Backup to copy a resource.</p>
     */
    inline StartCopyJobResult& WithCopyJobId(const char* value) { SetCopyJobId(value); return *this;}


    /**
     * <p>The date and time that a backup job is started, in Unix format and
     * Coordinated Universal Time (UTC). The value of CreationDate is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM. &gt;</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time that a backup job is started, in Unix format and
     * Coordinated Universal Time (UTC). The value of CreationDate is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM. &gt;</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    /**
     * <p>The date and time that a backup job is started, in Unix format and
     * Coordinated Universal Time (UTC). The value of CreationDate is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM. &gt;</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }

    /**
     * <p>The date and time that a backup job is started, in Unix format and
     * Coordinated Universal Time (UTC). The value of CreationDate is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM. &gt;</p>
     */
    inline StartCopyJobResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time that a backup job is started, in Unix format and
     * Coordinated Universal Time (UTC). The value of CreationDate is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM. &gt;</p>
     */
    inline StartCopyJobResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}

  private:

    Aws::String m_copyJobId;

    Aws::Utils::DateTime m_creationDate;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
