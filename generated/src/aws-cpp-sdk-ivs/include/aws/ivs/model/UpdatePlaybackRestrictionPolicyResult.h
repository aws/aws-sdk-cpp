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
  class UpdatePlaybackRestrictionPolicyResult
  {
  public:
    AWS_IVS_API UpdatePlaybackRestrictionPolicyResult();
    AWS_IVS_API UpdatePlaybackRestrictionPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVS_API UpdatePlaybackRestrictionPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Object specifying the updated policy.</p>
     */
    inline const PlaybackRestrictionPolicy& GetPlaybackRestrictionPolicy() const{ return m_playbackRestrictionPolicy; }

    /**
     * <p>Object specifying the updated policy.</p>
     */
    inline void SetPlaybackRestrictionPolicy(const PlaybackRestrictionPolicy& value) { m_playbackRestrictionPolicy = value; }

    /**
     * <p>Object specifying the updated policy.</p>
     */
    inline void SetPlaybackRestrictionPolicy(PlaybackRestrictionPolicy&& value) { m_playbackRestrictionPolicy = std::move(value); }

    /**
     * <p>Object specifying the updated policy.</p>
     */
    inline UpdatePlaybackRestrictionPolicyResult& WithPlaybackRestrictionPolicy(const PlaybackRestrictionPolicy& value) { SetPlaybackRestrictionPolicy(value); return *this;}

    /**
     * <p>Object specifying the updated policy.</p>
     */
    inline UpdatePlaybackRestrictionPolicyResult& WithPlaybackRestrictionPolicy(PlaybackRestrictionPolicy&& value) { SetPlaybackRestrictionPolicy(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdatePlaybackRestrictionPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdatePlaybackRestrictionPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdatePlaybackRestrictionPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    PlaybackRestrictionPolicy m_playbackRestrictionPolicy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
