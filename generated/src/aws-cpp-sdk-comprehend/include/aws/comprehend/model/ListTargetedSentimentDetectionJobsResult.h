/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/TargetedSentimentDetectionJobProperties.h>
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
  class ListTargetedSentimentDetectionJobsResult
  {
  public:
    AWS_COMPREHEND_API ListTargetedSentimentDetectionJobsResult() = default;
    AWS_COMPREHEND_API ListTargetedSentimentDetectionJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API ListTargetedSentimentDetectionJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline const Aws::Vector<TargetedSentimentDetectionJobProperties>& GetTargetedSentimentDetectionJobPropertiesList() const { return m_targetedSentimentDetectionJobPropertiesList; }
    template<typename TargetedSentimentDetectionJobPropertiesListT = Aws::Vector<TargetedSentimentDetectionJobProperties>>
    void SetTargetedSentimentDetectionJobPropertiesList(TargetedSentimentDetectionJobPropertiesListT&& value) { m_targetedSentimentDetectionJobPropertiesListHasBeenSet = true; m_targetedSentimentDetectionJobPropertiesList = std::forward<TargetedSentimentDetectionJobPropertiesListT>(value); }
    template<typename TargetedSentimentDetectionJobPropertiesListT = Aws::Vector<TargetedSentimentDetectionJobProperties>>
    ListTargetedSentimentDetectionJobsResult& WithTargetedSentimentDetectionJobPropertiesList(TargetedSentimentDetectionJobPropertiesListT&& value) { SetTargetedSentimentDetectionJobPropertiesList(std::forward<TargetedSentimentDetectionJobPropertiesListT>(value)); return *this;}
    template<typename TargetedSentimentDetectionJobPropertiesListT = TargetedSentimentDetectionJobProperties>
    ListTargetedSentimentDetectionJobsResult& AddTargetedSentimentDetectionJobPropertiesList(TargetedSentimentDetectionJobPropertiesListT&& value) { m_targetedSentimentDetectionJobPropertiesListHasBeenSet = true; m_targetedSentimentDetectionJobPropertiesList.emplace_back(std::forward<TargetedSentimentDetectionJobPropertiesListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTargetedSentimentDetectionJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTargetedSentimentDetectionJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TargetedSentimentDetectionJobProperties> m_targetedSentimentDetectionJobPropertiesList;
    bool m_targetedSentimentDetectionJobPropertiesListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
