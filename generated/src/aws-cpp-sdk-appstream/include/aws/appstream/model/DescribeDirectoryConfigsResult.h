/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/DirectoryConfig.h>
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
namespace AppStream
{
namespace Model
{
  class DescribeDirectoryConfigsResult
  {
  public:
    AWS_APPSTREAM_API DescribeDirectoryConfigsResult() = default;
    AWS_APPSTREAM_API DescribeDirectoryConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API DescribeDirectoryConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the directory configurations. Note that although the
     * response syntax in this topic includes the account password, this password is
     * not returned in the actual response. </p>
     */
    inline const Aws::Vector<DirectoryConfig>& GetDirectoryConfigs() const { return m_directoryConfigs; }
    template<typename DirectoryConfigsT = Aws::Vector<DirectoryConfig>>
    void SetDirectoryConfigs(DirectoryConfigsT&& value) { m_directoryConfigsHasBeenSet = true; m_directoryConfigs = std::forward<DirectoryConfigsT>(value); }
    template<typename DirectoryConfigsT = Aws::Vector<DirectoryConfig>>
    DescribeDirectoryConfigsResult& WithDirectoryConfigs(DirectoryConfigsT&& value) { SetDirectoryConfigs(std::forward<DirectoryConfigsT>(value)); return *this;}
    template<typename DirectoryConfigsT = DirectoryConfig>
    DescribeDirectoryConfigsResult& AddDirectoryConfigs(DirectoryConfigsT&& value) { m_directoryConfigsHasBeenSet = true; m_directoryConfigs.emplace_back(std::forward<DirectoryConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeDirectoryConfigsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDirectoryConfigsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DirectoryConfig> m_directoryConfigs;
    bool m_directoryConfigsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
