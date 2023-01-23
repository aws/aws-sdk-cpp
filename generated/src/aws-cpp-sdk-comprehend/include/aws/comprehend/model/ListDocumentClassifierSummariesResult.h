/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/DocumentClassifierSummary.h>
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
namespace Comprehend
{
namespace Model
{
  class ListDocumentClassifierSummariesResult
  {
  public:
    AWS_COMPREHEND_API ListDocumentClassifierSummariesResult();
    AWS_COMPREHEND_API ListDocumentClassifierSummariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API ListDocumentClassifierSummariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of summaries of document classifiers.</p>
     */
    inline const Aws::Vector<DocumentClassifierSummary>& GetDocumentClassifierSummariesList() const{ return m_documentClassifierSummariesList; }

    /**
     * <p>The list of summaries of document classifiers.</p>
     */
    inline void SetDocumentClassifierSummariesList(const Aws::Vector<DocumentClassifierSummary>& value) { m_documentClassifierSummariesList = value; }

    /**
     * <p>The list of summaries of document classifiers.</p>
     */
    inline void SetDocumentClassifierSummariesList(Aws::Vector<DocumentClassifierSummary>&& value) { m_documentClassifierSummariesList = std::move(value); }

    /**
     * <p>The list of summaries of document classifiers.</p>
     */
    inline ListDocumentClassifierSummariesResult& WithDocumentClassifierSummariesList(const Aws::Vector<DocumentClassifierSummary>& value) { SetDocumentClassifierSummariesList(value); return *this;}

    /**
     * <p>The list of summaries of document classifiers.</p>
     */
    inline ListDocumentClassifierSummariesResult& WithDocumentClassifierSummariesList(Aws::Vector<DocumentClassifierSummary>&& value) { SetDocumentClassifierSummariesList(std::move(value)); return *this;}

    /**
     * <p>The list of summaries of document classifiers.</p>
     */
    inline ListDocumentClassifierSummariesResult& AddDocumentClassifierSummariesList(const DocumentClassifierSummary& value) { m_documentClassifierSummariesList.push_back(value); return *this; }

    /**
     * <p>The list of summaries of document classifiers.</p>
     */
    inline ListDocumentClassifierSummariesResult& AddDocumentClassifierSummariesList(DocumentClassifierSummary&& value) { m_documentClassifierSummariesList.push_back(std::move(value)); return *this; }


    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListDocumentClassifierSummariesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListDocumentClassifierSummariesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListDocumentClassifierSummariesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DocumentClassifierSummary> m_documentClassifierSummariesList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
