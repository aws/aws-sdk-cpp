/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/SipRule.h>
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
namespace ChimeSDKVoice
{
namespace Model
{
  class ListSipRulesResult
  {
  public:
    AWS_CHIMESDKVOICE_API ListSipRulesResult();
    AWS_CHIMESDKVOICE_API ListSipRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API ListSipRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of SIP rules and details.</p>
     */
    inline const Aws::Vector<SipRule>& GetSipRules() const{ return m_sipRules; }

    /**
     * <p>The list of SIP rules and details.</p>
     */
    inline void SetSipRules(const Aws::Vector<SipRule>& value) { m_sipRules = value; }

    /**
     * <p>The list of SIP rules and details.</p>
     */
    inline void SetSipRules(Aws::Vector<SipRule>&& value) { m_sipRules = std::move(value); }

    /**
     * <p>The list of SIP rules and details.</p>
     */
    inline ListSipRulesResult& WithSipRules(const Aws::Vector<SipRule>& value) { SetSipRules(value); return *this;}

    /**
     * <p>The list of SIP rules and details.</p>
     */
    inline ListSipRulesResult& WithSipRules(Aws::Vector<SipRule>&& value) { SetSipRules(std::move(value)); return *this;}

    /**
     * <p>The list of SIP rules and details.</p>
     */
    inline ListSipRulesResult& AddSipRules(const SipRule& value) { m_sipRules.push_back(value); return *this; }

    /**
     * <p>The list of SIP rules and details.</p>
     */
    inline ListSipRulesResult& AddSipRules(SipRule&& value) { m_sipRules.push_back(std::move(value)); return *this; }


    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline ListSipRulesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline ListSipRulesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline ListSipRulesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListSipRulesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListSipRulesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListSipRulesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<SipRule> m_sipRules;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
