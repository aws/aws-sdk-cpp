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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudsearch/model/ResponseMetadata.h>
#include <aws/cloudsearch/model/ExpressionStatus.h>

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
   * <p>The result of a <code>DescribeExpressions</code> request. Contains the
   * expressions configured for the domain specified in the request.</p>
   */
  class AWS_CLOUDSEARCH_API DescribeExpressionsResult
  {
  public:
    DescribeExpressionsResult();
    DescribeExpressionsResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeExpressionsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>The expressions configured for the domain.</p>
     */
    inline const Aws::Vector<ExpressionStatus>& GetExpressions() const{ return m_expressions; }

    /**
     * <p>The expressions configured for the domain.</p>
     */
    inline void SetExpressions(const Aws::Vector<ExpressionStatus>& value) { m_expressions = value; }

    /**
     * <p>The expressions configured for the domain.</p>
     */
    inline void SetExpressions(Aws::Vector<ExpressionStatus>&& value) { m_expressions = value; }

    /**
     * <p>The expressions configured for the domain.</p>
     */
    inline DescribeExpressionsResult& WithExpressions(const Aws::Vector<ExpressionStatus>& value) { SetExpressions(value); return *this;}

    /**
     * <p>The expressions configured for the domain.</p>
     */
    inline DescribeExpressionsResult& WithExpressions(Aws::Vector<ExpressionStatus>&& value) { SetExpressions(value); return *this;}

    /**
     * <p>The expressions configured for the domain.</p>
     */
    inline DescribeExpressionsResult& AddExpressions(const ExpressionStatus& value) { m_expressions.push_back(value); return *this; }

    /**
     * <p>The expressions configured for the domain.</p>
     */
    inline DescribeExpressionsResult& AddExpressions(ExpressionStatus&& value) { m_expressions.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeExpressionsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeExpressionsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<ExpressionStatus> m_expressions;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws