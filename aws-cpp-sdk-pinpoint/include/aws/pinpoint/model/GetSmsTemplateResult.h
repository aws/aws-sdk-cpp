/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetSmsTemplateResult
  {
  public:
    AWS_PINPOINT_API GetSmsTemplateResult();
    AWS_PINPOINT_API GetSmsTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetSmsTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
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
