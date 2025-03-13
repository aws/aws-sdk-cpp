/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/EntitiesDetectionJobProperties.h>
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
  class ListEntitiesDetectionJobsResult
  {
  public:
    AWS_COMPREHEND_API ListEntitiesDetectionJobsResult() = default;
    AWS_COMPREHEND_API ListEntitiesDetectionJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API ListEntitiesDetectionJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline const Aws::Vector<EntitiesDetectionJobProperties>& GetEntitiesDetectionJobPropertiesList() const { return m_entitiesDetectionJobPropertiesList; }
    template<typename EntitiesDetectionJobPropertiesListT = Aws::Vector<EntitiesDetectionJobProperties>>
    void SetEntitiesDetectionJobPropertiesList(EntitiesDetectionJobPropertiesListT&& value) { m_entitiesDetectionJobPropertiesListHasBeenSet = true; m_entitiesDetectionJobPropertiesList = std::forward<EntitiesDetectionJobPropertiesListT>(value); }
    template<typename EntitiesDetectionJobPropertiesListT = Aws::Vector<EntitiesDetectionJobProperties>>
    ListEntitiesDetectionJobsResult& WithEntitiesDetectionJobPropertiesList(EntitiesDetectionJobPropertiesListT&& value) { SetEntitiesDetectionJobPropertiesList(std::forward<EntitiesDetectionJobPropertiesListT>(value)); return *this;}
    template<typename EntitiesDetectionJobPropertiesListT = EntitiesDetectionJobProperties>
    ListEntitiesDetectionJobsResult& AddEntitiesDetectionJobPropertiesList(EntitiesDetectionJobPropertiesListT&& value) { m_entitiesDetectionJobPropertiesListHasBeenSet = true; m_entitiesDetectionJobPropertiesList.emplace_back(std::forward<EntitiesDetectionJobPropertiesListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEntitiesDetectionJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEntitiesDetectionJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EntitiesDetectionJobProperties> m_entitiesDetectionJobPropertiesList;
    bool m_entitiesDetectionJobPropertiesListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
