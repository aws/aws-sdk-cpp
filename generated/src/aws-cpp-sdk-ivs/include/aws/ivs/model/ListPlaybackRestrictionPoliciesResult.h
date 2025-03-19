/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ivs/model/PlaybackRestrictionPolicySummary.h>
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
namespace IVS
{
namespace Model
{
  class ListPlaybackRestrictionPoliciesResult
  {
  public:
    AWS_IVS_API ListPlaybackRestrictionPoliciesResult() = default;
    AWS_IVS_API ListPlaybackRestrictionPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVS_API ListPlaybackRestrictionPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If there are more channels than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPlaybackRestrictionPoliciesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of the matching policies.</p>
     */
    inline const Aws::Vector<PlaybackRestrictionPolicySummary>& GetPlaybackRestrictionPolicies() const { return m_playbackRestrictionPolicies; }
    template<typename PlaybackRestrictionPoliciesT = Aws::Vector<PlaybackRestrictionPolicySummary>>
    void SetPlaybackRestrictionPolicies(PlaybackRestrictionPoliciesT&& value) { m_playbackRestrictionPoliciesHasBeenSet = true; m_playbackRestrictionPolicies = std::forward<PlaybackRestrictionPoliciesT>(value); }
    template<typename PlaybackRestrictionPoliciesT = Aws::Vector<PlaybackRestrictionPolicySummary>>
    ListPlaybackRestrictionPoliciesResult& WithPlaybackRestrictionPolicies(PlaybackRestrictionPoliciesT&& value) { SetPlaybackRestrictionPolicies(std::forward<PlaybackRestrictionPoliciesT>(value)); return *this;}
    template<typename PlaybackRestrictionPoliciesT = PlaybackRestrictionPolicySummary>
    ListPlaybackRestrictionPoliciesResult& AddPlaybackRestrictionPolicies(PlaybackRestrictionPoliciesT&& value) { m_playbackRestrictionPoliciesHasBeenSet = true; m_playbackRestrictionPolicies.emplace_back(std::forward<PlaybackRestrictionPoliciesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPlaybackRestrictionPoliciesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<PlaybackRestrictionPolicySummary> m_playbackRestrictionPolicies;
    bool m_playbackRestrictionPoliciesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
