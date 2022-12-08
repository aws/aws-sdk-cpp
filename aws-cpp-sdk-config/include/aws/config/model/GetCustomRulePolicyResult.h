/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetCustomRulePolicyResult
  {
  public:
    AWS_CONFIGSERVICE_API GetCustomRulePolicyResult();
    AWS_CONFIGSERVICE_API GetCustomRulePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API GetCustomRulePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The policy definition containing the logic for your Config Custom Policy
     * rule.</p>
     */
    inline const Aws::String& GetPolicyText() const{ return m_policyText; }

    /**
     * <p>The policy definition containing the logic for your Config Custom Policy
     * rule.</p>
     */
    inline void SetPolicyText(const Aws::String& value) { m_policyText = value; }

    /**
     * <p>The policy definition containing the logic for your Config Custom Policy
     * rule.</p>
     */
    inline void SetPolicyText(Aws::String&& value) { m_policyText = std::move(value); }

    /**
     * <p>The policy definition containing the logic for your Config Custom Policy
     * rule.</p>
     */
    inline void SetPolicyText(const char* value) { m_policyText.assign(value); }

    /**
     * <p>The policy definition containing the logic for your Config Custom Policy
     * rule.</p>
     */
    inline GetCustomRulePolicyResult& WithPolicyText(const Aws::String& value) { SetPolicyText(value); return *this;}

    /**
     * <p>The policy definition containing the logic for your Config Custom Policy
     * rule.</p>
     */
    inline GetCustomRulePolicyResult& WithPolicyText(Aws::String&& value) { SetPolicyText(std::move(value)); return *this;}

    /**
     * <p>The policy definition containing the logic for your Config Custom Policy
     * rule.</p>
     */
    inline GetCustomRulePolicyResult& WithPolicyText(const char* value) { SetPolicyText(value); return *this;}

  private:

    Aws::String m_policyText;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
