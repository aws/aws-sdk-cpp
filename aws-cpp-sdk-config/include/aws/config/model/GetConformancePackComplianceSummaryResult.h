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
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ConformancePackComplianceSummary.h>
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
namespace ConfigService
{
namespace Model
{
  class AWS_CONFIGSERVICE_API GetConformancePackComplianceSummaryResult
  {
  public:
    GetConformancePackComplianceSummaryResult();
    GetConformancePackComplianceSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetConformancePackComplianceSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<ConformancePackComplianceSummary>& GetConformancePackComplianceSummaryList() const{ return m_conformancePackComplianceSummaryList; }

    
    inline void SetConformancePackComplianceSummaryList(const Aws::Vector<ConformancePackComplianceSummary>& value) { m_conformancePackComplianceSummaryList = value; }

    
    inline void SetConformancePackComplianceSummaryList(Aws::Vector<ConformancePackComplianceSummary>&& value) { m_conformancePackComplianceSummaryList = std::move(value); }

    
    inline GetConformancePackComplianceSummaryResult& WithConformancePackComplianceSummaryList(const Aws::Vector<ConformancePackComplianceSummary>& value) { SetConformancePackComplianceSummaryList(value); return *this;}

    
    inline GetConformancePackComplianceSummaryResult& WithConformancePackComplianceSummaryList(Aws::Vector<ConformancePackComplianceSummary>&& value) { SetConformancePackComplianceSummaryList(std::move(value)); return *this;}

    
    inline GetConformancePackComplianceSummaryResult& AddConformancePackComplianceSummaryList(const ConformancePackComplianceSummary& value) { m_conformancePackComplianceSummaryList.push_back(value); return *this; }

    
    inline GetConformancePackComplianceSummaryResult& AddConformancePackComplianceSummaryList(ConformancePackComplianceSummary&& value) { m_conformancePackComplianceSummaryList.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline GetConformancePackComplianceSummaryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline GetConformancePackComplianceSummaryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline GetConformancePackComplianceSummaryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ConformancePackComplianceSummary> m_conformancePackComplianceSummaryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
