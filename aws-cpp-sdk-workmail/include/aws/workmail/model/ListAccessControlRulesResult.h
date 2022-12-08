/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListAccessControlRulesResult
  {
  public:
    AWS_WORKMAIL_API ListAccessControlRulesResult();
    AWS_WORKMAIL_API ListAccessControlRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API ListAccessControlRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
