﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sqs/model/ResponseMetadata.h>
#include <aws/sqs/model/Message.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace SQS
{
namespace Model
{
  /**
   * <p>A list of received messages.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/ReceiveMessageResult">AWS
   * API Reference</a></p>
   */
  class AWS_SQS_API ReceiveMessageResult
  {
  public:
    ReceiveMessageResult();
    ReceiveMessageResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ReceiveMessageResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A list of messages.</p>
     */
    inline const Aws::Vector<Message>& GetMessages() const{ return m_messages; }

    /**
     * <p>A list of messages.</p>
     */
    inline void SetMessages(const Aws::Vector<Message>& value) { m_messages = value; }

    /**
     * <p>A list of messages.</p>
     */
    inline void SetMessages(Aws::Vector<Message>&& value) { m_messages = value; }

    /**
     * <p>A list of messages.</p>
     */
    inline ReceiveMessageResult& WithMessages(const Aws::Vector<Message>& value) { SetMessages(value); return *this;}

    /**
     * <p>A list of messages.</p>
     */
    inline ReceiveMessageResult& WithMessages(Aws::Vector<Message>&& value) { SetMessages(value); return *this;}

    /**
     * <p>A list of messages.</p>
     */
    inline ReceiveMessageResult& AddMessages(const Message& value) { m_messages.push_back(value); return *this; }

    /**
     * <p>A list of messages.</p>
     */
    inline ReceiveMessageResult& AddMessages(Message&& value) { m_messages.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline ReceiveMessageResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ReceiveMessageResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<Message> m_messages;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws