/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/model/PlaybackKeyPair.h>
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
  class GetPlaybackKeyPairResult
  {
  public:
    AWS_IVS_API GetPlaybackKeyPairResult();
    AWS_IVS_API GetPlaybackKeyPairResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVS_API GetPlaybackKeyPairResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <zonbook></zonbook><xhtml></xhtml>
     */
    inline const PlaybackKeyPair& GetKeyPair() const{ return m_keyPair; }

    /**
     * <zonbook></zonbook><xhtml></xhtml>
     */
    inline void SetKeyPair(const PlaybackKeyPair& value) { m_keyPair = value; }

    /**
     * <zonbook></zonbook><xhtml></xhtml>
     */
    inline void SetKeyPair(PlaybackKeyPair&& value) { m_keyPair = std::move(value); }

    /**
     * <zonbook></zonbook><xhtml></xhtml>
     */
    inline GetPlaybackKeyPairResult& WithKeyPair(const PlaybackKeyPair& value) { SetKeyPair(value); return *this;}

    /**
     * <zonbook></zonbook><xhtml></xhtml>
     */
    inline GetPlaybackKeyPairResult& WithKeyPair(PlaybackKeyPair&& value) { SetKeyPair(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetPlaybackKeyPairResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetPlaybackKeyPairResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetPlaybackKeyPairResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    PlaybackKeyPair m_keyPair;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
