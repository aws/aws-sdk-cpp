/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/SipRule.h>
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
namespace ChimeSDKVoice
{
namespace Model
{
  class GetSipRuleResult
  {
  public:
    AWS_CHIMESDKVOICE_API GetSipRuleResult();
    AWS_CHIMESDKVOICE_API GetSipRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API GetSipRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSipRuleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSipRuleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSipRuleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SipRule m_sipRule;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
