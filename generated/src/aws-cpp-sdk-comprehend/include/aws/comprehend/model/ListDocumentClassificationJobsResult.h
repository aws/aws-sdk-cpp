/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/DocumentClassificationJobProperties.h>
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
  class ListDocumentClassificationJobsResult
  {
  public:
    AWS_COMPREHEND_API ListDocumentClassificationJobsResult() = default;
    AWS_COMPREHEND_API ListDocumentClassificationJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API ListDocumentClassificationJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list containing the properties of each job returned.</p>
     */
    inline const Aws::Vector<DocumentClassificationJobProperties>& GetDocumentClassificationJobPropertiesList() const { return m_documentClassificationJobPropertiesList; }
    template<typename DocumentClassificationJobPropertiesListT = Aws::Vector<DocumentClassificationJobProperties>>
    void SetDocumentClassificationJobPropertiesList(DocumentClassificationJobPropertiesListT&& value) { m_documentClassificationJobPropertiesListHasBeenSet = true; m_documentClassificationJobPropertiesList = std::forward<DocumentClassificationJobPropertiesListT>(value); }
    template<typename DocumentClassificationJobPropertiesListT = Aws::Vector<DocumentClassificationJobProperties>>
    ListDocumentClassificationJobsResult& WithDocumentClassificationJobPropertiesList(DocumentClassificationJobPropertiesListT&& value) { SetDocumentClassificationJobPropertiesList(std::forward<DocumentClassificationJobPropertiesListT>(value)); return *this;}
    template<typename DocumentClassificationJobPropertiesListT = DocumentClassificationJobProperties>
    ListDocumentClassificationJobsResult& AddDocumentClassificationJobPropertiesList(DocumentClassificationJobPropertiesListT&& value) { m_documentClassificationJobPropertiesListHasBeenSet = true; m_documentClassificationJobPropertiesList.emplace_back(std::forward<DocumentClassificationJobPropertiesListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDocumentClassificationJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDocumentClassificationJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DocumentClassificationJobProperties> m_documentClassificationJobPropertiesList;
    bool m_documentClassificationJobPropertiesListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
