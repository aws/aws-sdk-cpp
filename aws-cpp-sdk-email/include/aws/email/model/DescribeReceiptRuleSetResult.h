/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/model/ReceiptRuleSetMetadata.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/email/model/ResponseMetadata.h>
#include <aws/email/model/ReceiptRule.h>
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
   * <p>Represents the details of the specified receipt rule set.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DescribeReceiptRuleSetResponse">AWS
   * API Reference</a></p>
   */
  class DescribeReceiptRuleSetResult
  {
  public:
    AWS_SES_API DescribeReceiptRuleSetResult();
    AWS_SES_API DescribeReceiptRuleSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SES_API DescribeReceiptRuleSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The metadata for the receipt rule set, which consists of the rule set name
     * and the timestamp of when the rule set was created.</p>
     */
    inline const ReceiptRuleSetMetadata& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The metadata for the receipt rule set, which consists of the rule set name
     * and the timestamp of when the rule set was created.</p>
     */
    inline void SetMetadata(const ReceiptRuleSetMetadata& value) { m_metadata = value; }

    /**
     * <p>The metadata for the receipt rule set, which consists of the rule set name
     * and the timestamp of when the rule set was created.</p>
     */
    inline void SetMetadata(ReceiptRuleSetMetadata&& value) { m_metadata = std::move(value); }

    /**
     * <p>The metadata for the receipt rule set, which consists of the rule set name
     * and the timestamp of when the rule set was created.</p>
     */
    inline DescribeReceiptRuleSetResult& WithMetadata(const ReceiptRuleSetMetadata& value) { SetMetadata(value); return *this;}

    /**
     * <p>The metadata for the receipt rule set, which consists of the rule set name
     * and the timestamp of when the rule set was created.</p>
     */
    inline DescribeReceiptRuleSetResult& WithMetadata(ReceiptRuleSetMetadata&& value) { SetMetadata(std::move(value)); return *this;}


    /**
     * <p>A list of the receipt rules that belong to the specified receipt rule
     * set.</p>
     */
    inline const Aws::Vector<ReceiptRule>& GetRules() const{ return m_rules; }

    /**
     * <p>A list of the receipt rules that belong to the specified receipt rule
     * set.</p>
     */
    inline void SetRules(const Aws::Vector<ReceiptRule>& value) { m_rules = value; }

    /**
     * <p>A list of the receipt rules that belong to the specified receipt rule
     * set.</p>
     */
    inline void SetRules(Aws::Vector<ReceiptRule>&& value) { m_rules = std::move(value); }

    /**
     * <p>A list of the receipt rules that belong to the specified receipt rule
     * set.</p>
     */
    inline DescribeReceiptRuleSetResult& WithRules(const Aws::Vector<ReceiptRule>& value) { SetRules(value); return *this;}

    /**
     * <p>A list of the receipt rules that belong to the specified receipt rule
     * set.</p>
     */
    inline DescribeReceiptRuleSetResult& WithRules(Aws::Vector<ReceiptRule>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>A list of the receipt rules that belong to the specified receipt rule
     * set.</p>
     */
    inline DescribeReceiptRuleSetResult& AddRules(const ReceiptRule& value) { m_rules.push_back(value); return *this; }

    /**
     * <p>A list of the receipt rules that belong to the specified receipt rule
     * set.</p>
     */
    inline DescribeReceiptRuleSetResult& AddRules(ReceiptRule&& value) { m_rules.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeReceiptRuleSetResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeReceiptRuleSetResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    ReceiptRuleSetMetadata m_metadata;

    Aws::Vector<ReceiptRule> m_rules;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
