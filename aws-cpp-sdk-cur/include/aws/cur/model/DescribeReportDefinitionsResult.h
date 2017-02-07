﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * Response of DescribeReportDefinitions<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cur-2017-01-06/DescribeReportDefinitionsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_COSTANDUSAGEREPORTSERVICE_API DescribeReportDefinitionsResult
  {
  public:
    DescribeReportDefinitionsResult();
    DescribeReportDefinitionsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeReportDefinitionsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::Vector<ReportDefinition>& GetReportDefinitions() const{ return m_reportDefinitions; }

    
    inline void SetReportDefinitions(const Aws::Vector<ReportDefinition>& value) { m_reportDefinitions = value; }

    
    inline void SetReportDefinitions(Aws::Vector<ReportDefinition>&& value) { m_reportDefinitions = value; }

    
    inline DescribeReportDefinitionsResult& WithReportDefinitions(const Aws::Vector<ReportDefinition>& value) { SetReportDefinitions(value); return *this;}

    
    inline DescribeReportDefinitionsResult& WithReportDefinitions(Aws::Vector<ReportDefinition>&& value) { SetReportDefinitions(value); return *this;}

    
    inline DescribeReportDefinitionsResult& AddReportDefinitions(const ReportDefinition& value) { m_reportDefinitions.push_back(value); return *this; }

    
    inline DescribeReportDefinitionsResult& AddReportDefinitions(ReportDefinition&& value) { m_reportDefinitions.push_back(value); return *this; }

    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline DescribeReportDefinitionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeReportDefinitionsResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    
    inline DescribeReportDefinitionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<ReportDefinition> m_reportDefinitions;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CostandUsageReportService
} // namespace Aws
