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
#include <aws/workmailmessageflow/WorkMailMessageFlow_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace WorkMailMessageFlow
{
namespace Model
{
  class AWS_WORKMAILMESSAGEFLOW_API GetRawMessageContentResult
  {
  public:
    GetRawMessageContentResult();
    //We have to define these because Microsoft doesn't auto generate them
    GetRawMessageContentResult(GetRawMessageContentResult&&);
    GetRawMessageContentResult& operator=(GetRawMessageContentResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetRawMessageContentResult(const GetRawMessageContentResult&) = delete;
    GetRawMessageContentResult& operator=(const GetRawMessageContentResult&) = delete;


    GetRawMessageContentResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    GetRawMessageContentResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    /**
     * <p>The raw content of the email message, in MIME format.</p>
     */
    inline Aws::IOStream& GetMessageContent() { return m_messageContent.GetUnderlyingStream(); }

    /**
     * <p>The raw content of the email message, in MIME format.</p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_messageContent = Aws::Utils::Stream::ResponseStream(body); }

  private:

  Aws::Utils::Stream::ResponseStream m_messageContent;
  };

} // namespace Model
} // namespace WorkMailMessageFlow
} // namespace Aws
