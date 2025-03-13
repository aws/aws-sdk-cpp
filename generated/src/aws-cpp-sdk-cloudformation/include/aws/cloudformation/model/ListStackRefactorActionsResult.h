/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/StackRefactorAction.h>
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
  class ListStackRefactorActionsResult
  {
  public:
    AWS_CLOUDFORMATION_API ListStackRefactorActionsResult() = default;
    AWS_CLOUDFORMATION_API ListStackRefactorActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API ListStackRefactorActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The stack refactor actions.</p>
     */
    inline const Aws::Vector<StackRefactorAction>& GetStackRefactorActions() const { return m_stackRefactorActions; }
    template<typename StackRefactorActionsT = Aws::Vector<StackRefactorAction>>
    void SetStackRefactorActions(StackRefactorActionsT&& value) { m_stackRefactorActionsHasBeenSet = true; m_stackRefactorActions = std::forward<StackRefactorActionsT>(value); }
    template<typename StackRefactorActionsT = Aws::Vector<StackRefactorAction>>
    ListStackRefactorActionsResult& WithStackRefactorActions(StackRefactorActionsT&& value) { SetStackRefactorActions(std::forward<StackRefactorActionsT>(value)); return *this;}
    template<typename StackRefactorActionsT = StackRefactorAction>
    ListStackRefactorActionsResult& AddStackRefactorActions(StackRefactorActionsT&& value) { m_stackRefactorActionsHasBeenSet = true; m_stackRefactorActions.emplace_back(std::forward<StackRefactorActionsT>(value)); return *this; }
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
    ListStackRefactorActionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ListStackRefactorActionsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<StackRefactorAction> m_stackRefactorActions;
    bool m_stackRefactorActionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
