/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/FileCache.h>
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
  class UpdateFileCacheResult
  {
  public:
    AWS_FSX_API UpdateFileCacheResult() = default;
    AWS_FSX_API UpdateFileCacheResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API UpdateFileCacheResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A description of the cache that was updated.</p>
     */
    inline const FileCache& GetFileCache() const { return m_fileCache; }
    template<typename FileCacheT = FileCache>
    void SetFileCache(FileCacheT&& value) { m_fileCacheHasBeenSet = true; m_fileCache = std::forward<FileCacheT>(value); }
    template<typename FileCacheT = FileCache>
    UpdateFileCacheResult& WithFileCache(FileCacheT&& value) { SetFileCache(std::forward<FileCacheT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateFileCacheResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    FileCache m_fileCache;
    bool m_fileCacheHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
