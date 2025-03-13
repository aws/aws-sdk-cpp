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
  class PutOrganizationConfigRuleResult
  {
  public:
    AWS_CONFIGSERVICE_API PutOrganizationConfigRuleResult() = default;
    AWS_CONFIGSERVICE_API PutOrganizationConfigRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API PutOrganizationConfigRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an organization Config rule.</p>
     */
    inline const Aws::String& GetOrganizationConfigRuleArn() const { return m_organizationConfigRuleArn; }
    template<typename OrganizationConfigRuleArnT = Aws::String>
    void SetOrganizationConfigRuleArn(OrganizationConfigRuleArnT&& value) { m_organizationConfigRuleArnHasBeenSet = true; m_organizationConfigRuleArn = std::forward<OrganizationConfigRuleArnT>(value); }
    template<typename OrganizationConfigRuleArnT = Aws::String>
    PutOrganizationConfigRuleResult& WithOrganizationConfigRuleArn(OrganizationConfigRuleArnT&& value) { SetOrganizationConfigRuleArn(std::forward<OrganizationConfigRuleArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutOrganizationConfigRuleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_organizationConfigRuleArn;
    bool m_organizationConfigRuleArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
