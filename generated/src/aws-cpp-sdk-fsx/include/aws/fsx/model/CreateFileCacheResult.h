/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/FileCacheCreating.h>
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
  class CreateFileCacheResult
  {
  public:
    AWS_FSX_API CreateFileCacheResult();
    AWS_FSX_API CreateFileCacheResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API CreateFileCacheResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A description of the cache that was created.</p>
     */
    inline const FileCacheCreating& GetFileCache() const{ return m_fileCache; }

    /**
     * <p>A description of the cache that was created.</p>
     */
    inline void SetFileCache(const FileCacheCreating& value) { m_fileCache = value; }

    /**
     * <p>A description of the cache that was created.</p>
     */
    inline void SetFileCache(FileCacheCreating&& value) { m_fileCache = std::move(value); }

    /**
     * <p>A description of the cache that was created.</p>
     */
    inline CreateFileCacheResult& WithFileCache(const FileCacheCreating& value) { SetFileCache(value); return *this;}

    /**
     * <p>A description of the cache that was created.</p>
     */
    inline CreateFileCacheResult& WithFileCache(FileCacheCreating&& value) { SetFileCache(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateFileCacheResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateFileCacheResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateFileCacheResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    FileCacheCreating m_fileCache;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
