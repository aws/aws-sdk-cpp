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
    AWS_CLOUDSEARCH_API DescribeExpressionsResult() = default;
    AWS_CLOUDSEARCH_API DescribeExpressionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDSEARCH_API DescribeExpressionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The expressions configured for the domain.</p>
     */
    inline const Aws::Vector<ExpressionStatus>& GetExpressions() const { return m_expressions; }
    template<typename ExpressionsT = Aws::Vector<ExpressionStatus>>
    void SetExpressions(ExpressionsT&& value) { m_expressionsHasBeenSet = true; m_expressions = std::forward<ExpressionsT>(value); }
    template<typename ExpressionsT = Aws::Vector<ExpressionStatus>>
    DescribeExpressionsResult& WithExpressions(ExpressionsT&& value) { SetExpressions(std::forward<ExpressionsT>(value)); return *this;}
    template<typename ExpressionsT = ExpressionStatus>
    DescribeExpressionsResult& AddExpressions(ExpressionsT&& value) { m_expressionsHasBeenSet = true; m_expressions.emplace_back(std::forward<ExpressionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeExpressionsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ExpressionStatus> m_expressions;
    bool m_expressionsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
