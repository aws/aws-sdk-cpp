/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/Backup.h>
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
namespace FSx
{
namespace Model
{
  /**
   * <p>The response object for the <code>CreateBackup</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateBackupResponse">AWS
   * API Reference</a></p>
   */
  class CreateBackupResult
  {
  public:
    AWS_FSX_API CreateBackupResult();
    AWS_FSX_API CreateBackupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API CreateBackupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A description of the backup.</p>
     */
    inline const Backup& GetBackup() const{ return m_backup; }

    /**
     * <p>A description of the backup.</p>
     */
    inline void SetBackup(const Backup& value) { m_backup = value; }

    /**
     * <p>A description of the backup.</p>
     */
    inline void SetBackup(Backup&& value) { m_backup = std::move(value); }

    /**
     * <p>A description of the backup.</p>
     */
    inline CreateBackupResult& WithBackup(const Backup& value) { SetBackup(value); return *this;}

    /**
     * <p>A description of the backup.</p>
     */
    inline CreateBackupResult& WithBackup(Backup&& value) { SetBackup(std::move(value)); return *this;}

  private:

    Backup m_backup;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
