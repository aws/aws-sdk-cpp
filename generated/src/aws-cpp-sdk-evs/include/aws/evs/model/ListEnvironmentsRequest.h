/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/evs/EVSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/evs/model/EnvironmentState.h>
#include <utility>

namespace Aws
{
namespace EVS
{
namespace Model
{

  /**
   */
  class ListEnvironmentsRequest : public EVSRequest
  {
  public:
    AWS_EVS_API ListEnvironmentsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEnvironments"; }

    AWS_EVS_API Aws::String SerializePayload() const override;

    AWS_EVS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique pagination token for each page. If <code>nextToken</code> is
     * returned, there are more results available. Make the call again using the
     * returned token with all other arguments unchanged to retrieve the next page.
     * Each pagination token expires after 24 hours. Using an expired pagination token
     * will return an <i>HTTP 400 InvalidToken</i> error.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEnvironmentsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return. If you specify
     * <code>MaxResults</code> in the request, the response includes information up to
     * the limit specified.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListEnvironmentsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of an environment. Used to filter response results to return only
     * environments with the specified <code>environmentState</code>.</p>
     */
    inline const Aws::Vector<EnvironmentState>& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = Aws::Vector<EnvironmentState>>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::Vector<EnvironmentState>>
    ListEnvironmentsRequest& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    inline ListEnvironmentsRequest& AddState(EnvironmentState value) { m_stateHasBeenSet = true; m_state.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<EnvironmentState> m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace EVS
} // namespace Aws
