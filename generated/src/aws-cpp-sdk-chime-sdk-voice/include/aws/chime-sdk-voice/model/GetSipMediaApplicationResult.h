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
  class GetSipMediaApplicationResult
  {
  public:
    AWS_CHIMESDKVOICE_API GetSipMediaApplicationResult();
    AWS_CHIMESDKVOICE_API GetSipMediaApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API GetSipMediaApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details of the SIP media application.</p>
     */
    inline const SipMediaApplication& GetSipMediaApplication() const{ return m_sipMediaApplication; }

    /**
     * <p>The details of the SIP media application.</p>
     */
    inline void SetSipMediaApplication(const SipMediaApplication& value) { m_sipMediaApplication = value; }

    /**
     * <p>The details of the SIP media application.</p>
     */
    inline void SetSipMediaApplication(SipMediaApplication&& value) { m_sipMediaApplication = std::move(value); }

    /**
     * <p>The details of the SIP media application.</p>
     */
    inline GetSipMediaApplicationResult& WithSipMediaApplication(const SipMediaApplication& value) { SetSipMediaApplication(value); return *this;}

    /**
     * <p>The details of the SIP media application.</p>
     */
    inline GetSipMediaApplicationResult& WithSipMediaApplication(SipMediaApplication&& value) { SetSipMediaApplication(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSipMediaApplicationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSipMediaApplicationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSipMediaApplicationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SipMediaApplication m_sipMediaApplication;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
