/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/cloudsearch/model/ExpressionStatus.h>
#include <aws/cloudsearch/model/ResponseMetadata.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudSearch
{
namespace Model
{
  /**
   * <p>The result of a <code>DefineExpression</code> request. Contains the status of
   * the newly-configured expression.</p>
   */
  class AWS_CLOUDSEARCH_API DefineExpressionResult
  {
  public:
    DefineExpressionResult();
    DefineExpressionResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DefineExpressionResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    
    inline const ExpressionStatus& GetExpression() const{ return m_expression; }

    
    inline void SetExpression(const ExpressionStatus& value) { m_expression = value; }

    
    inline void SetExpression(ExpressionStatus&& value) { m_expression = value; }

    
    inline DefineExpressionResult& WithExpression(const ExpressionStatus& value) { SetExpression(value); return *this;}

    
    inline DefineExpressionResult& WithExpression(ExpressionStatus&& value) { SetExpression(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DefineExpressionResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DefineExpressionResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    ExpressionStatus m_expression;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws