/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
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
  class CreateSipRuleResult
  {
  public:
    AWS_CHIMESDKVOICE_API CreateSipRuleResult();
    AWS_CHIMESDKVOICE_API CreateSipRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API CreateSipRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const SipRule& GetSipRule() const{ return m_sipRule; }

    
    inline void SetSipRule(const SipRule& value) { m_sipRule = value; }

    
    inline void SetSipRule(SipRule&& value) { m_sipRule = std::move(value); }

    
    inline CreateSipRuleResult& WithSipRule(const SipRule& value) { SetSipRule(value); return *this;}

    
    inline CreateSipRuleResult& WithSipRule(SipRule&& value) { SetSipRule(std::move(value)); return *this;}

  private:

    SipRule m_sipRule;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
