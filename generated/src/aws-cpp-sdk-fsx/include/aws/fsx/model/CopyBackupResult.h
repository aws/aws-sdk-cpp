/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/Backup.h>
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
namespace FSx
{
namespace Model
{
  class CopyBackupResult
  {
  public:
    AWS_FSX_API CopyBackupResult();
    AWS_FSX_API CopyBackupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API CopyBackupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Backup& GetBackup() const{ return m_backup; }

    
    inline void SetBackup(const Backup& value) { m_backup = value; }

    
    inline void SetBackup(Backup&& value) { m_backup = std::move(value); }

    
    inline CopyBackupResult& WithBackup(const Backup& value) { SetBackup(value); return *this;}

    
    inline CopyBackupResult& WithBackup(Backup&& value) { SetBackup(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CopyBackupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CopyBackupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CopyBackupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Backup m_backup;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
