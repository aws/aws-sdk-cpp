/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/BatchGetDocumentStatusResponseError.h>
#include <aws/kendra/model/Status.h>
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
  class BatchGetDocumentStatusResult
  {
  public:
    AWS_KENDRA_API BatchGetDocumentStatusResult();
    AWS_KENDRA_API BatchGetDocumentStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API BatchGetDocumentStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of documents that Amazon Kendra couldn't get the status for. The list
     * includes the ID of the document and the reason that the status couldn't be
     * found.</p>
     */
    inline const Aws::Vector<BatchGetDocumentStatusResponseError>& GetErrors() const{ return m_errors; }

    /**
     * <p>A list of documents that Amazon Kendra couldn't get the status for. The list
     * includes the ID of the document and the reason that the status couldn't be
     * found.</p>
     */
    inline void SetErrors(const Aws::Vector<BatchGetDocumentStatusResponseError>& value) { m_errors = value; }

    /**
     * <p>A list of documents that Amazon Kendra couldn't get the status for. The list
     * includes the ID of the document and the reason that the status couldn't be
     * found.</p>
     */
    inline void SetErrors(Aws::Vector<BatchGetDocumentStatusResponseError>&& value) { m_errors = std::move(value); }

    /**
     * <p>A list of documents that Amazon Kendra couldn't get the status for. The list
     * includes the ID of the document and the reason that the status couldn't be
     * found.</p>
     */
    inline BatchGetDocumentStatusResult& WithErrors(const Aws::Vector<BatchGetDocumentStatusResponseError>& value) { SetErrors(value); return *this;}

    /**
     * <p>A list of documents that Amazon Kendra couldn't get the status for. The list
     * includes the ID of the document and the reason that the status couldn't be
     * found.</p>
     */
    inline BatchGetDocumentStatusResult& WithErrors(Aws::Vector<BatchGetDocumentStatusResponseError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>A list of documents that Amazon Kendra couldn't get the status for. The list
     * includes the ID of the document and the reason that the status couldn't be
     * found.</p>
     */
    inline BatchGetDocumentStatusResult& AddErrors(const BatchGetDocumentStatusResponseError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>A list of documents that Amazon Kendra couldn't get the status for. The list
     * includes the ID of the document and the reason that the status couldn't be
     * found.</p>
     */
    inline BatchGetDocumentStatusResult& AddErrors(BatchGetDocumentStatusResponseError&& value) { m_errors.push_back(std::move(value)); return *this; }


    /**
     * <p>The status of documents. The status indicates if the document is waiting to
     * be indexed, is in the process of indexing, has completed indexing, or failed
     * indexing. If a document failed indexing, the status provides the reason why.</p>
     */
    inline const Aws::Vector<Status>& GetDocumentStatusList() const{ return m_documentStatusList; }

    /**
     * <p>The status of documents. The status indicates if the document is waiting to
     * be indexed, is in the process of indexing, has completed indexing, or failed
     * indexing. If a document failed indexing, the status provides the reason why.</p>
     */
    inline void SetDocumentStatusList(const Aws::Vector<Status>& value) { m_documentStatusList = value; }

    /**
     * <p>The status of documents. The status indicates if the document is waiting to
     * be indexed, is in the process of indexing, has completed indexing, or failed
     * indexing. If a document failed indexing, the status provides the reason why.</p>
     */
    inline void SetDocumentStatusList(Aws::Vector<Status>&& value) { m_documentStatusList = std::move(value); }

    /**
     * <p>The status of documents. The status indicates if the document is waiting to
     * be indexed, is in the process of indexing, has completed indexing, or failed
     * indexing. If a document failed indexing, the status provides the reason why.</p>
     */
    inline BatchGetDocumentStatusResult& WithDocumentStatusList(const Aws::Vector<Status>& value) { SetDocumentStatusList(value); return *this;}

    /**
     * <p>The status of documents. The status indicates if the document is waiting to
     * be indexed, is in the process of indexing, has completed indexing, or failed
     * indexing. If a document failed indexing, the status provides the reason why.</p>
     */
    inline BatchGetDocumentStatusResult& WithDocumentStatusList(Aws::Vector<Status>&& value) { SetDocumentStatusList(std::move(value)); return *this;}

    /**
     * <p>The status of documents. The status indicates if the document is waiting to
     * be indexed, is in the process of indexing, has completed indexing, or failed
     * indexing. If a document failed indexing, the status provides the reason why.</p>
     */
    inline BatchGetDocumentStatusResult& AddDocumentStatusList(const Status& value) { m_documentStatusList.push_back(value); return *this; }

    /**
     * <p>The status of documents. The status indicates if the document is waiting to
     * be indexed, is in the process of indexing, has completed indexing, or failed
     * indexing. If a document failed indexing, the status provides the reason why.</p>
     */
    inline BatchGetDocumentStatusResult& AddDocumentStatusList(Status&& value) { m_documentStatusList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BatchGetDocumentStatusResponseError> m_errors;

    Aws::Vector<Status> m_documentStatusList;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
