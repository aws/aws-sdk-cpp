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
  class AWS_BACKUP_API StartRestoreJobResult
  {
  public:
    StartRestoreJobResult();
    StartRestoreJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartRestoreJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Uniquely identifies the job that restores a recovery point.</p>
     */
    inline const Aws::String& GetRestoreJobId() const{ return m_restoreJobId; }

    /**
     * <p>Uniquely identifies the job that restores a recovery point.</p>
     */
    inline void SetRestoreJobId(const Aws::String& value) { m_restoreJobId = value; }

    /**
     * <p>Uniquely identifies the job that restores a recovery point.</p>
     */
    inline void SetRestoreJobId(Aws::String&& value) { m_restoreJobId = std::move(value); }

    /**
     * <p>Uniquely identifies the job that restores a recovery point.</p>
     */
    inline void SetRestoreJobId(const char* value) { m_restoreJobId.assign(value); }

    /**
     * <p>Uniquely identifies the job that restores a recovery point.</p>
     */
    inline StartRestoreJobResult& WithRestoreJobId(const Aws::String& value) { SetRestoreJobId(value); return *this;}

    /**
     * <p>Uniquely identifies the job that restores a recovery point.</p>
     */
    inline StartRestoreJobResult& WithRestoreJobId(Aws::String&& value) { SetRestoreJobId(std::move(value)); return *this;}

    /**
     * <p>Uniquely identifies the job that restores a recovery point.</p>
     */
    inline StartRestoreJobResult& WithRestoreJobId(const char* value) { SetRestoreJobId(value); return *this;}

  private:

    Aws::String m_restoreJobId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
