/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/DocumentClassifierProperties.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribeDocumentClassifierResult
  {
  public:
    AWS_COMPREHEND_API DescribeDocumentClassifierResult() = default;
    AWS_COMPREHEND_API DescribeDocumentClassifierResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DescribeDocumentClassifierResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains the properties associated with a document
     * classifier.</p>
     */
    inline const DocumentClassifierProperties& GetDocumentClassifierProperties() const { return m_documentClassifierProperties; }
    template<typename DocumentClassifierPropertiesT = DocumentClassifierProperties>
    void SetDocumentClassifierProperties(DocumentClassifierPropertiesT&& value) { m_documentClassifierPropertiesHasBeenSet = true; m_documentClassifierProperties = std::forward<DocumentClassifierPropertiesT>(value); }
    template<typename DocumentClassifierPropertiesT = DocumentClassifierProperties>
    DescribeDocumentClassifierResult& WithDocumentClassifierProperties(DocumentClassifierPropertiesT&& value) { SetDocumentClassifierProperties(std::forward<DocumentClassifierPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDocumentClassifierResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DocumentClassifierProperties m_documentClassifierProperties;
    bool m_documentClassifierPropertiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
