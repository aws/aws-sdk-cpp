/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/AWSMigrationHub/model/ApplicationState.h>
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
namespace MigrationHub
{
namespace Model
{
  class ListApplicationStatesResult
  {
  public:
    AWS_MIGRATIONHUB_API ListApplicationStatesResult() = default;
    AWS_MIGRATIONHUB_API ListApplicationStatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUB_API ListApplicationStatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of Applications that exist in Application Discovery Service.</p>
     */
    inline const Aws::Vector<ApplicationState>& GetApplicationStateList() const { return m_applicationStateList; }
    template<typename ApplicationStateListT = Aws::Vector<ApplicationState>>
    void SetApplicationStateList(ApplicationStateListT&& value) { m_applicationStateListHasBeenSet = true; m_applicationStateList = std::forward<ApplicationStateListT>(value); }
    template<typename ApplicationStateListT = Aws::Vector<ApplicationState>>
    ListApplicationStatesResult& WithApplicationStateList(ApplicationStateListT&& value) { SetApplicationStateList(std::forward<ApplicationStateListT>(value)); return *this;}
    template<typename ApplicationStateListT = ApplicationState>
    ListApplicationStatesResult& AddApplicationStateList(ApplicationStateListT&& value) { m_applicationStateListHasBeenSet = true; m_applicationStateList.emplace_back(std::forward<ApplicationStateListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If a <code>NextToken</code> was returned by a previous call, there are more
     * results available. To retrieve the next page of results, make the call again
     * using the returned token in <code>NextToken</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListApplicationStatesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListApplicationStatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ApplicationState> m_applicationStateList;
    bool m_applicationStateListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
