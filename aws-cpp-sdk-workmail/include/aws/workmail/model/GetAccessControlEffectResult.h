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
#include <aws/workmail/model/AccessControlRuleEffect.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace WorkMail
{
namespace Model
{
  class AWS_WORKMAIL_API GetAccessControlEffectResult
  {
  public:
    GetAccessControlEffectResult();
    GetAccessControlEffectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetAccessControlEffectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The rule effect.</p>
     */
    inline const AccessControlRuleEffect& GetEffect() const{ return m_effect; }

    /**
     * <p>The rule effect.</p>
     */
    inline void SetEffect(const AccessControlRuleEffect& value) { m_effect = value; }

    /**
     * <p>The rule effect.</p>
     */
    inline void SetEffect(AccessControlRuleEffect&& value) { m_effect = std::move(value); }

    /**
     * <p>The rule effect.</p>
     */
    inline GetAccessControlEffectResult& WithEffect(const AccessControlRuleEffect& value) { SetEffect(value); return *this;}

    /**
     * <p>The rule effect.</p>
     */
    inline GetAccessControlEffectResult& WithEffect(AccessControlRuleEffect&& value) { SetEffect(std::move(value)); return *this;}


    /**
     * <p>The rules that match the given parameters, resulting in an effect.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMatchedRules() const{ return m_matchedRules; }

    /**
     * <p>The rules that match the given parameters, resulting in an effect.</p>
     */
    inline void SetMatchedRules(const Aws::Vector<Aws::String>& value) { m_matchedRules = value; }

    /**
     * <p>The rules that match the given parameters, resulting in an effect.</p>
     */
    inline void SetMatchedRules(Aws::Vector<Aws::String>&& value) { m_matchedRules = std::move(value); }

    /**
     * <p>The rules that match the given parameters, resulting in an effect.</p>
     */
    inline GetAccessControlEffectResult& WithMatchedRules(const Aws::Vector<Aws::String>& value) { SetMatchedRules(value); return *this;}

    /**
     * <p>The rules that match the given parameters, resulting in an effect.</p>
     */
    inline GetAccessControlEffectResult& WithMatchedRules(Aws::Vector<Aws::String>&& value) { SetMatchedRules(std::move(value)); return *this;}

    /**
     * <p>The rules that match the given parameters, resulting in an effect.</p>
     */
    inline GetAccessControlEffectResult& AddMatchedRules(const Aws::String& value) { m_matchedRules.push_back(value); return *this; }

    /**
     * <p>The rules that match the given parameters, resulting in an effect.</p>
     */
    inline GetAccessControlEffectResult& AddMatchedRules(Aws::String&& value) { m_matchedRules.push_back(std::move(value)); return *this; }

    /**
     * <p>The rules that match the given parameters, resulting in an effect.</p>
     */
    inline GetAccessControlEffectResult& AddMatchedRules(const char* value) { m_matchedRules.push_back(value); return *this; }

  private:

    AccessControlRuleEffect m_effect;

    Aws::Vector<Aws::String> m_matchedRules;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
