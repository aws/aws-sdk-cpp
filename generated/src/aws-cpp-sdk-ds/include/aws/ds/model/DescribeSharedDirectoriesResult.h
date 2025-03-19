/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/SharedDirectory.h>
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
namespace DirectoryService
{
namespace Model
{
  class DescribeSharedDirectoriesResult
  {
  public:
    AWS_DIRECTORYSERVICE_API DescribeSharedDirectoriesResult() = default;
    AWS_DIRECTORYSERVICE_API DescribeSharedDirectoriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API DescribeSharedDirectoriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of all shared directories in your account.</p>
     */
    inline const Aws::Vector<SharedDirectory>& GetSharedDirectories() const { return m_sharedDirectories; }
    template<typename SharedDirectoriesT = Aws::Vector<SharedDirectory>>
    void SetSharedDirectories(SharedDirectoriesT&& value) { m_sharedDirectoriesHasBeenSet = true; m_sharedDirectories = std::forward<SharedDirectoriesT>(value); }
    template<typename SharedDirectoriesT = Aws::Vector<SharedDirectory>>
    DescribeSharedDirectoriesResult& WithSharedDirectories(SharedDirectoriesT&& value) { SetSharedDirectories(std::forward<SharedDirectoriesT>(value)); return *this;}
    template<typename SharedDirectoriesT = SharedDirectory>
    DescribeSharedDirectoriesResult& AddSharedDirectories(SharedDirectoriesT&& value) { m_sharedDirectoriesHasBeenSet = true; m_sharedDirectories.emplace_back(std::forward<SharedDirectoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If not null, token that indicates that more results are available. Pass this
     * value for the <code>NextToken</code> parameter in a subsequent call to
     * <a>DescribeSharedDirectories</a> to retrieve the next set of items.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeSharedDirectoriesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeSharedDirectoriesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SharedDirectory> m_sharedDirectories;
    bool m_sharedDirectoriesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
