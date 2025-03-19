/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/EntityRecognizerSummary.h>
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
namespace Comprehend
{
namespace Model
{
  class ListEntityRecognizerSummariesResult
  {
  public:
    AWS_COMPREHEND_API ListEntityRecognizerSummariesResult() = default;
    AWS_COMPREHEND_API ListEntityRecognizerSummariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API ListEntityRecognizerSummariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list entity recognizer summaries.</p>
     */
    inline const Aws::Vector<EntityRecognizerSummary>& GetEntityRecognizerSummariesList() const { return m_entityRecognizerSummariesList; }
    template<typename EntityRecognizerSummariesListT = Aws::Vector<EntityRecognizerSummary>>
    void SetEntityRecognizerSummariesList(EntityRecognizerSummariesListT&& value) { m_entityRecognizerSummariesListHasBeenSet = true; m_entityRecognizerSummariesList = std::forward<EntityRecognizerSummariesListT>(value); }
    template<typename EntityRecognizerSummariesListT = Aws::Vector<EntityRecognizerSummary>>
    ListEntityRecognizerSummariesResult& WithEntityRecognizerSummariesList(EntityRecognizerSummariesListT&& value) { SetEntityRecognizerSummariesList(std::forward<EntityRecognizerSummariesListT>(value)); return *this;}
    template<typename EntityRecognizerSummariesListT = EntityRecognizerSummary>
    ListEntityRecognizerSummariesResult& AddEntityRecognizerSummariesList(EntityRecognizerSummariesListT&& value) { m_entityRecognizerSummariesListHasBeenSet = true; m_entityRecognizerSummariesList.emplace_back(std::forward<EntityRecognizerSummariesListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEntityRecognizerSummariesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEntityRecognizerSummariesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EntityRecognizerSummary> m_entityRecognizerSummariesList;
    bool m_entityRecognizerSummariesListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
