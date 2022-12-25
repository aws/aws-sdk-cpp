/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/opsworkscm/model/Backup.h>
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
namespace OpsWorksCM
{
namespace Model
{
  class CreateBackupResult
  {
  public:
    AWS_OPSWORKSCM_API CreateBackupResult();
    AWS_OPSWORKSCM_API CreateBackupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKSCM_API CreateBackupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Backup created by request.</p>
     */
    inline const Backup& GetBackup() const{ return m_backup; }

    /**
     * <p>Backup created by request.</p>
     */
    inline void SetBackup(const Backup& value) { m_backup = value; }

    /**
     * <p>Backup created by request.</p>
     */
    inline void SetBackup(Backup&& value) { m_backup = std::move(value); }

    /**
     * <p>Backup created by request.</p>
     */
    inline CreateBackupResult& WithBackup(const Backup& value) { SetBackup(value); return *this;}

    /**
     * <p>Backup created by request.</p>
     */
    inline CreateBackupResult& WithBackup(Backup&& value) { SetBackup(std::move(value)); return *this;}

  private:

    Backup m_backup;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
