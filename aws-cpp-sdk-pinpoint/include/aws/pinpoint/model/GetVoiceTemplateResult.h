/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/VoiceTemplateResponse.h>
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
namespace Pinpoint
{
namespace Model
{
  class AWS_PINPOINT_API GetVoiceTemplateResult
  {
  public:
    GetVoiceTemplateResult();
    GetVoiceTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetVoiceTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const VoiceTemplateResponse& GetVoiceTemplateResponse() const{ return m_voiceTemplateResponse; }

    
    inline void SetVoiceTemplateResponse(const VoiceTemplateResponse& value) { m_voiceTemplateResponse = value; }

    
    inline void SetVoiceTemplateResponse(VoiceTemplateResponse&& value) { m_voiceTemplateResponse = std::move(value); }

    
    inline GetVoiceTemplateResult& WithVoiceTemplateResponse(const VoiceTemplateResponse& value) { SetVoiceTemplateResponse(value); return *this;}

    
    inline GetVoiceTemplateResult& WithVoiceTemplateResponse(VoiceTemplateResponse&& value) { SetVoiceTemplateResponse(std::move(value)); return *this;}

  private:

    VoiceTemplateResponse m_voiceTemplateResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
