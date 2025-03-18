/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/DocumentClassifierProperties.h>
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
  class ListDocumentClassifiersResult
  {
  public:
    AWS_COMPREHEND_API ListDocumentClassifiersResult() = default;
    AWS_COMPREHEND_API ListDocumentClassifiersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API ListDocumentClassifiersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list containing the properties of each job returned.</p>
     */
    inline const Aws::Vector<DocumentClassifierProperties>& GetDocumentClassifierPropertiesList() const { return m_documentClassifierPropertiesList; }
    template<typename DocumentClassifierPropertiesListT = Aws::Vector<DocumentClassifierProperties>>
    void SetDocumentClassifierPropertiesList(DocumentClassifierPropertiesListT&& value) { m_documentClassifierPropertiesListHasBeenSet = true; m_documentClassifierPropertiesList = std::forward<DocumentClassifierPropertiesListT>(value); }
    template<typename DocumentClassifierPropertiesListT = Aws::Vector<DocumentClassifierProperties>>
    ListDocumentClassifiersResult& WithDocumentClassifierPropertiesList(DocumentClassifierPropertiesListT&& value) { SetDocumentClassifierPropertiesList(std::forward<DocumentClassifierPropertiesListT>(value)); return *this;}
    template<typename DocumentClassifierPropertiesListT = DocumentClassifierProperties>
    ListDocumentClassifiersResult& AddDocumentClassifierPropertiesList(DocumentClassifierPropertiesListT&& value) { m_documentClassifierPropertiesListHasBeenSet = true; m_documentClassifierPropertiesList.emplace_back(std::forward<DocumentClassifierPropertiesListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDocumentClassifiersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDocumentClassifiersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DocumentClassifierProperties> m_documentClassifierPropertiesList;
    bool m_documentClassifierPropertiesListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
