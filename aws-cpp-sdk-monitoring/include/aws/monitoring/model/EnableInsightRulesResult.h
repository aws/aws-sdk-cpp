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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/ResponseMetadata.h>
#include <aws/monitoring/model/PartialFailure.h>
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
  class AWS_CLOUDWATCH_API EnableInsightRulesResult
  {
  public:
    EnableInsightRulesResult();
    EnableInsightRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    EnableInsightRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>An array listing the rules that could not be enabled. You cannot disable or
     * enable built-in rules.</p>
     */
    inline const Aws::Vector<PartialFailure>& GetFailures() const{ return m_failures; }

    /**
     * <p>An array listing the rules that could not be enabled. You cannot disable or
     * enable built-in rules.</p>
     */
    inline void SetFailures(const Aws::Vector<PartialFailure>& value) { m_failures = value; }

    /**
     * <p>An array listing the rules that could not be enabled. You cannot disable or
     * enable built-in rules.</p>
     */
    inline void SetFailures(Aws::Vector<PartialFailure>&& value) { m_failures = std::move(value); }

    /**
     * <p>An array listing the rules that could not be enabled. You cannot disable or
     * enable built-in rules.</p>
     */
    inline EnableInsightRulesResult& WithFailures(const Aws::Vector<PartialFailure>& value) { SetFailures(value); return *this;}

    /**
     * <p>An array listing the rules that could not be enabled. You cannot disable or
     * enable built-in rules.</p>
     */
    inline EnableInsightRulesResult& WithFailures(Aws::Vector<PartialFailure>&& value) { SetFailures(std::move(value)); return *this;}

    /**
     * <p>An array listing the rules that could not be enabled. You cannot disable or
     * enable built-in rules.</p>
     */
    inline EnableInsightRulesResult& AddFailures(const PartialFailure& value) { m_failures.push_back(value); return *this; }

    /**
     * <p>An array listing the rules that could not be enabled. You cannot disable or
     * enable built-in rules.</p>
     */
    inline EnableInsightRulesResult& AddFailures(PartialFailure&& value) { m_failures.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline EnableInsightRulesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline EnableInsightRulesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<PartialFailure> m_failures;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
