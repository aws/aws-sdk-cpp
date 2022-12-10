/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetRawMessageContentResult
  {
  public:
    AWS_WORKMAILMESSAGEFLOW_API GetRawMessageContentResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_WORKMAILMESSAGEFLOW_API GetRawMessageContentResult(GetRawMessageContentResult&&);
    AWS_WORKMAILMESSAGEFLOW_API GetRawMessageContentResult& operator=(GetRawMessageContentResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetRawMessageContentResult(const GetRawMessageContentResult&) = delete;
    GetRawMessageContentResult& operator=(const GetRawMessageContentResult&) = delete;


    AWS_WORKMAILMESSAGEFLOW_API GetRawMessageContentResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_WORKMAILMESSAGEFLOW_API GetRawMessageContentResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



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
