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
    AWS_IVS_API ListPlaybackRestrictionPoliciesResult();
    AWS_IVS_API ListPlaybackRestrictionPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVS_API ListPlaybackRestrictionPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If there are more channels than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListPlaybackRestrictionPoliciesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListPlaybackRestrictionPoliciesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListPlaybackRestrictionPoliciesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of the matching policies.</p>
     */
    inline const Aws::Vector<PlaybackRestrictionPolicySummary>& GetPlaybackRestrictionPolicies() const{ return m_playbackRestrictionPolicies; }
    inline void SetPlaybackRestrictionPolicies(const Aws::Vector<PlaybackRestrictionPolicySummary>& value) { m_playbackRestrictionPolicies = value; }
    inline void SetPlaybackRestrictionPolicies(Aws::Vector<PlaybackRestrictionPolicySummary>&& value) { m_playbackRestrictionPolicies = std::move(value); }
    inline ListPlaybackRestrictionPoliciesResult& WithPlaybackRestrictionPolicies(const Aws::Vector<PlaybackRestrictionPolicySummary>& value) { SetPlaybackRestrictionPolicies(value); return *this;}
    inline ListPlaybackRestrictionPoliciesResult& WithPlaybackRestrictionPolicies(Aws::Vector<PlaybackRestrictionPolicySummary>&& value) { SetPlaybackRestrictionPolicies(std::move(value)); return *this;}
    inline ListPlaybackRestrictionPoliciesResult& AddPlaybackRestrictionPolicies(const PlaybackRestrictionPolicySummary& value) { m_playbackRestrictionPolicies.push_back(value); return *this; }
    inline ListPlaybackRestrictionPoliciesResult& AddPlaybackRestrictionPolicies(PlaybackRestrictionPolicySummary&& value) { m_playbackRestrictionPolicies.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListPlaybackRestrictionPoliciesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListPlaybackRestrictionPoliciesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListPlaybackRestrictionPoliciesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<PlaybackRestrictionPolicySummary> m_playbackRestrictionPolicies;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
