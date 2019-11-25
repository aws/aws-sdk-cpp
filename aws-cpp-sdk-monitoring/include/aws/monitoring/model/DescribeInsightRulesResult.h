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
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/ResponseMetadata.h>
#include <aws/monitoring/model/InsightRule.h>
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
namespace CloudWatch
{
namespace Model
{
  class AWS_CLOUDWATCH_API DescribeInsightRulesResult
  {
  public:
    DescribeInsightRulesResult();
    DescribeInsightRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeInsightRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline DescribeInsightRulesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline DescribeInsightRulesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline DescribeInsightRulesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The rules returned by the operation.</p>
     */
    inline const Aws::Vector<InsightRule>& GetInsightRules() const{ return m_insightRules; }

    /**
     * <p>The rules returned by the operation.</p>
     */
    inline void SetInsightRules(const Aws::Vector<InsightRule>& value) { m_insightRules = value; }

    /**
     * <p>The rules returned by the operation.</p>
     */
    inline void SetInsightRules(Aws::Vector<InsightRule>&& value) { m_insightRules = std::move(value); }

    /**
     * <p>The rules returned by the operation.</p>
     */
    inline DescribeInsightRulesResult& WithInsightRules(const Aws::Vector<InsightRule>& value) { SetInsightRules(value); return *this;}

    /**
     * <p>The rules returned by the operation.</p>
     */
    inline DescribeInsightRulesResult& WithInsightRules(Aws::Vector<InsightRule>&& value) { SetInsightRules(std::move(value)); return *this;}

    /**
     * <p>The rules returned by the operation.</p>
     */
    inline DescribeInsightRulesResult& AddInsightRules(const InsightRule& value) { m_insightRules.push_back(value); return *this; }

    /**
     * <p>The rules returned by the operation.</p>
     */
    inline DescribeInsightRulesResult& AddInsightRules(InsightRule&& value) { m_insightRules.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeInsightRulesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeInsightRulesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<InsightRule> m_insightRules;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
