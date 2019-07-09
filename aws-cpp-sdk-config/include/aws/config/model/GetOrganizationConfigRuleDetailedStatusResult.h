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
#include <aws/config/model/MemberAccountStatus.h>
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
  class AWS_CONFIGSERVICE_API GetOrganizationConfigRuleDetailedStatusResult
  {
  public:
    GetOrganizationConfigRuleDetailedStatusResult();
    GetOrganizationConfigRuleDetailedStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetOrganizationConfigRuleDetailedStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<MemberAccountStatus>& GetOrganizationConfigRuleDetailedStatus() const{ return m_organizationConfigRuleDetailedStatus; }

    
    inline void SetOrganizationConfigRuleDetailedStatus(const Aws::Vector<MemberAccountStatus>& value) { m_organizationConfigRuleDetailedStatus = value; }

    
    inline void SetOrganizationConfigRuleDetailedStatus(Aws::Vector<MemberAccountStatus>&& value) { m_organizationConfigRuleDetailedStatus = std::move(value); }

    
    inline GetOrganizationConfigRuleDetailedStatusResult& WithOrganizationConfigRuleDetailedStatus(const Aws::Vector<MemberAccountStatus>& value) { SetOrganizationConfigRuleDetailedStatus(value); return *this;}

    
    inline GetOrganizationConfigRuleDetailedStatusResult& WithOrganizationConfigRuleDetailedStatus(Aws::Vector<MemberAccountStatus>&& value) { SetOrganizationConfigRuleDetailedStatus(std::move(value)); return *this;}

    
    inline GetOrganizationConfigRuleDetailedStatusResult& AddOrganizationConfigRuleDetailedStatus(const MemberAccountStatus& value) { m_organizationConfigRuleDetailedStatus.push_back(value); return *this; }

    
    inline GetOrganizationConfigRuleDetailedStatusResult& AddOrganizationConfigRuleDetailedStatus(MemberAccountStatus&& value) { m_organizationConfigRuleDetailedStatus.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline GetOrganizationConfigRuleDetailedStatusResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline GetOrganizationConfigRuleDetailedStatusResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline GetOrganizationConfigRuleDetailedStatusResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<MemberAccountStatus> m_organizationConfigRuleDetailedStatus;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
