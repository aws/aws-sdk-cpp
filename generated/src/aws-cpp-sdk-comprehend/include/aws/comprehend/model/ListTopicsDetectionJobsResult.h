/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/TopicsDetectionJobProperties.h>
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
  class ListTopicsDetectionJobsResult
  {
  public:
    AWS_COMPREHEND_API ListTopicsDetectionJobsResult() = default;
    AWS_COMPREHEND_API ListTopicsDetectionJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API ListTopicsDetectionJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline const Aws::Vector<TopicsDetectionJobProperties>& GetTopicsDetectionJobPropertiesList() const { return m_topicsDetectionJobPropertiesList; }
    template<typename TopicsDetectionJobPropertiesListT = Aws::Vector<TopicsDetectionJobProperties>>
    void SetTopicsDetectionJobPropertiesList(TopicsDetectionJobPropertiesListT&& value) { m_topicsDetectionJobPropertiesListHasBeenSet = true; m_topicsDetectionJobPropertiesList = std::forward<TopicsDetectionJobPropertiesListT>(value); }
    template<typename TopicsDetectionJobPropertiesListT = Aws::Vector<TopicsDetectionJobProperties>>
    ListTopicsDetectionJobsResult& WithTopicsDetectionJobPropertiesList(TopicsDetectionJobPropertiesListT&& value) { SetTopicsDetectionJobPropertiesList(std::forward<TopicsDetectionJobPropertiesListT>(value)); return *this;}
    template<typename TopicsDetectionJobPropertiesListT = TopicsDetectionJobProperties>
    ListTopicsDetectionJobsResult& AddTopicsDetectionJobPropertiesList(TopicsDetectionJobPropertiesListT&& value) { m_topicsDetectionJobPropertiesListHasBeenSet = true; m_topicsDetectionJobPropertiesList.emplace_back(std::forward<TopicsDetectionJobPropertiesListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTopicsDetectionJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTopicsDetectionJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TopicsDetectionJobProperties> m_topicsDetectionJobPropertiesList;
    bool m_topicsDetectionJobPropertiesListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
