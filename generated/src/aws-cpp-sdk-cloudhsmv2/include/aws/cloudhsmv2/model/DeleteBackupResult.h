/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/cloudhsmv2/model/Backup.h>
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
namespace CloudHSMV2
{
namespace Model
{
  class DeleteBackupResult
  {
  public:
    AWS_CLOUDHSMV2_API DeleteBackupResult();
    AWS_CLOUDHSMV2_API DeleteBackupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDHSMV2_API DeleteBackupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information on the <code>Backup</code> object deleted.</p>
     */
    inline const Backup& GetBackup() const{ return m_backup; }

    /**
     * <p>Information on the <code>Backup</code> object deleted.</p>
     */
    inline void SetBackup(const Backup& value) { m_backup = value; }

    /**
     * <p>Information on the <code>Backup</code> object deleted.</p>
     */
    inline void SetBackup(Backup&& value) { m_backup = std::move(value); }

    /**
     * <p>Information on the <code>Backup</code> object deleted.</p>
     */
    inline DeleteBackupResult& WithBackup(const Backup& value) { SetBackup(value); return *this;}

    /**
     * <p>Information on the <code>Backup</code> object deleted.</p>
     */
    inline DeleteBackupResult& WithBackup(Backup&& value) { SetBackup(std::move(value)); return *this;}

  private:

    Backup m_backup;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
