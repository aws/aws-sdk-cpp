/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/model/PlaybackRestrictionPolicy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreatePlaybackRestrictionPolicyResult
  {
  public:
    AWS_IVS_API CreatePlaybackRestrictionPolicyResult() = default;
    AWS_IVS_API CreatePlaybackRestrictionPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVS_API CreatePlaybackRestrictionPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p/>
     */
    inline const PlaybackRestrictionPolicy& GetPlaybackRestrictionPolicy() const { return m_playbackRestrictionPolicy; }
    template<typename PlaybackRestrictionPolicyT = PlaybackRestrictionPolicy>
    void SetPlaybackRestrictionPolicy(PlaybackRestrictionPolicyT&& value) { m_playbackRestrictionPolicyHasBeenSet = true; m_playbackRestrictionPolicy = std::forward<PlaybackRestrictionPolicyT>(value); }
    template<typename PlaybackRestrictionPolicyT = PlaybackRestrictionPolicy>
    CreatePlaybackRestrictionPolicyResult& WithPlaybackRestrictionPolicy(PlaybackRestrictionPolicyT&& value) { SetPlaybackRestrictionPolicy(std::forward<PlaybackRestrictionPolicyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreatePlaybackRestrictionPolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    PlaybackRestrictionPolicy m_playbackRestrictionPolicy;
    bool m_playbackRestrictionPolicyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
