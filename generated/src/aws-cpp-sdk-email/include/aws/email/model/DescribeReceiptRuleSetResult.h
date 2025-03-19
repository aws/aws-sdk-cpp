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
    AWS_SES_API DescribeReceiptRuleSetResult() = default;
    AWS_SES_API DescribeReceiptRuleSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SES_API DescribeReceiptRuleSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The metadata for the receipt rule set, which consists of the rule set name
     * and the timestamp of when the rule set was created.</p>
     */
    inline const ReceiptRuleSetMetadata& GetMetadata() const { return m_metadata; }
    template<typename MetadataT = ReceiptRuleSetMetadata>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = ReceiptRuleSetMetadata>
    DescribeReceiptRuleSetResult& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the receipt rules that belong to the specified receipt rule
     * set.</p>
     */
    inline const Aws::Vector<ReceiptRule>& GetRules() const { return m_rules; }
    template<typename RulesT = Aws::Vector<ReceiptRule>>
    void SetRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules = std::forward<RulesT>(value); }
    template<typename RulesT = Aws::Vector<ReceiptRule>>
    DescribeReceiptRuleSetResult& WithRules(RulesT&& value) { SetRules(std::forward<RulesT>(value)); return *this;}
    template<typename RulesT = ReceiptRule>
    DescribeReceiptRuleSetResult& AddRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules.emplace_back(std::forward<RulesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeReceiptRuleSetResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    ReceiptRuleSetMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::Vector<ReceiptRule> m_rules;
    bool m_rulesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
