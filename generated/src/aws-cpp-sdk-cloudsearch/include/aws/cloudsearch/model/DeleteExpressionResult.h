/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/cloudsearch/model/ExpressionStatus.h>
#include <aws/cloudsearch/model/ResponseMetadata.h>
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
   * <p>The result of a <code><a>DeleteExpression</a></code> request. Specifies the
   * expression being deleted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DeleteExpressionResponse">AWS
   * API Reference</a></p>
   */
  class DeleteExpressionResult
  {
  public:
    AWS_CLOUDSEARCH_API DeleteExpressionResult();
    AWS_CLOUDSEARCH_API DeleteExpressionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDSEARCH_API DeleteExpressionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The status of the expression being deleted.</p>
     */
    inline const ExpressionStatus& GetExpression() const{ return m_expression; }

    /**
     * <p>The status of the expression being deleted.</p>
     */
    inline void SetExpression(const ExpressionStatus& value) { m_expression = value; }

    /**
     * <p>The status of the expression being deleted.</p>
     */
    inline void SetExpression(ExpressionStatus&& value) { m_expression = std::move(value); }

    /**
     * <p>The status of the expression being deleted.</p>
     */
    inline DeleteExpressionResult& WithExpression(const ExpressionStatus& value) { SetExpression(value); return *this;}

    /**
     * <p>The status of the expression being deleted.</p>
     */
    inline DeleteExpressionResult& WithExpression(ExpressionStatus&& value) { SetExpression(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteExpressionResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteExpressionResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    ExpressionStatus m_expression;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
