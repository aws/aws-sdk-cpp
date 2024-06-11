﻿/**
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
    AWS_COMPREHEND_API DescribeDocumentClassificationJobResult();
    AWS_COMPREHEND_API DescribeDocumentClassificationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DescribeDocumentClassificationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that describes the properties associated with the document
     * classification job.</p>
     */
    inline const DocumentClassificationJobProperties& GetDocumentClassificationJobProperties() const{ return m_documentClassificationJobProperties; }
    inline void SetDocumentClassificationJobProperties(const DocumentClassificationJobProperties& value) { m_documentClassificationJobProperties = value; }
    inline void SetDocumentClassificationJobProperties(DocumentClassificationJobProperties&& value) { m_documentClassificationJobProperties = std::move(value); }
    inline DescribeDocumentClassificationJobResult& WithDocumentClassificationJobProperties(const DocumentClassificationJobProperties& value) { SetDocumentClassificationJobProperties(value); return *this;}
    inline DescribeDocumentClassificationJobResult& WithDocumentClassificationJobProperties(DocumentClassificationJobProperties&& value) { SetDocumentClassificationJobProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeDocumentClassificationJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeDocumentClassificationJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeDocumentClassificationJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DocumentClassificationJobProperties m_documentClassificationJobProperties;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
