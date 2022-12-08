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
  class GetOrganizationCustomRulePolicyResult
  {
  public:
    AWS_CONFIGSERVICE_API GetOrganizationCustomRulePolicyResult();
    AWS_CONFIGSERVICE_API GetOrganizationCustomRulePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API GetOrganizationCustomRulePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The policy definition containing the logic for your organization Config
     * Custom Policy rule.</p>
     */
    inline const Aws::String& GetPolicyText() const{ return m_policyText; }

    /**
     * <p>The policy definition containing the logic for your organization Config
     * Custom Policy rule.</p>
     */
    inline void SetPolicyText(const Aws::String& value) { m_policyText = value; }

    /**
     * <p>The policy definition containing the logic for your organization Config
     * Custom Policy rule.</p>
     */
    inline void SetPolicyText(Aws::String&& value) { m_policyText = std::move(value); }

    /**
     * <p>The policy definition containing the logic for your organization Config
     * Custom Policy rule.</p>
     */
    inline void SetPolicyText(const char* value) { m_policyText.assign(value); }

    /**
     * <p>The policy definition containing the logic for your organization Config
     * Custom Policy rule.</p>
     */
    inline GetOrganizationCustomRulePolicyResult& WithPolicyText(const Aws::String& value) { SetPolicyText(value); return *this;}

    /**
     * <p>The policy definition containing the logic for your organization Config
     * Custom Policy rule.</p>
     */
    inline GetOrganizationCustomRulePolicyResult& WithPolicyText(Aws::String&& value) { SetPolicyText(std::move(value)); return *this;}

    /**
     * <p>The policy definition containing the logic for your organization Config
     * Custom Policy rule.</p>
     */
    inline GetOrganizationCustomRulePolicyResult& WithPolicyText(const char* value) { SetPolicyText(value); return *this;}

  private:

    Aws::String m_policyText;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
