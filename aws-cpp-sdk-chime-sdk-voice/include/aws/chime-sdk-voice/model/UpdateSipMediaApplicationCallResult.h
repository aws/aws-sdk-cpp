/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/SipMediaApplicationCall.h>
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
  class UpdateSipMediaApplicationCallResult
  {
  public:
    AWS_CHIMESDKVOICE_API UpdateSipMediaApplicationCallResult();
    AWS_CHIMESDKVOICE_API UpdateSipMediaApplicationCallResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API UpdateSipMediaApplicationCallResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const SipMediaApplicationCall& GetSipMediaApplicationCall() const{ return m_sipMediaApplicationCall; }

    
    inline void SetSipMediaApplicationCall(const SipMediaApplicationCall& value) { m_sipMediaApplicationCall = value; }

    
    inline void SetSipMediaApplicationCall(SipMediaApplicationCall&& value) { m_sipMediaApplicationCall = std::move(value); }

    
    inline UpdateSipMediaApplicationCallResult& WithSipMediaApplicationCall(const SipMediaApplicationCall& value) { SetSipMediaApplicationCall(value); return *this;}

    
    inline UpdateSipMediaApplicationCallResult& WithSipMediaApplicationCall(SipMediaApplicationCall&& value) { SetSipMediaApplicationCall(std::move(value)); return *this;}

  private:

    SipMediaApplicationCall m_sipMediaApplicationCall;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
