/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/BatchPutDocumentResponseFailedDocument.h>
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
namespace kendra
{
namespace Model
{
  class BatchPutDocumentResult
  {
  public:
    AWS_KENDRA_API BatchPutDocumentResult();
    AWS_KENDRA_API BatchPutDocumentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API BatchPutDocumentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of documents that were not added to the index because the document
     * failed a validation check. Each document contains an error message that
     * indicates why the document couldn't be added to the index.</p> <p>If there was
     * an error adding a document to an index the error is reported in your Amazon Web
     * Services CloudWatch log. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/cloudwatch-logs.html">Monitoring
     * Amazon Kendra with Amazon CloudWatch logs</a>.</p>
     */
    inline const Aws::Vector<BatchPutDocumentResponseFailedDocument>& GetFailedDocuments() const{ return m_failedDocuments; }

    /**
     * <p>A list of documents that were not added to the index because the document
     * failed a validation check. Each document contains an error message that
     * indicates why the document couldn't be added to the index.</p> <p>If there was
     * an error adding a document to an index the error is reported in your Amazon Web
     * Services CloudWatch log. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/cloudwatch-logs.html">Monitoring
     * Amazon Kendra with Amazon CloudWatch logs</a>.</p>
     */
    inline void SetFailedDocuments(const Aws::Vector<BatchPutDocumentResponseFailedDocument>& value) { m_failedDocuments = value; }

    /**
     * <p>A list of documents that were not added to the index because the document
     * failed a validation check. Each document contains an error message that
     * indicates why the document couldn't be added to the index.</p> <p>If there was
     * an error adding a document to an index the error is reported in your Amazon Web
     * Services CloudWatch log. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/cloudwatch-logs.html">Monitoring
     * Amazon Kendra with Amazon CloudWatch logs</a>.</p>
     */
    inline void SetFailedDocuments(Aws::Vector<BatchPutDocumentResponseFailedDocument>&& value) { m_failedDocuments = std::move(value); }

    /**
     * <p>A list of documents that were not added to the index because the document
     * failed a validation check. Each document contains an error message that
     * indicates why the document couldn't be added to the index.</p> <p>If there was
     * an error adding a document to an index the error is reported in your Amazon Web
     * Services CloudWatch log. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/cloudwatch-logs.html">Monitoring
     * Amazon Kendra with Amazon CloudWatch logs</a>.</p>
     */
    inline BatchPutDocumentResult& WithFailedDocuments(const Aws::Vector<BatchPutDocumentResponseFailedDocument>& value) { SetFailedDocuments(value); return *this;}

    /**
     * <p>A list of documents that were not added to the index because the document
     * failed a validation check. Each document contains an error message that
     * indicates why the document couldn't be added to the index.</p> <p>If there was
     * an error adding a document to an index the error is reported in your Amazon Web
     * Services CloudWatch log. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/cloudwatch-logs.html">Monitoring
     * Amazon Kendra with Amazon CloudWatch logs</a>.</p>
     */
    inline BatchPutDocumentResult& WithFailedDocuments(Aws::Vector<BatchPutDocumentResponseFailedDocument>&& value) { SetFailedDocuments(std::move(value)); return *this;}

    /**
     * <p>A list of documents that were not added to the index because the document
     * failed a validation check. Each document contains an error message that
     * indicates why the document couldn't be added to the index.</p> <p>If there was
     * an error adding a document to an index the error is reported in your Amazon Web
     * Services CloudWatch log. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/cloudwatch-logs.html">Monitoring
     * Amazon Kendra with Amazon CloudWatch logs</a>.</p>
     */
    inline BatchPutDocumentResult& AddFailedDocuments(const BatchPutDocumentResponseFailedDocument& value) { m_failedDocuments.push_back(value); return *this; }

    /**
     * <p>A list of documents that were not added to the index because the document
     * failed a validation check. Each document contains an error message that
     * indicates why the document couldn't be added to the index.</p> <p>If there was
     * an error adding a document to an index the error is reported in your Amazon Web
     * Services CloudWatch log. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/cloudwatch-logs.html">Monitoring
     * Amazon Kendra with Amazon CloudWatch logs</a>.</p>
     */
    inline BatchPutDocumentResult& AddFailedDocuments(BatchPutDocumentResponseFailedDocument&& value) { m_failedDocuments.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchPutDocumentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchPutDocumentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchPutDocumentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<BatchPutDocumentResponseFailedDocument> m_failedDocuments;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
