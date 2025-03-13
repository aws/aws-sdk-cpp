/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/controlcatalog/model/ObjectiveSummary.h>
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
namespace ControlCatalog
{
namespace Model
{
  class ListObjectivesResult
  {
  public:
    AWS_CONTROLCATALOG_API ListObjectivesResult() = default;
    AWS_CONTROLCATALOG_API ListObjectivesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLCATALOG_API ListObjectivesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of objectives that the <code>ListObjectives</code> API returns.</p>
     */
    inline const Aws::Vector<ObjectiveSummary>& GetObjectives() const { return m_objectives; }
    template<typename ObjectivesT = Aws::Vector<ObjectiveSummary>>
    void SetObjectives(ObjectivesT&& value) { m_objectivesHasBeenSet = true; m_objectives = std::forward<ObjectivesT>(value); }
    template<typename ObjectivesT = Aws::Vector<ObjectiveSummary>>
    ListObjectivesResult& WithObjectives(ObjectivesT&& value) { SetObjectives(std::forward<ObjectivesT>(value)); return *this;}
    template<typename ObjectivesT = ObjectiveSummary>
    ListObjectivesResult& AddObjectives(ObjectivesT&& value) { m_objectivesHasBeenSet = true; m_objectives.emplace_back(std::forward<ObjectivesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListObjectivesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListObjectivesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ObjectiveSummary> m_objectives;
    bool m_objectivesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
