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
#include <aws/kendra/model/BatchDeleteDocumentResponseFailedDocument.h>
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
  class AWS_KENDRA_API BatchDeleteDocumentResult
  {
  public:
    BatchDeleteDocumentResult();
    BatchDeleteDocumentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchDeleteDocumentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of documents that could not be removed from the index. Each entry
     * contains an error message that indicates why the document couldn't be removed
     * from the index.</p>
     */
    inline const Aws::Vector<BatchDeleteDocumentResponseFailedDocument>& GetFailedDocuments() const{ return m_failedDocuments; }

    /**
     * <p>A list of documents that could not be removed from the index. Each entry
     * contains an error message that indicates why the document couldn't be removed
     * from the index.</p>
     */
    inline void SetFailedDocuments(const Aws::Vector<BatchDeleteDocumentResponseFailedDocument>& value) { m_failedDocuments = value; }

    /**
     * <p>A list of documents that could not be removed from the index. Each entry
     * contains an error message that indicates why the document couldn't be removed
     * from the index.</p>
     */
    inline void SetFailedDocuments(Aws::Vector<BatchDeleteDocumentResponseFailedDocument>&& value) { m_failedDocuments = std::move(value); }

    /**
     * <p>A list of documents that could not be removed from the index. Each entry
     * contains an error message that indicates why the document couldn't be removed
     * from the index.</p>
     */
    inline BatchDeleteDocumentResult& WithFailedDocuments(const Aws::Vector<BatchDeleteDocumentResponseFailedDocument>& value) { SetFailedDocuments(value); return *this;}

    /**
     * <p>A list of documents that could not be removed from the index. Each entry
     * contains an error message that indicates why the document couldn't be removed
     * from the index.</p>
     */
    inline BatchDeleteDocumentResult& WithFailedDocuments(Aws::Vector<BatchDeleteDocumentResponseFailedDocument>&& value) { SetFailedDocuments(std::move(value)); return *this;}

    /**
     * <p>A list of documents that could not be removed from the index. Each entry
     * contains an error message that indicates why the document couldn't be removed
     * from the index.</p>
     */
    inline BatchDeleteDocumentResult& AddFailedDocuments(const BatchDeleteDocumentResponseFailedDocument& value) { m_failedDocuments.push_back(value); return *this; }

    /**
     * <p>A list of documents that could not be removed from the index. Each entry
     * contains an error message that indicates why the document couldn't be removed
     * from the index.</p>
     */
    inline BatchDeleteDocumentResult& AddFailedDocuments(BatchDeleteDocumentResponseFailedDocument&& value) { m_failedDocuments.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BatchDeleteDocumentResponseFailedDocument> m_failedDocuments;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
