/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
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
  class AWS_COMPREHEND_API DescribeDocumentClassificationJobResult
  {
  public:
    DescribeDocumentClassificationJobResult();
    DescribeDocumentClassificationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeDocumentClassificationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that describes the properties associated with the document
     * classification job.</p>
     */
    inline const DocumentClassificationJobProperties& GetDocumentClassificationJobProperties() const{ return m_documentClassificationJobProperties; }

    /**
     * <p>An object that describes the properties associated with the document
     * classification job.</p>
     */
    inline void SetDocumentClassificationJobProperties(const DocumentClassificationJobProperties& value) { m_documentClassificationJobProperties = value; }

    /**
     * <p>An object that describes the properties associated with the document
     * classification job.</p>
     */
    inline void SetDocumentClassificationJobProperties(DocumentClassificationJobProperties&& value) { m_documentClassificationJobProperties = std::move(value); }

    /**
     * <p>An object that describes the properties associated with the document
     * classification job.</p>
     */
    inline DescribeDocumentClassificationJobResult& WithDocumentClassificationJobProperties(const DocumentClassificationJobProperties& value) { SetDocumentClassificationJobProperties(value); return *this;}

    /**
     * <p>An object that describes the properties associated with the document
     * classification job.</p>
     */
    inline DescribeDocumentClassificationJobResult& WithDocumentClassificationJobProperties(DocumentClassificationJobProperties&& value) { SetDocumentClassificationJobProperties(std::move(value)); return *this;}

  private:

    DocumentClassificationJobProperties m_documentClassificationJobProperties;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
