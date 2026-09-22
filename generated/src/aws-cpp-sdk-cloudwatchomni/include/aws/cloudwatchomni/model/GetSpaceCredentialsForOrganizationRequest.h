/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmniRequest.h>
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/OrganizationCredentialType.h>
#include <aws/cloudwatchomni/model/SpaceCredentialRequestContext.h>

#include <utility>

namespace Aws {
namespace CloudWatchOmni {
namespace Model {

/**
 */
class GetSpaceCredentialsForOrganizationRequest : public CloudWatchOmniRequest {
 public:
  AWS_CLOUDWATCHOMNI_API GetSpaceCredentialsForOrganizationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetSpaceCredentialsForOrganization"; }

  AWS_CLOUDWATCHOMNI_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHOMNI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Context for credential resolution.</p>
   */
  inline const SpaceCredentialRequestContext& GetContext() const { return m_context; }
  inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
  template <typename ContextT = SpaceCredentialRequestContext>
  void SetContext(ContextT&& value) {
    m_contextHasBeenSet = true;
    m_context = std::forward<ContextT>(value);
  }
  template <typename ContextT = SpaceCredentialRequestContext>
  GetSpaceCredentialsForOrganizationRequest& WithContext(ContextT&& value) {
    SetContext(std::forward<ContextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Selects which member-account credential to return. Set this to
   * SPACE_OPERATION.</p>
   */
  inline OrganizationCredentialType GetCredentialType() const { return m_credentialType; }
  inline bool CredentialTypeHasBeenSet() const { return m_credentialTypeHasBeenSet; }
  inline void SetCredentialType(OrganizationCredentialType value) {
    m_credentialTypeHasBeenSet = true;
    m_credentialType = value;
  }
  inline GetSpaceCredentialsForOrganizationRequest& WithCredentialType(OrganizationCredentialType value) {
    SetCredentialType(value);
    return *this;
  }
  ///@}
 private:
  SpaceCredentialRequestContext m_context;

  OrganizationCredentialType m_credentialType{OrganizationCredentialType::NOT_SET};
  bool m_contextHasBeenSet = false;
  bool m_credentialTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
