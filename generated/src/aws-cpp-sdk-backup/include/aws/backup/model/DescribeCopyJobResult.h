/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/CopyJob.h>
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
  class DescribeCopyJobResult
  {
  public:
    AWS_BACKUP_API DescribeCopyJobResult();
    AWS_BACKUP_API DescribeCopyJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API DescribeCopyJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains detailed information about a copy job.</p>
     */
    inline const CopyJob& GetCopyJob() const{ return m_copyJob; }

    /**
     * <p>Contains detailed information about a copy job.</p>
     */
    inline void SetCopyJob(const CopyJob& value) { m_copyJob = value; }

    /**
     * <p>Contains detailed information about a copy job.</p>
     */
    inline void SetCopyJob(CopyJob&& value) { m_copyJob = std::move(value); }

    /**
     * <p>Contains detailed information about a copy job.</p>
     */
    inline DescribeCopyJobResult& WithCopyJob(const CopyJob& value) { SetCopyJob(value); return *this;}

    /**
     * <p>Contains detailed information about a copy job.</p>
     */
    inline DescribeCopyJobResult& WithCopyJob(CopyJob&& value) { SetCopyJob(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeCopyJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeCopyJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeCopyJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    CopyJob m_copyJob;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
