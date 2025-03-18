/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/StackRefactorSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudFormation
{
namespace Model
{
  class ListStackRefactorsResult
  {
  public:
    AWS_CLOUDFORMATION_API ListStackRefactorsResult() = default;
    AWS_CLOUDFORMATION_API ListStackRefactorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API ListStackRefactorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Provides a summary of a stack refactor, including the following:</p> <ul>
     * <li> <p> <code>StackRefactorId</code> </p> </li> <li> <p> <code>Status</code>
     * </p> </li> <li> <p> <code>StatusReason</code> </p> </li> <li> <p>
     * <code>ExecutionStatus</code> </p> </li> <li> <p>
     * <code>ExecutionStatusReason</code> </p> </li> <li> <p> <code>Description</code>
     * </p> </li> </ul>
     */
    inline const Aws::Vector<StackRefactorSummary>& GetStackRefactorSummaries() const { return m_stackRefactorSummaries; }
    template<typename StackRefactorSummariesT = Aws::Vector<StackRefactorSummary>>
    void SetStackRefactorSummaries(StackRefactorSummariesT&& value) { m_stackRefactorSummariesHasBeenSet = true; m_stackRefactorSummaries = std::forward<StackRefactorSummariesT>(value); }
    template<typename StackRefactorSummariesT = Aws::Vector<StackRefactorSummary>>
    ListStackRefactorsResult& WithStackRefactorSummaries(StackRefactorSummariesT&& value) { SetStackRefactorSummaries(std::forward<StackRefactorSummariesT>(value)); return *this;}
    template<typename StackRefactorSummariesT = StackRefactorSummary>
    ListStackRefactorsResult& AddStackRefactorSummaries(StackRefactorSummariesT&& value) { m_stackRefactorSummariesHasBeenSet = true; m_stackRefactorSummaries.emplace_back(std::forward<StackRefactorSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the request doesn't return all the remaining results,
     * <code>NextToken</code> is set to a token. To retrieve the next set of results,
     * call this action again and assign that token to the request object's
     * <code>NextToken</code> parameter. If the request returns all results,
     * <code>NextToken</code> is set to <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListStackRefactorsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ListStackRefactorsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<StackRefactorSummary> m_stackRefactorSummaries;
    bool m_stackRefactorSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
