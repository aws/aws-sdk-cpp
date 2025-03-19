/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/SentimentDetectionJobProperties.h>
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
  class ListSentimentDetectionJobsResult
  {
  public:
    AWS_COMPREHEND_API ListSentimentDetectionJobsResult() = default;
    AWS_COMPREHEND_API ListSentimentDetectionJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API ListSentimentDetectionJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline const Aws::Vector<SentimentDetectionJobProperties>& GetSentimentDetectionJobPropertiesList() const { return m_sentimentDetectionJobPropertiesList; }
    template<typename SentimentDetectionJobPropertiesListT = Aws::Vector<SentimentDetectionJobProperties>>
    void SetSentimentDetectionJobPropertiesList(SentimentDetectionJobPropertiesListT&& value) { m_sentimentDetectionJobPropertiesListHasBeenSet = true; m_sentimentDetectionJobPropertiesList = std::forward<SentimentDetectionJobPropertiesListT>(value); }
    template<typename SentimentDetectionJobPropertiesListT = Aws::Vector<SentimentDetectionJobProperties>>
    ListSentimentDetectionJobsResult& WithSentimentDetectionJobPropertiesList(SentimentDetectionJobPropertiesListT&& value) { SetSentimentDetectionJobPropertiesList(std::forward<SentimentDetectionJobPropertiesListT>(value)); return *this;}
    template<typename SentimentDetectionJobPropertiesListT = SentimentDetectionJobProperties>
    ListSentimentDetectionJobsResult& AddSentimentDetectionJobPropertiesList(SentimentDetectionJobPropertiesListT&& value) { m_sentimentDetectionJobPropertiesListHasBeenSet = true; m_sentimentDetectionJobPropertiesList.emplace_back(std::forward<SentimentDetectionJobPropertiesListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSentimentDetectionJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSentimentDetectionJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SentimentDetectionJobProperties> m_sentimentDetectionJobPropertiesList;
    bool m_sentimentDetectionJobPropertiesListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
