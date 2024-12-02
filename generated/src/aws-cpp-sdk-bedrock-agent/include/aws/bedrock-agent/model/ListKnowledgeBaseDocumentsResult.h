/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/KnowledgeBaseDocumentDetail.h>
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
namespace BedrockAgent
{
namespace Model
{
  class ListKnowledgeBaseDocumentsResult
  {
  public:
    AWS_BEDROCKAGENT_API ListKnowledgeBaseDocumentsResult();
    AWS_BEDROCKAGENT_API ListKnowledgeBaseDocumentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API ListKnowledgeBaseDocumentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of objects, each of which contains information about the documents
     * that were retrieved.</p>
     */
    inline const Aws::Vector<KnowledgeBaseDocumentDetail>& GetDocumentDetails() const{ return m_documentDetails; }
    inline void SetDocumentDetails(const Aws::Vector<KnowledgeBaseDocumentDetail>& value) { m_documentDetails = value; }
    inline void SetDocumentDetails(Aws::Vector<KnowledgeBaseDocumentDetail>&& value) { m_documentDetails = std::move(value); }
    inline ListKnowledgeBaseDocumentsResult& WithDocumentDetails(const Aws::Vector<KnowledgeBaseDocumentDetail>& value) { SetDocumentDetails(value); return *this;}
    inline ListKnowledgeBaseDocumentsResult& WithDocumentDetails(Aws::Vector<KnowledgeBaseDocumentDetail>&& value) { SetDocumentDetails(std::move(value)); return *this;}
    inline ListKnowledgeBaseDocumentsResult& AddDocumentDetails(const KnowledgeBaseDocumentDetail& value) { m_documentDetails.push_back(value); return *this; }
    inline ListKnowledgeBaseDocumentsResult& AddDocumentDetails(KnowledgeBaseDocumentDetail&& value) { m_documentDetails.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the total number of results is greater than the <code>maxResults</code>
     * value provided in the request, use this token when making another request in the
     * <code>nextToken</code> field to return the next batch of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListKnowledgeBaseDocumentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListKnowledgeBaseDocumentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListKnowledgeBaseDocumentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListKnowledgeBaseDocumentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListKnowledgeBaseDocumentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListKnowledgeBaseDocumentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<KnowledgeBaseDocumentDetail> m_documentDetails;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
