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
    AWS_IVS_API CreatePlaybackRestrictionPolicyResult();
    AWS_IVS_API CreatePlaybackRestrictionPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVS_API CreatePlaybackRestrictionPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p/>
     */
    inline const PlaybackRestrictionPolicy& GetPlaybackRestrictionPolicy() const{ return m_playbackRestrictionPolicy; }

    /**
     * <p/>
     */
    inline void SetPlaybackRestrictionPolicy(const PlaybackRestrictionPolicy& value) { m_playbackRestrictionPolicy = value; }

    /**
     * <p/>
     */
    inline void SetPlaybackRestrictionPolicy(PlaybackRestrictionPolicy&& value) { m_playbackRestrictionPolicy = std::move(value); }

    /**
     * <p/>
     */
    inline CreatePlaybackRestrictionPolicyResult& WithPlaybackRestrictionPolicy(const PlaybackRestrictionPolicy& value) { SetPlaybackRestrictionPolicy(value); return *this;}

    /**
     * <p/>
     */
    inline CreatePlaybackRestrictionPolicyResult& WithPlaybackRestrictionPolicy(PlaybackRestrictionPolicy&& value) { SetPlaybackRestrictionPolicy(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreatePlaybackRestrictionPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreatePlaybackRestrictionPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreatePlaybackRestrictionPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    PlaybackRestrictionPolicy m_playbackRestrictionPolicy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
