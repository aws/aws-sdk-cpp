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
  class GetSipRuleResult
  {
  public:
    AWS_CHIME_API GetSipRuleResult();
    AWS_CHIME_API GetSipRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API GetSipRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The SIP rule details.</p>
     */
    inline const SipRule& GetSipRule() const{ return m_sipRule; }

    /**
     * <p>The SIP rule details.</p>
     */
    inline void SetSipRule(const SipRule& value) { m_sipRule = value; }

    /**
     * <p>The SIP rule details.</p>
     */
    inline void SetSipRule(SipRule&& value) { m_sipRule = std::move(value); }

    /**
     * <p>The SIP rule details.</p>
     */
    inline GetSipRuleResult& WithSipRule(const SipRule& value) { SetSipRule(value); return *this;}

    /**
     * <p>The SIP rule details.</p>
     */
    inline GetSipRuleResult& WithSipRule(SipRule&& value) { SetSipRule(std::move(value)); return *this;}

  private:

    SipRule m_sipRule;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
