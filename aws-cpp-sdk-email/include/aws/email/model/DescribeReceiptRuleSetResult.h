/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  /*
    $shape.documentation
  */
  class AWS_SES_API DescribeReceiptRuleSetResult
  {
  public:
    DescribeReceiptRuleSetResult();
    DescribeReceiptRuleSetResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeReceiptRuleSetResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    
    inline const ReceiptRuleSetMetadata& GetMetadata() const{ return m_metadata; }
    
    inline void SetMetadata(const ReceiptRuleSetMetadata& value) { m_metadata = value; }

    
    inline DescribeReceiptRuleSetResult&  WithMetadata(const ReceiptRuleSetMetadata& value) { SetMetadata(value); return *this;}

    
    inline const Aws::Vector<ReceiptRule>& GetRules() const{ return m_rules; }
    
    inline void SetRules(const Aws::Vector<ReceiptRule>& value) { m_rules = value; }

    
    inline DescribeReceiptRuleSetResult&  WithRules(const Aws::Vector<ReceiptRule>& value) { SetRules(value); return *this;}

    
    inline DescribeReceiptRuleSetResult& AddRules(const ReceiptRule& value) { m_rules.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline DescribeReceiptRuleSetResult&  WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

  private:
    ReceiptRuleSetMetadata m_metadata;
    Aws::Vector<ReceiptRule> m_rules;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SES
} // namespace Aws