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
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sqs/model/ResponseMetadata.h>
#include <aws/sqs/model/SendMessageBatchResultEntry.h>
#include <aws/sqs/model/BatchResultErrorEntry.h>
#include <utility>

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
   * <p>For each message in the batch, the response contains a <code>
   * <a>SendMessageBatchResultEntry</a> </code> tag if the message succeeds or a
   * <code> <a>BatchResultErrorEntry</a> </code> tag if the message
   * fails.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/SendMessageBatchResult">AWS
   * API Reference</a></p>
   */
  class AWS_SQS_API SendMessageBatchResult
  {
  public:
    SendMessageBatchResult();
    SendMessageBatchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    SendMessageBatchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of <code> <a>SendMessageBatchResultEntry</a> </code> items.</p>
     */
    inline const Aws::Vector<SendMessageBatchResultEntry>& GetSuccessful() const{ return m_successful; }

    /**
     * <p>A list of <code> <a>SendMessageBatchResultEntry</a> </code> items.</p>
     */
    inline void SetSuccessful(const Aws::Vector<SendMessageBatchResultEntry>& value) { m_successful = value; }

    /**
     * <p>A list of <code> <a>SendMessageBatchResultEntry</a> </code> items.</p>
     */
    inline void SetSuccessful(Aws::Vector<SendMessageBatchResultEntry>&& value) { m_successful = std::move(value); }

    /**
     * <p>A list of <code> <a>SendMessageBatchResultEntry</a> </code> items.</p>
     */
    inline SendMessageBatchResult& WithSuccessful(const Aws::Vector<SendMessageBatchResultEntry>& value) { SetSuccessful(value); return *this;}

    /**
     * <p>A list of <code> <a>SendMessageBatchResultEntry</a> </code> items.</p>
     */
    inline SendMessageBatchResult& WithSuccessful(Aws::Vector<SendMessageBatchResultEntry>&& value) { SetSuccessful(std::move(value)); return *this;}

    /**
     * <p>A list of <code> <a>SendMessageBatchResultEntry</a> </code> items.</p>
     */
    inline SendMessageBatchResult& AddSuccessful(const SendMessageBatchResultEntry& value) { m_successful.push_back(value); return *this; }

    /**
     * <p>A list of <code> <a>SendMessageBatchResultEntry</a> </code> items.</p>
     */
    inline SendMessageBatchResult& AddSuccessful(SendMessageBatchResultEntry&& value) { m_successful.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of <code> <a>BatchResultErrorEntry</a> </code> items with error
     * details about each message that can't be enqueued.</p>
     */
    inline const Aws::Vector<BatchResultErrorEntry>& GetFailed() const{ return m_failed; }

    /**
     * <p>A list of <code> <a>BatchResultErrorEntry</a> </code> items with error
     * details about each message that can't be enqueued.</p>
     */
    inline void SetFailed(const Aws::Vector<BatchResultErrorEntry>& value) { m_failed = value; }

    /**
     * <p>A list of <code> <a>BatchResultErrorEntry</a> </code> items with error
     * details about each message that can't be enqueued.</p>
     */
    inline void SetFailed(Aws::Vector<BatchResultErrorEntry>&& value) { m_failed = std::move(value); }

    /**
     * <p>A list of <code> <a>BatchResultErrorEntry</a> </code> items with error
     * details about each message that can't be enqueued.</p>
     */
    inline SendMessageBatchResult& WithFailed(const Aws::Vector<BatchResultErrorEntry>& value) { SetFailed(value); return *this;}

    /**
     * <p>A list of <code> <a>BatchResultErrorEntry</a> </code> items with error
     * details about each message that can't be enqueued.</p>
     */
    inline SendMessageBatchResult& WithFailed(Aws::Vector<BatchResultErrorEntry>&& value) { SetFailed(std::move(value)); return *this;}

    /**
     * <p>A list of <code> <a>BatchResultErrorEntry</a> </code> items with error
     * details about each message that can't be enqueued.</p>
     */
    inline SendMessageBatchResult& AddFailed(const BatchResultErrorEntry& value) { m_failed.push_back(value); return *this; }

    /**
     * <p>A list of <code> <a>BatchResultErrorEntry</a> </code> items with error
     * details about each message that can't be enqueued.</p>
     */
    inline SendMessageBatchResult& AddFailed(BatchResultErrorEntry&& value) { m_failed.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline SendMessageBatchResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline SendMessageBatchResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<SendMessageBatchResultEntry> m_successful;

    Aws::Vector<BatchResultErrorEntry> m_failed;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
