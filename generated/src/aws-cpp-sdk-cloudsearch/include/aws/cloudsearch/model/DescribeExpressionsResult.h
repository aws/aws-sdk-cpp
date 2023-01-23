/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudsearch/model/ResponseMetadata.h>
#include <aws/cloudsearch/model/ExpressionStatus.h>
#include <utility>

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
   * expressions configured for the domain specified in the request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeExpressionsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeExpressionsResult
  {
  public:
    AWS_CLOUDSEARCH_API DescribeExpressionsResult();
    AWS_CLOUDSEARCH_API DescribeExpressionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDSEARCH_API DescribeExpressionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline void SetExpressions(Aws::Vector<ExpressionStatus>&& value) { m_expressions = std::move(value); }

    /**
     * <p>The expressions configured for the domain.</p>
     */
    inline DescribeExpressionsResult& WithExpressions(const Aws::Vector<ExpressionStatus>& value) { SetExpressions(value); return *this;}

    /**
     * <p>The expressions configured for the domain.</p>
     */
    inline DescribeExpressionsResult& WithExpressions(Aws::Vector<ExpressionStatus>&& value) { SetExpressions(std::move(value)); return *this;}

    /**
     * <p>The expressions configured for the domain.</p>
     */
    inline DescribeExpressionsResult& AddExpressions(const ExpressionStatus& value) { m_expressions.push_back(value); return *this; }

    /**
     * <p>The expressions configured for the domain.</p>
     */
    inline DescribeExpressionsResult& AddExpressions(ExpressionStatus&& value) { m_expressions.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeExpressionsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeExpressionsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<ExpressionStatus> m_expressions;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
