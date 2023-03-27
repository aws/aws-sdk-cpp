/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/SipMediaApplication.h>
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
  class CreateSipMediaApplicationResult
  {
  public:
    AWS_CHIMESDKVOICE_API CreateSipMediaApplicationResult();
    AWS_CHIMESDKVOICE_API CreateSipMediaApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API CreateSipMediaApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The SIP media application details.</p>
     */
    inline const SipMediaApplication& GetSipMediaApplication() const{ return m_sipMediaApplication; }

    /**
     * <p>The SIP media application details.</p>
     */
    inline void SetSipMediaApplication(const SipMediaApplication& value) { m_sipMediaApplication = value; }

    /**
     * <p>The SIP media application details.</p>
     */
    inline void SetSipMediaApplication(SipMediaApplication&& value) { m_sipMediaApplication = std::move(value); }

    /**
     * <p>The SIP media application details.</p>
     */
    inline CreateSipMediaApplicationResult& WithSipMediaApplication(const SipMediaApplication& value) { SetSipMediaApplication(value); return *this;}

    /**
     * <p>The SIP media application details.</p>
     */
    inline CreateSipMediaApplicationResult& WithSipMediaApplication(SipMediaApplication&& value) { SetSipMediaApplication(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateSipMediaApplicationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateSipMediaApplicationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateSipMediaApplicationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SipMediaApplication m_sipMediaApplication;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
