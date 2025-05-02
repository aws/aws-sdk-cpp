/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/DirectoryDescription.h>
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
  /**
   * <p>Contains the results of the <a>DescribeDirectories</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeDirectoriesResult">AWS
   * API Reference</a></p>
   */
  class DescribeDirectoriesResult
  {
  public:
    AWS_DIRECTORYSERVICE_API DescribeDirectoriesResult() = default;
    AWS_DIRECTORYSERVICE_API DescribeDirectoriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API DescribeDirectoriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of available <a>DirectoryDescription</a> objects that were
     * retrieved.</p> <p>It is possible that this list contains less than the number of
     * items specified in the <code>Limit</code> member of the request. This occurs if
     * there are less than the requested number of items left to retrieve, or if the
     * limitations of the operation have been exceeded.</p>
     */
    inline const Aws::Vector<DirectoryDescription>& GetDirectoryDescriptions() const { return m_directoryDescriptions; }
    template<typename DirectoryDescriptionsT = Aws::Vector<DirectoryDescription>>
    void SetDirectoryDescriptions(DirectoryDescriptionsT&& value) { m_directoryDescriptionsHasBeenSet = true; m_directoryDescriptions = std::forward<DirectoryDescriptionsT>(value); }
    template<typename DirectoryDescriptionsT = Aws::Vector<DirectoryDescription>>
    DescribeDirectoriesResult& WithDirectoryDescriptions(DirectoryDescriptionsT&& value) { SetDirectoryDescriptions(std::forward<DirectoryDescriptionsT>(value)); return *this;}
    template<typename DirectoryDescriptionsT = DirectoryDescription>
    DescribeDirectoriesResult& AddDirectoryDescriptions(DirectoryDescriptionsT&& value) { m_directoryDescriptionsHasBeenSet = true; m_directoryDescriptions.emplace_back(std::forward<DirectoryDescriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent call to
     * <a>DescribeDirectories</a> to retrieve the next set of items.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeDirectoriesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDirectoriesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DirectoryDescription> m_directoryDescriptions;
    bool m_directoryDescriptionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
