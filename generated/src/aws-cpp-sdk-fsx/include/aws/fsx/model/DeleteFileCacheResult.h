﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/FileCacheLifecycle.h>
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
  class DeleteFileCacheResult
  {
  public:
    AWS_FSX_API DeleteFileCacheResult();
    AWS_FSX_API DeleteFileCacheResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API DeleteFileCacheResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the cache that's being deleted.</p>
     */
    inline const Aws::String& GetFileCacheId() const{ return m_fileCacheId; }
    inline void SetFileCacheId(const Aws::String& value) { m_fileCacheId = value; }
    inline void SetFileCacheId(Aws::String&& value) { m_fileCacheId = std::move(value); }
    inline void SetFileCacheId(const char* value) { m_fileCacheId.assign(value); }
    inline DeleteFileCacheResult& WithFileCacheId(const Aws::String& value) { SetFileCacheId(value); return *this;}
    inline DeleteFileCacheResult& WithFileCacheId(Aws::String&& value) { SetFileCacheId(std::move(value)); return *this;}
    inline DeleteFileCacheResult& WithFileCacheId(const char* value) { SetFileCacheId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cache lifecycle for the deletion request. If the
     * <code>DeleteFileCache</code> operation is successful, this status is
     * <code>DELETING</code>.</p>
     */
    inline const FileCacheLifecycle& GetLifecycle() const{ return m_lifecycle; }
    inline void SetLifecycle(const FileCacheLifecycle& value) { m_lifecycle = value; }
    inline void SetLifecycle(FileCacheLifecycle&& value) { m_lifecycle = std::move(value); }
    inline DeleteFileCacheResult& WithLifecycle(const FileCacheLifecycle& value) { SetLifecycle(value); return *this;}
    inline DeleteFileCacheResult& WithLifecycle(FileCacheLifecycle&& value) { SetLifecycle(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteFileCacheResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteFileCacheResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteFileCacheResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_fileCacheId;

    FileCacheLifecycle m_lifecycle;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
