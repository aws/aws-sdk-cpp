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
#include <aws/pinpoint/model/PushNotificationTemplateResponse.h>
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
  class AWS_PINPOINT_API GetPushTemplateResult
  {
  public:
    GetPushTemplateResult();
    GetPushTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetPushTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const PushNotificationTemplateResponse& GetPushNotificationTemplateResponse() const{ return m_pushNotificationTemplateResponse; }

    
    inline void SetPushNotificationTemplateResponse(const PushNotificationTemplateResponse& value) { m_pushNotificationTemplateResponse = value; }

    
    inline void SetPushNotificationTemplateResponse(PushNotificationTemplateResponse&& value) { m_pushNotificationTemplateResponse = std::move(value); }

    
    inline GetPushTemplateResult& WithPushNotificationTemplateResponse(const PushNotificationTemplateResponse& value) { SetPushNotificationTemplateResponse(value); return *this;}

    
    inline GetPushTemplateResult& WithPushNotificationTemplateResponse(PushNotificationTemplateResponse&& value) { SetPushNotificationTemplateResponse(std::move(value)); return *this;}

  private:

    PushNotificationTemplateResponse m_pushNotificationTemplateResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
