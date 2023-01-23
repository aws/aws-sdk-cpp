/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/model/ReceiptRule.h>
#include <aws/email/model/ResponseMetadata.h>
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
namespace SES
{
namespace Model
{
  /**
   * <p>Represents the details of a receipt rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DescribeReceiptRuleResponse">AWS
   * API Reference</a></p>
   */
  class DescribeReceiptRuleResult
  {
  public:
    AWS_SES_API DescribeReceiptRuleResult();
    AWS_SES_API DescribeReceiptRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SES_API DescribeReceiptRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A data structure that contains the specified receipt rule's name, actions,
     * recipients, domains, enabled status, scan status, and Transport Layer Security
     * (TLS) policy.</p>
     */
    inline const ReceiptRule& GetRule() const{ return m_rule; }

    /**
     * <p>A data structure that contains the specified receipt rule's name, actions,
     * recipients, domains, enabled status, scan status, and Transport Layer Security
     * (TLS) policy.</p>
     */
    inline void SetRule(const ReceiptRule& value) { m_rule = value; }

    /**
     * <p>A data structure that contains the specified receipt rule's name, actions,
     * recipients, domains, enabled status, scan status, and Transport Layer Security
     * (TLS) policy.</p>
     */
    inline void SetRule(ReceiptRule&& value) { m_rule = std::move(value); }

    /**
     * <p>A data structure that contains the specified receipt rule's name, actions,
     * recipients, domains, enabled status, scan status, and Transport Layer Security
     * (TLS) policy.</p>
     */
    inline DescribeReceiptRuleResult& WithRule(const ReceiptRule& value) { SetRule(value); return *this;}

    /**
     * <p>A data structure that contains the specified receipt rule's name, actions,
     * recipients, domains, enabled status, scan status, and Transport Layer Security
     * (TLS) policy.</p>
     */
    inline DescribeReceiptRuleResult& WithRule(ReceiptRule&& value) { SetRule(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeReceiptRuleResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeReceiptRuleResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    ReceiptRule m_rule;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
