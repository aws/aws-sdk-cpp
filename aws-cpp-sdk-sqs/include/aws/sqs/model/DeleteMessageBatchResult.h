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
#include <aws/sqs/model/DeleteMessageBatchResultEntry.h>
#include <aws/sqs/model/BatchResultErrorEntry.h>

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
   * <p> For each message in the batch, the response contains a
   * <a>DeleteMessageBatchResultEntry</a> tag if the message is deleted or a
   * <a>BatchResultErrorEntry</a> tag if the message cannot be deleted. </p>
   */
  class AWS_SQS_API DeleteMessageBatchResult
  {
  public:
    DeleteMessageBatchResult();
    DeleteMessageBatchResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DeleteMessageBatchResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A list of <a>DeleteMessageBatchResultEntry</a> items.</p>
     */
    inline const Aws::Vector<DeleteMessageBatchResultEntry>& GetSuccessful() const{ return m_successful; }

    /**
     * <p>A list of <a>DeleteMessageBatchResultEntry</a> items.</p>
     */
    inline void SetSuccessful(const Aws::Vector<DeleteMessageBatchResultEntry>& value) { m_successful = value; }

    /**
     * <p>A list of <a>DeleteMessageBatchResultEntry</a> items.</p>
     */
    inline void SetSuccessful(Aws::Vector<DeleteMessageBatchResultEntry>&& value) { m_successful = value; }

    /**
     * <p>A list of <a>DeleteMessageBatchResultEntry</a> items.</p>
     */
    inline DeleteMessageBatchResult& WithSuccessful(const Aws::Vector<DeleteMessageBatchResultEntry>& value) { SetSuccessful(value); return *this;}

    /**
     * <p>A list of <a>DeleteMessageBatchResultEntry</a> items.</p>
     */
    inline DeleteMessageBatchResult& WithSuccessful(Aws::Vector<DeleteMessageBatchResultEntry>&& value) { SetSuccessful(value); return *this;}

    /**
     * <p>A list of <a>DeleteMessageBatchResultEntry</a> items.</p>
     */
    inline DeleteMessageBatchResult& AddSuccessful(const DeleteMessageBatchResultEntry& value) { m_successful.push_back(value); return *this; }

    /**
     * <p>A list of <a>DeleteMessageBatchResultEntry</a> items.</p>
     */
    inline DeleteMessageBatchResult& AddSuccessful(DeleteMessageBatchResultEntry&& value) { m_successful.push_back(value); return *this; }

    /**
     * <p>A list of <a>BatchResultErrorEntry</a> items.</p>
     */
    inline const Aws::Vector<BatchResultErrorEntry>& GetFailed() const{ return m_failed; }

    /**
     * <p>A list of <a>BatchResultErrorEntry</a> items.</p>
     */
    inline void SetFailed(const Aws::Vector<BatchResultErrorEntry>& value) { m_failed = value; }

    /**
     * <p>A list of <a>BatchResultErrorEntry</a> items.</p>
     */
    inline void SetFailed(Aws::Vector<BatchResultErrorEntry>&& value) { m_failed = value; }

    /**
     * <p>A list of <a>BatchResultErrorEntry</a> items.</p>
     */
    inline DeleteMessageBatchResult& WithFailed(const Aws::Vector<BatchResultErrorEntry>& value) { SetFailed(value); return *this;}

    /**
     * <p>A list of <a>BatchResultErrorEntry</a> items.</p>
     */
    inline DeleteMessageBatchResult& WithFailed(Aws::Vector<BatchResultErrorEntry>&& value) { SetFailed(value); return *this;}

    /**
     * <p>A list of <a>BatchResultErrorEntry</a> items.</p>
     */
    inline DeleteMessageBatchResult& AddFailed(const BatchResultErrorEntry& value) { m_failed.push_back(value); return *this; }

    /**
     * <p>A list of <a>BatchResultErrorEntry</a> items.</p>
     */
    inline DeleteMessageBatchResult& AddFailed(BatchResultErrorEntry&& value) { m_failed.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DeleteMessageBatchResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteMessageBatchResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<DeleteMessageBatchResultEntry> m_successful;
    Aws::Vector<BatchResultErrorEntry> m_failed;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws