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
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workmail/model/AccessControlRule.h>
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
namespace WorkMail
{
namespace Model
{
  class AWS_WORKMAIL_API ListAccessControlRulesResult
  {
  public:
    ListAccessControlRulesResult();
    ListAccessControlRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListAccessControlRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The access control rules.</p>
     */
    inline const Aws::Vector<AccessControlRule>& GetRules() const{ return m_rules; }

    /**
     * <p>The access control rules.</p>
     */
    inline void SetRules(const Aws::Vector<AccessControlRule>& value) { m_rules = value; }

    /**
     * <p>The access control rules.</p>
     */
    inline void SetRules(Aws::Vector<AccessControlRule>&& value) { m_rules = std::move(value); }

    /**
     * <p>The access control rules.</p>
     */
    inline ListAccessControlRulesResult& WithRules(const Aws::Vector<AccessControlRule>& value) { SetRules(value); return *this;}

    /**
     * <p>The access control rules.</p>
     */
    inline ListAccessControlRulesResult& WithRules(Aws::Vector<AccessControlRule>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>The access control rules.</p>
     */
    inline ListAccessControlRulesResult& AddRules(const AccessControlRule& value) { m_rules.push_back(value); return *this; }

    /**
     * <p>The access control rules.</p>
     */
    inline ListAccessControlRulesResult& AddRules(AccessControlRule&& value) { m_rules.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AccessControlRule> m_rules;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
