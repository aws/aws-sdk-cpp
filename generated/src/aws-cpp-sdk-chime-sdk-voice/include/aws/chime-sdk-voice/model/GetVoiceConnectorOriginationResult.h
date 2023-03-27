/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/Origination.h>
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
namespace ChimeSDKVoice
{
namespace Model
{
  class GetVoiceConnectorOriginationResult
  {
  public:
    AWS_CHIMESDKVOICE_API GetVoiceConnectorOriginationResult();
    AWS_CHIMESDKVOICE_API GetVoiceConnectorOriginationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API GetVoiceConnectorOriginationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The origination setting details.</p>
     */
    inline const Origination& GetOrigination() const{ return m_origination; }

    /**
     * <p>The origination setting details.</p>
     */
    inline void SetOrigination(const Origination& value) { m_origination = value; }

    /**
     * <p>The origination setting details.</p>
     */
    inline void SetOrigination(Origination&& value) { m_origination = std::move(value); }

    /**
     * <p>The origination setting details.</p>
     */
    inline GetVoiceConnectorOriginationResult& WithOrigination(const Origination& value) { SetOrigination(value); return *this;}

    /**
     * <p>The origination setting details.</p>
     */
    inline GetVoiceConnectorOriginationResult& WithOrigination(Origination&& value) { SetOrigination(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetVoiceConnectorOriginationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetVoiceConnectorOriginationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetVoiceConnectorOriginationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Origination m_origination;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
