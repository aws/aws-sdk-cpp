/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/ComponentSummary.h>
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
  class ListComponentBuildVersionsResult
  {
  public:
    AWS_IMAGEBUILDER_API ListComponentBuildVersionsResult() = default;
    AWS_IMAGEBUILDER_API ListComponentBuildVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API ListComponentBuildVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListComponentBuildVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of component summaries for the specified semantic version.</p>
     */
    inline const Aws::Vector<ComponentSummary>& GetComponentSummaryList() const { return m_componentSummaryList; }
    template<typename ComponentSummaryListT = Aws::Vector<ComponentSummary>>
    void SetComponentSummaryList(ComponentSummaryListT&& value) { m_componentSummaryListHasBeenSet = true; m_componentSummaryList = std::forward<ComponentSummaryListT>(value); }
    template<typename ComponentSummaryListT = Aws::Vector<ComponentSummary>>
    ListComponentBuildVersionsResult& WithComponentSummaryList(ComponentSummaryListT&& value) { SetComponentSummaryList(std::forward<ComponentSummaryListT>(value)); return *this;}
    template<typename ComponentSummaryListT = ComponentSummary>
    ListComponentBuildVersionsResult& AddComponentSummaryList(ComponentSummaryListT&& value) { m_componentSummaryListHasBeenSet = true; m_componentSummaryList.emplace_back(std::forward<ComponentSummaryListT>(value)); return *this; }
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
    ListComponentBuildVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::Vector<ComponentSummary> m_componentSummaryList;
    bool m_componentSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
