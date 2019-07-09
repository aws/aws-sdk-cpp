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
#include <aws/config/model/OrganizationConfigRuleStatus.h>
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
  class AWS_CONFIGSERVICE_API DescribeOrganizationConfigRuleStatusesResult
  {
  public:
    DescribeOrganizationConfigRuleStatusesResult();
    DescribeOrganizationConfigRuleStatusesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeOrganizationConfigRuleStatusesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<OrganizationConfigRuleStatus>& GetOrganizationConfigRuleStatuses() const{ return m_organizationConfigRuleStatuses; }

    
    inline void SetOrganizationConfigRuleStatuses(const Aws::Vector<OrganizationConfigRuleStatus>& value) { m_organizationConfigRuleStatuses = value; }

    
    inline void SetOrganizationConfigRuleStatuses(Aws::Vector<OrganizationConfigRuleStatus>&& value) { m_organizationConfigRuleStatuses = std::move(value); }

    
    inline DescribeOrganizationConfigRuleStatusesResult& WithOrganizationConfigRuleStatuses(const Aws::Vector<OrganizationConfigRuleStatus>& value) { SetOrganizationConfigRuleStatuses(value); return *this;}

    
    inline DescribeOrganizationConfigRuleStatusesResult& WithOrganizationConfigRuleStatuses(Aws::Vector<OrganizationConfigRuleStatus>&& value) { SetOrganizationConfigRuleStatuses(std::move(value)); return *this;}

    
    inline DescribeOrganizationConfigRuleStatusesResult& AddOrganizationConfigRuleStatuses(const OrganizationConfigRuleStatus& value) { m_organizationConfigRuleStatuses.push_back(value); return *this; }

    
    inline DescribeOrganizationConfigRuleStatusesResult& AddOrganizationConfigRuleStatuses(OrganizationConfigRuleStatus&& value) { m_organizationConfigRuleStatuses.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline DescribeOrganizationConfigRuleStatusesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeOrganizationConfigRuleStatusesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribeOrganizationConfigRuleStatusesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<OrganizationConfigRuleStatus> m_organizationConfigRuleStatuses;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
