/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/model/ListHookResultsTargetType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/HookResultSummary.h>
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
  class ListHookResultsResult
  {
  public:
    AWS_CLOUDFORMATION_API ListHookResultsResult() = default;
    AWS_CLOUDFORMATION_API ListHookResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API ListHookResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The target type.</p>
     */
    inline ListHookResultsTargetType GetTargetType() const { return m_targetType; }
    inline void SetTargetType(ListHookResultsTargetType value) { m_targetTypeHasBeenSet = true; m_targetType = value; }
    inline ListHookResultsResult& WithTargetType(ListHookResultsTargetType value) { SetTargetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Hook invocation target.</p>
     */
    inline const Aws::String& GetTargetId() const { return m_targetId; }
    template<typename TargetIdT = Aws::String>
    void SetTargetId(TargetIdT&& value) { m_targetIdHasBeenSet = true; m_targetId = std::forward<TargetIdT>(value); }
    template<typename TargetIdT = Aws::String>
    ListHookResultsResult& WithTargetId(TargetIdT&& value) { SetTargetId(std::forward<TargetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>HookResultSummary</code> structures that provides the status
     * and Hook status reason for each Hook invocation for the specified target.</p>
     */
    inline const Aws::Vector<HookResultSummary>& GetHookResults() const { return m_hookResults; }
    template<typename HookResultsT = Aws::Vector<HookResultSummary>>
    void SetHookResults(HookResultsT&& value) { m_hookResultsHasBeenSet = true; m_hookResults = std::forward<HookResultsT>(value); }
    template<typename HookResultsT = Aws::Vector<HookResultSummary>>
    ListHookResultsResult& WithHookResults(HookResultsT&& value) { SetHookResults(std::forward<HookResultsT>(value)); return *this;}
    template<typename HookResultsT = HookResultSummary>
    ListHookResultsResult& AddHookResults(HookResultsT&& value) { m_hookResultsHasBeenSet = true; m_hookResults.emplace_back(std::forward<HookResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Pagination token, <code>null</code> or empty if no more results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListHookResultsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ListHookResultsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    ListHookResultsTargetType m_targetType{ListHookResultsTargetType::NOT_SET};
    bool m_targetTypeHasBeenSet = false;

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet = false;

    Aws::Vector<HookResultSummary> m_hookResults;
    bool m_hookResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
