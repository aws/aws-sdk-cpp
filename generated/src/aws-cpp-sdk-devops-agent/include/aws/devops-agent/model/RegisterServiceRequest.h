/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgentRequest.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/PostRegisterServiceSupportedService.h>
#include <aws/devops-agent/model/ServiceDetails.h>

#include <utility>

namespace Aws {
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Input for registering a new service with the platform.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/RegisterServiceInput">AWS
 * API Reference</a></p>
 */
class RegisterServiceRequest : public DevOpsAgentRequest {
 public:
  AWS_DEVOPSAGENT_API RegisterServiceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "RegisterService"; }

  AWS_DEVOPSAGENT_API Aws::String SerializePayload() const override;

  ///@{

  inline PostRegisterServiceSupportedService GetService() const { return m_service; }
  inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
  inline void SetService(PostRegisterServiceSupportedService value) {
    m_serviceHasBeenSet = true;
    m_service = value;
  }
  inline RegisterServiceRequest& WithService(PostRegisterServiceSupportedService value) {
    SetService(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Service-specific authorization configuration parameters</p>
   */
  inline const ServiceDetails& GetServiceDetails() const { return m_serviceDetails; }
  inline bool ServiceDetailsHasBeenSet() const { return m_serviceDetailsHasBeenSet; }
  template <typename ServiceDetailsT = ServiceDetails>
  void SetServiceDetails(ServiceDetailsT&& value) {
    m_serviceDetailsHasBeenSet = true;
    m_serviceDetails = std::forward<ServiceDetailsT>(value);
  }
  template <typename ServiceDetailsT = ServiceDetails>
  RegisterServiceRequest& WithServiceDetails(ServiceDetailsT&& value) {
    SetServiceDetails(std::forward<ServiceDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the AWS Key Management Service (AWS KMS) customer managed key
   * that's used to encrypt resources.</p>
   */
  inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
  inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
  template <typename KmsKeyArnT = Aws::String>
  void SetKmsKeyArn(KmsKeyArnT&& value) {
    m_kmsKeyArnHasBeenSet = true;
    m_kmsKeyArn = std::forward<KmsKeyArnT>(value);
  }
  template <typename KmsKeyArnT = Aws::String>
  RegisterServiceRequest& WithKmsKeyArn(KmsKeyArnT&& value) {
    SetKmsKeyArn(std::forward<KmsKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the private connection to use for VPC connectivity.</p>
   */
  inline const Aws::String& GetPrivateConnectionName() const { return m_privateConnectionName; }
  inline bool PrivateConnectionNameHasBeenSet() const { return m_privateConnectionNameHasBeenSet; }
  template <typename PrivateConnectionNameT = Aws::String>
  void SetPrivateConnectionName(PrivateConnectionNameT&& value) {
    m_privateConnectionNameHasBeenSet = true;
    m_privateConnectionName = std::forward<PrivateConnectionNameT>(value);
  }
  template <typename PrivateConnectionNameT = Aws::String>
  RegisterServiceRequest& WithPrivateConnectionName(PrivateConnectionNameT&& value) {
    SetPrivateConnectionName(std::forward<PrivateConnectionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name for the service registration.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  RegisterServiceRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tags to add to the Service at registration time.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  RegisterServiceRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  RegisterServiceRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  PostRegisterServiceSupportedService m_service{PostRegisterServiceSupportedService::NOT_SET};

  ServiceDetails m_serviceDetails;

  Aws::String m_kmsKeyArn;

  Aws::String m_privateConnectionName;

  Aws::String m_name;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_serviceHasBeenSet = false;
  bool m_serviceDetailsHasBeenSet = false;
  bool m_kmsKeyArnHasBeenSet = false;
  bool m_privateConnectionNameHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
