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
  class AWS_SES_API DescribeReceiptRuleResult
  {
  public:
    DescribeReceiptRuleResult();
    DescribeReceiptRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeReceiptRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
