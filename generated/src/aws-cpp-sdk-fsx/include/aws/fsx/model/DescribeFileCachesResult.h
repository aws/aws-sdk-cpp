/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/FileCache.h>
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
  class DescribeFileCachesResult
  {
  public:
    AWS_FSX_API DescribeFileCachesResult() = default;
    AWS_FSX_API DescribeFileCachesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API DescribeFileCachesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The response object for the <code>DescribeFileCaches</code> operation.</p>
     */
    inline const Aws::Vector<FileCache>& GetFileCaches() const { return m_fileCaches; }
    template<typename FileCachesT = Aws::Vector<FileCache>>
    void SetFileCaches(FileCachesT&& value) { m_fileCachesHasBeenSet = true; m_fileCaches = std::forward<FileCachesT>(value); }
    template<typename FileCachesT = Aws::Vector<FileCache>>
    DescribeFileCachesResult& WithFileCaches(FileCachesT&& value) { SetFileCaches(std::forward<FileCachesT>(value)); return *this;}
    template<typename FileCachesT = FileCache>
    DescribeFileCachesResult& AddFileCaches(FileCachesT&& value) { m_fileCachesHasBeenSet = true; m_fileCaches.emplace_back(std::forward<FileCachesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeFileCachesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeFileCachesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FileCache> m_fileCaches;
    bool m_fileCachesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
