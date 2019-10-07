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
#include <aws/pinpoint/model/CreateTemplateMessageBody.h>
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
  class AWS_PINPOINT_API CreatePushTemplateResult
  {
  public:
    CreatePushTemplateResult();
    CreatePushTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreatePushTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const CreateTemplateMessageBody& GetCreateTemplateMessageBody() const{ return m_createTemplateMessageBody; }

    
    inline void SetCreateTemplateMessageBody(const CreateTemplateMessageBody& value) { m_createTemplateMessageBody = value; }

    
    inline void SetCreateTemplateMessageBody(CreateTemplateMessageBody&& value) { m_createTemplateMessageBody = std::move(value); }

    
    inline CreatePushTemplateResult& WithCreateTemplateMessageBody(const CreateTemplateMessageBody& value) { SetCreateTemplateMessageBody(value); return *this;}

    
    inline CreatePushTemplateResult& WithCreateTemplateMessageBody(CreateTemplateMessageBody&& value) { SetCreateTemplateMessageBody(std::move(value)); return *this;}

  private:

    CreateTemplateMessageBody m_createTemplateMessageBody;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
