/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/LifecyclePolicySummary.h>
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
namespace imagebuilder
{
namespace Model
{
  class ListLifecyclePoliciesResult
  {
  public:
    AWS_IMAGEBUILDER_API ListLifecyclePoliciesResult() = default;
    AWS_IMAGEBUILDER_API ListLifecyclePoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API ListLifecyclePoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of lifecycle policies in your Amazon Web Services account that meet
     * the criteria specified in the request.</p>
     */
    inline const Aws::Vector<LifecyclePolicySummary>& GetLifecyclePolicySummaryList() const { return m_lifecyclePolicySummaryList; }
    template<typename LifecyclePolicySummaryListT = Aws::Vector<LifecyclePolicySummary>>
    void SetLifecyclePolicySummaryList(LifecyclePolicySummaryListT&& value) { m_lifecyclePolicySummaryListHasBeenSet = true; m_lifecyclePolicySummaryList = std::forward<LifecyclePolicySummaryListT>(value); }
    template<typename LifecyclePolicySummaryListT = Aws::Vector<LifecyclePolicySummary>>
    ListLifecyclePoliciesResult& WithLifecyclePolicySummaryList(LifecyclePolicySummaryListT&& value) { SetLifecyclePolicySummaryList(std::forward<LifecyclePolicySummaryListT>(value)); return *this;}
    template<typename LifecyclePolicySummaryListT = LifecyclePolicySummary>
    ListLifecyclePoliciesResult& AddLifecyclePolicySummaryList(LifecyclePolicySummaryListT&& value) { m_lifecyclePolicySummaryListHasBeenSet = true; m_lifecyclePolicySummaryList.emplace_back(std::forward<LifecyclePolicySummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLifecyclePoliciesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListLifecyclePoliciesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LifecyclePolicySummary> m_lifecyclePolicySummaryList;
    bool m_lifecyclePolicySummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
