/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/DocumentClassificationJobProperties.h>
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
  class DescribeDocumentClassificationJobResult
  {
  public:
    AWS_COMPREHEND_API DescribeDocumentClassificationJobResult() = default;
    AWS_COMPREHEND_API DescribeDocumentClassificationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DescribeDocumentClassificationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that describes the properties associated with the document
     * classification job.</p>
     */
    inline const DocumentClassificationJobProperties& GetDocumentClassificationJobProperties() const { return m_documentClassificationJobProperties; }
    template<typename DocumentClassificationJobPropertiesT = DocumentClassificationJobProperties>
    void SetDocumentClassificationJobProperties(DocumentClassificationJobPropertiesT&& value) { m_documentClassificationJobPropertiesHasBeenSet = true; m_documentClassificationJobProperties = std::forward<DocumentClassificationJobPropertiesT>(value); }
    template<typename DocumentClassificationJobPropertiesT = DocumentClassificationJobProperties>
    DescribeDocumentClassificationJobResult& WithDocumentClassificationJobProperties(DocumentClassificationJobPropertiesT&& value) { SetDocumentClassificationJobProperties(std::forward<DocumentClassificationJobPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDocumentClassificationJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DocumentClassificationJobProperties m_documentClassificationJobProperties;
    bool m_documentClassificationJobPropertiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
