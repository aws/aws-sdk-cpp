/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/SipRule.h>
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
namespace Chime
{
namespace Model
{
  class CreateSipRuleResult
  {
  public:
    AWS_CHIME_API CreateSipRuleResult();
    AWS_CHIME_API CreateSipRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API CreateSipRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns the SIP rule information, including the rule ID, triggers, and target
     * applications.</p>
     */
    inline const SipRule& GetSipRule() const{ return m_sipRule; }

    /**
     * <p>Returns the SIP rule information, including the rule ID, triggers, and target
     * applications.</p>
     */
    inline void SetSipRule(const SipRule& value) { m_sipRule = value; }

    /**
     * <p>Returns the SIP rule information, including the rule ID, triggers, and target
     * applications.</p>
     */
    inline void SetSipRule(SipRule&& value) { m_sipRule = std::move(value); }

    /**
     * <p>Returns the SIP rule information, including the rule ID, triggers, and target
     * applications.</p>
     */
    inline CreateSipRuleResult& WithSipRule(const SipRule& value) { SetSipRule(value); return *this;}

    /**
     * <p>Returns the SIP rule information, including the rule ID, triggers, and target
     * applications.</p>
     */
    inline CreateSipRuleResult& WithSipRule(SipRule&& value) { SetSipRule(std::move(value)); return *this;}

  private:

    SipRule m_sipRule;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
