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
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_CONFIGSERVICE_API PutOrganizationConfigRuleResult
  {
  public:
    PutOrganizationConfigRuleResult();
    PutOrganizationConfigRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutOrganizationConfigRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetOrganizationConfigRuleArn() const{ return m_organizationConfigRuleArn; }

    
    inline void SetOrganizationConfigRuleArn(const Aws::String& value) { m_organizationConfigRuleArn = value; }

    
    inline void SetOrganizationConfigRuleArn(Aws::String&& value) { m_organizationConfigRuleArn = std::move(value); }

    
    inline void SetOrganizationConfigRuleArn(const char* value) { m_organizationConfigRuleArn.assign(value); }

    
    inline PutOrganizationConfigRuleResult& WithOrganizationConfigRuleArn(const Aws::String& value) { SetOrganizationConfigRuleArn(value); return *this;}

    
    inline PutOrganizationConfigRuleResult& WithOrganizationConfigRuleArn(Aws::String&& value) { SetOrganizationConfigRuleArn(std::move(value)); return *this;}

    
    inline PutOrganizationConfigRuleResult& WithOrganizationConfigRuleArn(const char* value) { SetOrganizationConfigRuleArn(value); return *this;}

  private:

    Aws::String m_organizationConfigRuleArn;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
