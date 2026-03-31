/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/AdditionalServiceDetails.h>
#include <aws/devops-agent/model/Service.h>

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
 * <p>Represents a registered service with its configuration and accessible
 * resources.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/RegisteredService">AWS
 * API Reference</a></p>
 */
class RegisteredService {
 public:
  AWS_DEVOPSAGENT_API RegisteredService() = default;
  AWS_DEVOPSAGENT_API RegisteredService(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API RegisteredService& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of a service.</p>
   */
  inline const Aws::String& GetServiceId() const { return m_serviceId; }
  inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }
  template <typename ServiceIdT = Aws::String>
  void SetServiceId(ServiceIdT&& value) {
    m_serviceIdHasBeenSet = true;
    m_serviceId = std::forward<ServiceIdT>(value);
  }
  template <typename ServiceIdT = Aws::String>
  RegisteredService& WithServiceId(ServiceIdT&& value) {
    SetServiceId(std::forward<ServiceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The service type e.g github or dynatrace</p>
   */
  inline Service GetServiceType() const { return m_serviceType; }
  inline bool ServiceTypeHasBeenSet() const { return m_serviceTypeHasBeenSet; }
  inline void SetServiceType(Service value) {
    m_serviceTypeHasBeenSet = true;
    m_serviceType = value;
  }
  inline RegisteredService& WithServiceType(Service value) {
    SetServiceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the registered service.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  RegisteredService& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of accessible resources for this service.</p>
   */
  inline const Aws::Vector<Aws::Utils::Document>& GetAccessibleResources() const { return m_accessibleResources; }
  inline bool AccessibleResourcesHasBeenSet() const { return m_accessibleResourcesHasBeenSet; }
  template <typename AccessibleResourcesT = Aws::Vector<Aws::Utils::Document>>
  void SetAccessibleResources(AccessibleResourcesT&& value) {
    m_accessibleResourcesHasBeenSet = true;
    m_accessibleResources = std::forward<AccessibleResourcesT>(value);
  }
  template <typename AccessibleResourcesT = Aws::Vector<Aws::Utils::Document>>
  RegisteredService& WithAccessibleResources(AccessibleResourcesT&& value) {
    SetAccessibleResources(std::forward<AccessibleResourcesT>(value));
    return *this;
  }
  template <typename AccessibleResourcesT = Aws::Utils::Document>
  RegisteredService& AddAccessibleResources(AccessibleResourcesT&& value) {
    m_accessibleResourcesHasBeenSet = true;
    m_accessibleResources.emplace_back(std::forward<AccessibleResourcesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional details specific to the service type.</p>
   */
  inline const AdditionalServiceDetails& GetAdditionalServiceDetails() const { return m_additionalServiceDetails; }
  inline bool AdditionalServiceDetailsHasBeenSet() const { return m_additionalServiceDetailsHasBeenSet; }
  template <typename AdditionalServiceDetailsT = AdditionalServiceDetails>
  void SetAdditionalServiceDetails(AdditionalServiceDetailsT&& value) {
    m_additionalServiceDetailsHasBeenSet = true;
    m_additionalServiceDetails = std::forward<AdditionalServiceDetailsT>(value);
  }
  template <typename AdditionalServiceDetailsT = AdditionalServiceDetails>
  RegisteredService& WithAdditionalServiceDetails(AdditionalServiceDetailsT&& value) {
    SetAdditionalServiceDetails(std::forward<AdditionalServiceDetailsT>(value));
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
  RegisteredService& WithKmsKeyArn(KmsKeyArnT&& value) {
    SetKmsKeyArn(std::forward<KmsKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the private connection used for VPC connectivity.</p>
   */
  inline const Aws::String& GetPrivateConnectionName() const { return m_privateConnectionName; }
  inline bool PrivateConnectionNameHasBeenSet() const { return m_privateConnectionNameHasBeenSet; }
  template <typename PrivateConnectionNameT = Aws::String>
  void SetPrivateConnectionName(PrivateConnectionNameT&& value) {
    m_privateConnectionNameHasBeenSet = true;
    m_privateConnectionName = std::forward<PrivateConnectionNameT>(value);
  }
  template <typename PrivateConnectionNameT = Aws::String>
  RegisteredService& WithPrivateConnectionName(PrivateConnectionNameT&& value) {
    SetPrivateConnectionName(std::forward<PrivateConnectionNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_serviceId;

  Service m_serviceType{Service::NOT_SET};

  Aws::String m_name;

  Aws::Vector<Aws::Utils::Document> m_accessibleResources;

  AdditionalServiceDetails m_additionalServiceDetails;

  Aws::String m_kmsKeyArn;

  Aws::String m_privateConnectionName;
  bool m_serviceIdHasBeenSet = false;
  bool m_serviceTypeHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_accessibleResourcesHasBeenSet = false;
  bool m_additionalServiceDetailsHasBeenSet = false;
  bool m_kmsKeyArnHasBeenSet = false;
  bool m_privateConnectionNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
