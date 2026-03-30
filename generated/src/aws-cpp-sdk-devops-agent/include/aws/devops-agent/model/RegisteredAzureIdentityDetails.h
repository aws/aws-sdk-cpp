/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Details specific to a registered Azure identity using AWS Outbound Identity
 * Federation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/RegisteredAzureIdentityDetails">AWS
 * API Reference</a></p>
 */
class RegisteredAzureIdentityDetails {
 public:
  AWS_DEVOPSAGENT_API RegisteredAzureIdentityDetails() = default;
  AWS_DEVOPSAGENT_API RegisteredAzureIdentityDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API RegisteredAzureIdentityDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Azure Active Directory tenant ID for the identity.</p>
   */
  inline const Aws::String& GetTenantId() const { return m_tenantId; }
  inline bool TenantIdHasBeenSet() const { return m_tenantIdHasBeenSet; }
  template <typename TenantIdT = Aws::String>
  void SetTenantId(TenantIdT&& value) {
    m_tenantIdHasBeenSet = true;
    m_tenantId = std::forward<TenantIdT>(value);
  }
  template <typename TenantIdT = Aws::String>
  RegisteredAzureIdentityDetails& WithTenantId(TenantIdT&& value) {
    SetTenantId(std::forward<TenantIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The client ID of the service principal or managed identity used for
   * authentication.</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  RegisteredAzureIdentityDetails& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The role ARN to be assumed by DevOps Agent for requesting Web Identity
   * Token.</p>
   */
  inline const Aws::String& GetWebIdentityRoleArn() const { return m_webIdentityRoleArn; }
  inline bool WebIdentityRoleArnHasBeenSet() const { return m_webIdentityRoleArnHasBeenSet; }
  template <typename WebIdentityRoleArnT = Aws::String>
  void SetWebIdentityRoleArn(WebIdentityRoleArnT&& value) {
    m_webIdentityRoleArnHasBeenSet = true;
    m_webIdentityRoleArn = std::forward<WebIdentityRoleArnT>(value);
  }
  template <typename WebIdentityRoleArnT = Aws::String>
  RegisteredAzureIdentityDetails& WithWebIdentityRoleArn(WebIdentityRoleArnT&& value) {
    SetWebIdentityRoleArn(std::forward<WebIdentityRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The audiences for the Web Identity Token.</p>
   */
  inline const Aws::Vector<Aws::String>& GetWebIdentityTokenAudiences() const { return m_webIdentityTokenAudiences; }
  inline bool WebIdentityTokenAudiencesHasBeenSet() const { return m_webIdentityTokenAudiencesHasBeenSet; }
  template <typename WebIdentityTokenAudiencesT = Aws::Vector<Aws::String>>
  void SetWebIdentityTokenAudiences(WebIdentityTokenAudiencesT&& value) {
    m_webIdentityTokenAudiencesHasBeenSet = true;
    m_webIdentityTokenAudiences = std::forward<WebIdentityTokenAudiencesT>(value);
  }
  template <typename WebIdentityTokenAudiencesT = Aws::Vector<Aws::String>>
  RegisteredAzureIdentityDetails& WithWebIdentityTokenAudiences(WebIdentityTokenAudiencesT&& value) {
    SetWebIdentityTokenAudiences(std::forward<WebIdentityTokenAudiencesT>(value));
    return *this;
  }
  template <typename WebIdentityTokenAudiencesT = Aws::String>
  RegisteredAzureIdentityDetails& AddWebIdentityTokenAudiences(WebIdentityTokenAudiencesT&& value) {
    m_webIdentityTokenAudiencesHasBeenSet = true;
    m_webIdentityTokenAudiences.emplace_back(std::forward<WebIdentityTokenAudiencesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_tenantId;

  Aws::String m_clientId;

  Aws::String m_webIdentityRoleArn;

  Aws::Vector<Aws::String> m_webIdentityTokenAudiences;
  bool m_tenantIdHasBeenSet = false;
  bool m_clientIdHasBeenSet = false;
  bool m_webIdentityRoleArnHasBeenSet = false;
  bool m_webIdentityTokenAudiencesHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
