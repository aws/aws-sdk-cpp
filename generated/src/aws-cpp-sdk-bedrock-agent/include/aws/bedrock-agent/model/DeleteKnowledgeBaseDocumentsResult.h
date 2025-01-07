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
  class DeleteKnowledgeBaseDocumentsResult
  {
  public:
    AWS_BEDROCKAGENT_API DeleteKnowledgeBaseDocumentsResult();
    AWS_BEDROCKAGENT_API DeleteKnowledgeBaseDocumentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API DeleteKnowledgeBaseDocumentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of objects, each of which contains information about the documents
     * that were deleted.</p>
     */
    inline const Aws::Vector<KnowledgeBaseDocumentDetail>& GetDocumentDetails() const{ return m_documentDetails; }
    inline void SetDocumentDetails(const Aws::Vector<KnowledgeBaseDocumentDetail>& value) { m_documentDetails = value; }
    inline void SetDocumentDetails(Aws::Vector<KnowledgeBaseDocumentDetail>&& value) { m_documentDetails = std::move(value); }
    inline DeleteKnowledgeBaseDocumentsResult& WithDocumentDetails(const Aws::Vector<KnowledgeBaseDocumentDetail>& value) { SetDocumentDetails(value); return *this;}
    inline DeleteKnowledgeBaseDocumentsResult& WithDocumentDetails(Aws::Vector<KnowledgeBaseDocumentDetail>&& value) { SetDocumentDetails(std::move(value)); return *this;}
    inline DeleteKnowledgeBaseDocumentsResult& AddDocumentDetails(const KnowledgeBaseDocumentDetail& value) { m_documentDetails.push_back(value); return *this; }
    inline DeleteKnowledgeBaseDocumentsResult& AddDocumentDetails(KnowledgeBaseDocumentDetail&& value) { m_documentDetails.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteKnowledgeBaseDocumentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteKnowledgeBaseDocumentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteKnowledgeBaseDocumentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<KnowledgeBaseDocumentDetail> m_documentDetails;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
