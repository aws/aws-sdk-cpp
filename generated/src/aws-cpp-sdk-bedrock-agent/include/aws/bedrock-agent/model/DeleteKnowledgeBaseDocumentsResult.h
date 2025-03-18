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
    AWS_BEDROCKAGENT_API DeleteKnowledgeBaseDocumentsResult() = default;
    AWS_BEDROCKAGENT_API DeleteKnowledgeBaseDocumentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API DeleteKnowledgeBaseDocumentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of objects, each of which contains information about the documents
     * that were deleted.</p>
     */
    inline const Aws::Vector<KnowledgeBaseDocumentDetail>& GetDocumentDetails() const { return m_documentDetails; }
    template<typename DocumentDetailsT = Aws::Vector<KnowledgeBaseDocumentDetail>>
    void SetDocumentDetails(DocumentDetailsT&& value) { m_documentDetailsHasBeenSet = true; m_documentDetails = std::forward<DocumentDetailsT>(value); }
    template<typename DocumentDetailsT = Aws::Vector<KnowledgeBaseDocumentDetail>>
    DeleteKnowledgeBaseDocumentsResult& WithDocumentDetails(DocumentDetailsT&& value) { SetDocumentDetails(std::forward<DocumentDetailsT>(value)); return *this;}
    template<typename DocumentDetailsT = KnowledgeBaseDocumentDetail>
    DeleteKnowledgeBaseDocumentsResult& AddDocumentDetails(DocumentDetailsT&& value) { m_documentDetailsHasBeenSet = true; m_documentDetails.emplace_back(std::forward<DocumentDetailsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteKnowledgeBaseDocumentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<KnowledgeBaseDocumentDetail> m_documentDetails;
    bool m_documentDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
