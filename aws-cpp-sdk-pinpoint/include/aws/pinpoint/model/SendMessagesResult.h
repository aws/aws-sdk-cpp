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
#include <aws/pinpoint/model/MessageResponse.h>
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
  class AWS_PINPOINT_API SendMessagesResult
  {
  public:
    SendMessagesResult();
    SendMessagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    SendMessagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const MessageResponse& GetMessageResponse() const{ return m_messageResponse; }

    
    inline void SetMessageResponse(const MessageResponse& value) { m_messageResponse = value; }

    
    inline void SetMessageResponse(MessageResponse&& value) { m_messageResponse = std::move(value); }

    
    inline SendMessagesResult& WithMessageResponse(const MessageResponse& value) { SetMessageResponse(value); return *this;}

    
    inline SendMessagesResult& WithMessageResponse(MessageResponse&& value) { SetMessageResponse(std::move(value)); return *this;}

  private:

    MessageResponse m_messageResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
