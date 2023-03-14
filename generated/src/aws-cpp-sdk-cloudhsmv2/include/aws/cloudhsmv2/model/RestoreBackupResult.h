/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/cloudhsmv2/model/Backup.h>
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
namespace CloudHSMV2
{
namespace Model
{
  class RestoreBackupResult
  {
  public:
    AWS_CLOUDHSMV2_API RestoreBackupResult();
    AWS_CLOUDHSMV2_API RestoreBackupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDHSMV2_API RestoreBackupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information on the <code>Backup</code> object created.</p>
     */
    inline const Backup& GetBackup() const{ return m_backup; }

    /**
     * <p>Information on the <code>Backup</code> object created.</p>
     */
    inline void SetBackup(const Backup& value) { m_backup = value; }

    /**
     * <p>Information on the <code>Backup</code> object created.</p>
     */
    inline void SetBackup(Backup&& value) { m_backup = std::move(value); }

    /**
     * <p>Information on the <code>Backup</code> object created.</p>
     */
    inline RestoreBackupResult& WithBackup(const Backup& value) { SetBackup(value); return *this;}

    /**
     * <p>Information on the <code>Backup</code> object created.</p>
     */
    inline RestoreBackupResult& WithBackup(Backup&& value) { SetBackup(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline RestoreBackupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline RestoreBackupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline RestoreBackupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Backup m_backup;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
