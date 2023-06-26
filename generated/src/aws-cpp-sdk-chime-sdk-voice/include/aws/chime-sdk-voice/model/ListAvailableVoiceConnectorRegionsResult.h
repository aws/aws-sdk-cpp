/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    /**
     * <p>The list of AWS Regions.</p>
     */
    inline const Aws::Vector<VoiceConnectorAwsRegion>& GetVoiceConnectorRegions() const{ return m_voiceConnectorRegions; }

    /**
     * <p>The list of AWS Regions.</p>
     */
    inline void SetVoiceConnectorRegions(const Aws::Vector<VoiceConnectorAwsRegion>& value) { m_voiceConnectorRegions = value; }

    /**
     * <p>The list of AWS Regions.</p>
     */
    inline void SetVoiceConnectorRegions(Aws::Vector<VoiceConnectorAwsRegion>&& value) { m_voiceConnectorRegions = std::move(value); }

    /**
     * <p>The list of AWS Regions.</p>
     */
    inline ListAvailableVoiceConnectorRegionsResult& WithVoiceConnectorRegions(const Aws::Vector<VoiceConnectorAwsRegion>& value) { SetVoiceConnectorRegions(value); return *this;}

    /**
     * <p>The list of AWS Regions.</p>
     */
    inline ListAvailableVoiceConnectorRegionsResult& WithVoiceConnectorRegions(Aws::Vector<VoiceConnectorAwsRegion>&& value) { SetVoiceConnectorRegions(std::move(value)); return *this;}

    /**
     * <p>The list of AWS Regions.</p>
     */
    inline ListAvailableVoiceConnectorRegionsResult& AddVoiceConnectorRegions(const VoiceConnectorAwsRegion& value) { m_voiceConnectorRegions.push_back(value); return *this; }

    /**
     * <p>The list of AWS Regions.</p>
     */
    inline ListAvailableVoiceConnectorRegionsResult& AddVoiceConnectorRegions(VoiceConnectorAwsRegion&& value) { m_voiceConnectorRegions.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAvailableVoiceConnectorRegionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAvailableVoiceConnectorRegionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAvailableVoiceConnectorRegionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<VoiceConnectorAwsRegion> m_voiceConnectorRegions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
