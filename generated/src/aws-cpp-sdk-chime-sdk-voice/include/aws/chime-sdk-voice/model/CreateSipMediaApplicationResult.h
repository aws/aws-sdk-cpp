/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/SipMediaApplication.h>
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


    
    inline const SipMediaApplication& GetSipMediaApplication() const{ return m_sipMediaApplication; }

    
    inline void SetSipMediaApplication(const SipMediaApplication& value) { m_sipMediaApplication = value; }

    
    inline void SetSipMediaApplication(SipMediaApplication&& value) { m_sipMediaApplication = std::move(value); }

    
    inline CreateSipMediaApplicationResult& WithSipMediaApplication(const SipMediaApplication& value) { SetSipMediaApplication(value); return *this;}

    
    inline CreateSipMediaApplicationResult& WithSipMediaApplication(SipMediaApplication&& value) { SetSipMediaApplication(std::move(value)); return *this;}

  private:

    SipMediaApplication m_sipMediaApplication;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
