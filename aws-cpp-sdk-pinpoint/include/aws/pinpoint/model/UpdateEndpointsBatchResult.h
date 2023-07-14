﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/MessageBody.h>
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
  class AWS_PINPOINT_API UpdateEndpointsBatchResult
  {
  public:
    UpdateEndpointsBatchResult();
    UpdateEndpointsBatchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateEndpointsBatchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const MessageBody& GetMessageBody() const{ return m_messageBody; }

    
    inline void SetMessageBody(const MessageBody& value) { m_messageBody = value; }

    
    inline void SetMessageBody(MessageBody&& value) { m_messageBody = std::move(value); }

    
    inline UpdateEndpointsBatchResult& WithMessageBody(const MessageBody& value) { SetMessageBody(value); return *this;}

    
    inline UpdateEndpointsBatchResult& WithMessageBody(MessageBody&& value) { SetMessageBody(std::move(value)); return *this;}

  private:

    MessageBody m_messageBody;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
