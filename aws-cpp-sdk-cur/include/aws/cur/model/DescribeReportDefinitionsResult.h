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
#include <aws/cur/CostandUsageReportService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cur/model/ReportDefinition.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CostandUsageReportService
{
namespace Model
{
  /**
   * <p>If the action is successful, the service sends back an HTTP 200
   * response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cur-2017-01-06/DescribeReportDefinitionsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_COSTANDUSAGEREPORTSERVICE_API DescribeReportDefinitionsResult
  {
  public:
    DescribeReportDefinitionsResult();
    DescribeReportDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeReportDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of AWS Cost and Usage reports owned by the account.</p>
     */
    inline const Aws::Vector<ReportDefinition>& GetReportDefinitions() const{ return m_reportDefinitions; }

    /**
     * <p>A list of AWS Cost and Usage reports owned by the account.</p>
     */
    inline void SetReportDefinitions(const Aws::Vector<ReportDefinition>& value) { m_reportDefinitions = value; }

    /**
     * <p>A list of AWS Cost and Usage reports owned by the account.</p>
     */
    inline void SetReportDefinitions(Aws::Vector<ReportDefinition>&& value) { m_reportDefinitions = std::move(value); }

    /**
     * <p>A list of AWS Cost and Usage reports owned by the account.</p>
     */
    inline DescribeReportDefinitionsResult& WithReportDefinitions(const Aws::Vector<ReportDefinition>& value) { SetReportDefinitions(value); return *this;}

    /**
     * <p>A list of AWS Cost and Usage reports owned by the account.</p>
     */
    inline DescribeReportDefinitionsResult& WithReportDefinitions(Aws::Vector<ReportDefinition>&& value) { SetReportDefinitions(std::move(value)); return *this;}

    /**
     * <p>A list of AWS Cost and Usage reports owned by the account.</p>
     */
    inline DescribeReportDefinitionsResult& AddReportDefinitions(const ReportDefinition& value) { m_reportDefinitions.push_back(value); return *this; }

    /**
     * <p>A list of AWS Cost and Usage reports owned by the account.</p>
     */
    inline DescribeReportDefinitionsResult& AddReportDefinitions(ReportDefinition&& value) { m_reportDefinitions.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline DescribeReportDefinitionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeReportDefinitionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribeReportDefinitionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ReportDefinition> m_reportDefinitions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CostandUsageReportService
} // namespace Aws
