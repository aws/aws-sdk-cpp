/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ListSipRulesResult
  {
  public:
    AWS_CHIME_API ListSipRulesResult();
    AWS_CHIME_API ListSipRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API ListSipRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of SIP rules and rule details.</p>
     */
    inline const Aws::Vector<SipRule>& GetSipRules() const{ return m_sipRules; }

    /**
     * <p>List of SIP rules and rule details.</p>
     */
    inline void SetSipRules(const Aws::Vector<SipRule>& value) { m_sipRules = value; }

    /**
     * <p>List of SIP rules and rule details.</p>
     */
    inline void SetSipRules(Aws::Vector<SipRule>&& value) { m_sipRules = std::move(value); }

    /**
     * <p>List of SIP rules and rule details.</p>
     */
    inline ListSipRulesResult& WithSipRules(const Aws::Vector<SipRule>& value) { SetSipRules(value); return *this;}

    /**
     * <p>List of SIP rules and rule details.</p>
     */
    inline ListSipRulesResult& WithSipRules(Aws::Vector<SipRule>&& value) { SetSipRules(std::move(value)); return *this;}

    /**
     * <p>List of SIP rules and rule details.</p>
     */
    inline ListSipRulesResult& AddSipRules(const SipRule& value) { m_sipRules.push_back(value); return *this; }

    /**
     * <p>List of SIP rules and rule details.</p>
     */
    inline ListSipRulesResult& AddSipRules(SipRule&& value) { m_sipRules.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListSipRulesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListSipRulesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListSipRulesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SipRule> m_sipRules;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
