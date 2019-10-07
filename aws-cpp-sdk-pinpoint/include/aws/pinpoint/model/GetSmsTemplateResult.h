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
#include <aws/pinpoint/model/SMSTemplateResponse.h>
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
  class AWS_PINPOINT_API GetSmsTemplateResult
  {
  public:
    GetSmsTemplateResult();
    GetSmsTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetSmsTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const SMSTemplateResponse& GetSMSTemplateResponse() const{ return m_sMSTemplateResponse; }

    
    inline void SetSMSTemplateResponse(const SMSTemplateResponse& value) { m_sMSTemplateResponse = value; }

    
    inline void SetSMSTemplateResponse(SMSTemplateResponse&& value) { m_sMSTemplateResponse = std::move(value); }

    
    inline GetSmsTemplateResult& WithSMSTemplateResponse(const SMSTemplateResponse& value) { SetSMSTemplateResponse(value); return *this;}

    
    inline GetSmsTemplateResult& WithSMSTemplateResponse(SMSTemplateResponse&& value) { SetSMSTemplateResponse(std::move(value)); return *this;}

  private:

    SMSTemplateResponse m_sMSTemplateResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
