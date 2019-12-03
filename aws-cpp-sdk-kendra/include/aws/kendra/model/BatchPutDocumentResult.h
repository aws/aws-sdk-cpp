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
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_KENDRA_API BatchPutDocumentResult
  {
  public:
    BatchPutDocumentResult();
    BatchPutDocumentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchPutDocumentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of documents that were not added to the index because the document
     * failed a validation check. Each document contains an error message that
     * indicates why the document couldn't be added to the index.</p> <p>If there was
     * an error adding a document to an index the error is reported in your AWS
     * CloudWatch log.</p>
     */
    inline const Aws::Vector<BatchPutDocumentResponseFailedDocument>& GetFailedDocuments() const{ return m_failedDocuments; }

    /**
     * <p>A list of documents that were not added to the index because the document
     * failed a validation check. Each document contains an error message that
     * indicates why the document couldn't be added to the index.</p> <p>If there was
     * an error adding a document to an index the error is reported in your AWS
     * CloudWatch log.</p>
     */
    inline void SetFailedDocuments(const Aws::Vector<BatchPutDocumentResponseFailedDocument>& value) { m_failedDocuments = value; }

    /**
     * <p>A list of documents that were not added to the index because the document
     * failed a validation check. Each document contains an error message that
     * indicates why the document couldn't be added to the index.</p> <p>If there was
     * an error adding a document to an index the error is reported in your AWS
     * CloudWatch log.</p>
     */
    inline void SetFailedDocuments(Aws::Vector<BatchPutDocumentResponseFailedDocument>&& value) { m_failedDocuments = std::move(value); }

    /**
     * <p>A list of documents that were not added to the index because the document
     * failed a validation check. Each document contains an error message that
     * indicates why the document couldn't be added to the index.</p> <p>If there was
     * an error adding a document to an index the error is reported in your AWS
     * CloudWatch log.</p>
     */
    inline BatchPutDocumentResult& WithFailedDocuments(const Aws::Vector<BatchPutDocumentResponseFailedDocument>& value) { SetFailedDocuments(value); return *this;}

    /**
     * <p>A list of documents that were not added to the index because the document
     * failed a validation check. Each document contains an error message that
     * indicates why the document couldn't be added to the index.</p> <p>If there was
     * an error adding a document to an index the error is reported in your AWS
     * CloudWatch log.</p>
     */
    inline BatchPutDocumentResult& WithFailedDocuments(Aws::Vector<BatchPutDocumentResponseFailedDocument>&& value) { SetFailedDocuments(std::move(value)); return *this;}

    /**
     * <p>A list of documents that were not added to the index because the document
     * failed a validation check. Each document contains an error message that
     * indicates why the document couldn't be added to the index.</p> <p>If there was
     * an error adding a document to an index the error is reported in your AWS
     * CloudWatch log.</p>
     */
    inline BatchPutDocumentResult& AddFailedDocuments(const BatchPutDocumentResponseFailedDocument& value) { m_failedDocuments.push_back(value); return *this; }

    /**
     * <p>A list of documents that were not added to the index because the document
     * failed a validation check. Each document contains an error message that
     * indicates why the document couldn't be added to the index.</p> <p>If there was
     * an error adding a document to an index the error is reported in your AWS
     * CloudWatch log.</p>
     */
    inline BatchPutDocumentResult& AddFailedDocuments(BatchPutDocumentResponseFailedDocument&& value) { m_failedDocuments.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BatchPutDocumentResponseFailedDocument> m_failedDocuments;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
