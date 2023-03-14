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
    AWS_COMPREHEND_API DescribeDocumentClassifierResult();
    AWS_COMPREHEND_API DescribeDocumentClassifierResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DescribeDocumentClassifierResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that contains the properties associated with a document
     * classifier.</p>
     */
    inline const DocumentClassifierProperties& GetDocumentClassifierProperties() const{ return m_documentClassifierProperties; }

    /**
     * <p>An object that contains the properties associated with a document
     * classifier.</p>
     */
    inline void SetDocumentClassifierProperties(const DocumentClassifierProperties& value) { m_documentClassifierProperties = value; }

    /**
     * <p>An object that contains the properties associated with a document
     * classifier.</p>
     */
    inline void SetDocumentClassifierProperties(DocumentClassifierProperties&& value) { m_documentClassifierProperties = std::move(value); }

    /**
     * <p>An object that contains the properties associated with a document
     * classifier.</p>
     */
    inline DescribeDocumentClassifierResult& WithDocumentClassifierProperties(const DocumentClassifierProperties& value) { SetDocumentClassifierProperties(value); return *this;}

    /**
     * <p>An object that contains the properties associated with a document
     * classifier.</p>
     */
    inline DescribeDocumentClassifierResult& WithDocumentClassifierProperties(DocumentClassifierProperties&& value) { SetDocumentClassifierProperties(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeDocumentClassifierResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeDocumentClassifierResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeDocumentClassifierResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DocumentClassifierProperties m_documentClassifierProperties;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
