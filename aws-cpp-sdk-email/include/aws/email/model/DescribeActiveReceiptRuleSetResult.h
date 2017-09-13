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
  class AWS_SES_API DescribeActiveReceiptRuleSetResult
  {
  public:
    DescribeActiveReceiptRuleSetResult();
    DescribeActiveReceiptRuleSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeActiveReceiptRuleSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The metadata for the currently active receipt rule set. The metadata consists
     * of the rule set name and a timestamp of when the rule set was created.</p>
     */
    inline const ReceiptRuleSetMetadata& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The metadata for the currently active receipt rule set. The metadata consists
     * of the rule set name and a timestamp of when the rule set was created.</p>
     */
    inline void SetMetadata(const ReceiptRuleSetMetadata& value) { m_metadata = value; }

    /**
     * <p>The metadata for the currently active receipt rule set. The metadata consists
     * of the rule set name and a timestamp of when the rule set was created.</p>
     */
    inline void SetMetadata(ReceiptRuleSetMetadata&& value) { m_metadata = std::move(value); }

    /**
     * <p>The metadata for the currently active receipt rule set. The metadata consists
     * of the rule set name and a timestamp of when the rule set was created.</p>
     */
    inline DescribeActiveReceiptRuleSetResult& WithMetadata(const ReceiptRuleSetMetadata& value) { SetMetadata(value); return *this;}

    /**
     * <p>The metadata for the currently active receipt rule set. The metadata consists
     * of the rule set name and a timestamp of when the rule set was created.</p>
     */
    inline DescribeActiveReceiptRuleSetResult& WithMetadata(ReceiptRuleSetMetadata&& value) { SetMetadata(std::move(value)); return *this;}


    /**
     * <p>The receipt rules that belong to the active rule set.</p>
     */
    inline const Aws::Vector<ReceiptRule>& GetRules() const{ return m_rules; }

    /**
     * <p>The receipt rules that belong to the active rule set.</p>
     */
    inline void SetRules(const Aws::Vector<ReceiptRule>& value) { m_rules = value; }

    /**
     * <p>The receipt rules that belong to the active rule set.</p>
     */
    inline void SetRules(Aws::Vector<ReceiptRule>&& value) { m_rules = std::move(value); }

    /**
     * <p>The receipt rules that belong to the active rule set.</p>
     */
    inline DescribeActiveReceiptRuleSetResult& WithRules(const Aws::Vector<ReceiptRule>& value) { SetRules(value); return *this;}

    /**
     * <p>The receipt rules that belong to the active rule set.</p>
     */
    inline DescribeActiveReceiptRuleSetResult& WithRules(Aws::Vector<ReceiptRule>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>The receipt rules that belong to the active rule set.</p>
     */
    inline DescribeActiveReceiptRuleSetResult& AddRules(const ReceiptRule& value) { m_rules.push_back(value); return *this; }

    /**
     * <p>The receipt rules that belong to the active rule set.</p>
     */
    inline DescribeActiveReceiptRuleSetResult& AddRules(ReceiptRule&& value) { m_rules.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeActiveReceiptRuleSetResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeActiveReceiptRuleSetResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    ReceiptRuleSetMetadata m_metadata;

    Aws::Vector<ReceiptRule> m_rules;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
