﻿/**
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
   * <p>Represents the metadata and receipt rules for the receipt rule set that is
   * currently active.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DescribeActiveReceiptRuleSetResponse">AWS
   * API Reference</a></p>
   */
  class DescribeActiveReceiptRuleSetResult
  {
  public:
    AWS_SES_API DescribeActiveReceiptRuleSetResult();
    AWS_SES_API DescribeActiveReceiptRuleSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SES_API DescribeActiveReceiptRuleSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The metadata for the currently active receipt rule set. The metadata consists
     * of the rule set name and a timestamp of when the rule set was created.</p>
     */
    inline const ReceiptRuleSetMetadata& GetMetadata() const{ return m_metadata; }
    inline void SetMetadata(const ReceiptRuleSetMetadata& value) { m_metadata = value; }
    inline void SetMetadata(ReceiptRuleSetMetadata&& value) { m_metadata = std::move(value); }
    inline DescribeActiveReceiptRuleSetResult& WithMetadata(const ReceiptRuleSetMetadata& value) { SetMetadata(value); return *this;}
    inline DescribeActiveReceiptRuleSetResult& WithMetadata(ReceiptRuleSetMetadata&& value) { SetMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The receipt rules that belong to the active rule set.</p>
     */
    inline const Aws::Vector<ReceiptRule>& GetRules() const{ return m_rules; }
    inline void SetRules(const Aws::Vector<ReceiptRule>& value) { m_rules = value; }
    inline void SetRules(Aws::Vector<ReceiptRule>&& value) { m_rules = std::move(value); }
    inline DescribeActiveReceiptRuleSetResult& WithRules(const Aws::Vector<ReceiptRule>& value) { SetRules(value); return *this;}
    inline DescribeActiveReceiptRuleSetResult& WithRules(Aws::Vector<ReceiptRule>&& value) { SetRules(std::move(value)); return *this;}
    inline DescribeActiveReceiptRuleSetResult& AddRules(const ReceiptRule& value) { m_rules.push_back(value); return *this; }
    inline DescribeActiveReceiptRuleSetResult& AddRules(ReceiptRule&& value) { m_rules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeActiveReceiptRuleSetResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeActiveReceiptRuleSetResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    ReceiptRuleSetMetadata m_metadata;

    Aws::Vector<ReceiptRule> m_rules;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
