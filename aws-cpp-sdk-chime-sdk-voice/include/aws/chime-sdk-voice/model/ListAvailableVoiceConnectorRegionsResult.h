/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-voice/model/VoiceConnectorAwsRegion.h>
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
namespace ChimeSDKVoice
{
namespace Model
{
  class ListAvailableVoiceConnectorRegionsResult
  {
  public:
    AWS_CHIMESDKVOICE_API ListAvailableVoiceConnectorRegionsResult();
    AWS_CHIMESDKVOICE_API ListAvailableVoiceConnectorRegionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API ListAvailableVoiceConnectorRegionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<VoiceConnectorAwsRegion>& GetVoiceConnectorRegions() const{ return m_voiceConnectorRegions; }

    
    inline void SetVoiceConnectorRegions(const Aws::Vector<VoiceConnectorAwsRegion>& value) { m_voiceConnectorRegions = value; }

    
    inline void SetVoiceConnectorRegions(Aws::Vector<VoiceConnectorAwsRegion>&& value) { m_voiceConnectorRegions = std::move(value); }

    
    inline ListAvailableVoiceConnectorRegionsResult& WithVoiceConnectorRegions(const Aws::Vector<VoiceConnectorAwsRegion>& value) { SetVoiceConnectorRegions(value); return *this;}

    
    inline ListAvailableVoiceConnectorRegionsResult& WithVoiceConnectorRegions(Aws::Vector<VoiceConnectorAwsRegion>&& value) { SetVoiceConnectorRegions(std::move(value)); return *this;}

    
    inline ListAvailableVoiceConnectorRegionsResult& AddVoiceConnectorRegions(const VoiceConnectorAwsRegion& value) { m_voiceConnectorRegions.push_back(value); return *this; }

    
    inline ListAvailableVoiceConnectorRegionsResult& AddVoiceConnectorRegions(VoiceConnectorAwsRegion&& value) { m_voiceConnectorRegions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<VoiceConnectorAwsRegion> m_voiceConnectorRegions;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
