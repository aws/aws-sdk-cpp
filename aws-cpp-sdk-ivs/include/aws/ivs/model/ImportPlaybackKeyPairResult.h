/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/model/PlaybackKeyPair.h>
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
  class AWS_IVS_API ImportPlaybackKeyPairResult
  {
  public:
    ImportPlaybackKeyPairResult();
    ImportPlaybackKeyPairResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ImportPlaybackKeyPairResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const PlaybackKeyPair& GetKeyPair() const{ return m_keyPair; }

    
    inline void SetKeyPair(const PlaybackKeyPair& value) { m_keyPair = value; }

    
    inline void SetKeyPair(PlaybackKeyPair&& value) { m_keyPair = std::move(value); }

    
    inline ImportPlaybackKeyPairResult& WithKeyPair(const PlaybackKeyPair& value) { SetKeyPair(value); return *this;}

    
    inline ImportPlaybackKeyPairResult& WithKeyPair(PlaybackKeyPair&& value) { SetKeyPair(std::move(value)); return *this;}

  private:

    PlaybackKeyPair m_keyPair;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
