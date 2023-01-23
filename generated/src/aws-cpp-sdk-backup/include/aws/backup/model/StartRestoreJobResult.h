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
  class StartRestoreJobResult
  {
  public:
    AWS_BACKUP_API StartRestoreJobResult();
    AWS_BACKUP_API StartRestoreJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API StartRestoreJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
