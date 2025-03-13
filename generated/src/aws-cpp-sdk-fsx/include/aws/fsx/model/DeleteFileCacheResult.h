/**
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
    AWS_FSX_API DeleteFileCacheResult() = default;
    AWS_FSX_API DeleteFileCacheResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API DeleteFileCacheResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the cache that's being deleted.</p>
     */
    inline const Aws::String& GetFileCacheId() const { return m_fileCacheId; }
    template<typename FileCacheIdT = Aws::String>
    void SetFileCacheId(FileCacheIdT&& value) { m_fileCacheIdHasBeenSet = true; m_fileCacheId = std::forward<FileCacheIdT>(value); }
    template<typename FileCacheIdT = Aws::String>
    DeleteFileCacheResult& WithFileCacheId(FileCacheIdT&& value) { SetFileCacheId(std::forward<FileCacheIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cache lifecycle for the deletion request. If the
     * <code>DeleteFileCache</code> operation is successful, this status is
     * <code>DELETING</code>.</p>
     */
    inline FileCacheLifecycle GetLifecycle() const { return m_lifecycle; }
    inline void SetLifecycle(FileCacheLifecycle value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }
    inline DeleteFileCacheResult& WithLifecycle(FileCacheLifecycle value) { SetLifecycle(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteFileCacheResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fileCacheId;
    bool m_fileCacheIdHasBeenSet = false;

    FileCacheLifecycle m_lifecycle{FileCacheLifecycle::NOT_SET};
    bool m_lifecycleHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
