/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/PaymentCredentialProviderVendorType.h>
#include <aws/bedrock-agentcore-control/model/PaymentProviderConfigurationOutput.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {
class GetPaymentCredentialProviderResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API GetPaymentCredentialProviderResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API GetPaymentCredentialProviderResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API GetPaymentCredentialProviderResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the payment credential provider.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetPaymentCredentialProviderResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the payment credential provider.</p>
   */
  inline const Aws::String& GetCredentialProviderArn() const { return m_credentialProviderArn; }
  template <typename CredentialProviderArnT = Aws::String>
  void SetCredentialProviderArn(CredentialProviderArnT&& value) {
    m_credentialProviderArnHasBeenSet = true;
    m_credentialProviderArn = std::forward<CredentialProviderArnT>(value);
  }
  template <typename CredentialProviderArnT = Aws::String>
  GetPaymentCredentialProviderResult& WithCredentialProviderArn(CredentialProviderArnT&& value) {
    SetCredentialProviderArn(std::forward<CredentialProviderArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline PaymentCredentialProviderVendorType GetCredentialProviderVendor() const { return m_credentialProviderVendor; }
  inline void SetCredentialProviderVendor(PaymentCredentialProviderVendorType value) {
    m_credentialProviderVendorHasBeenSet = true;
    m_credentialProviderVendor = value;
  }
  inline GetPaymentCredentialProviderResult& WithCredentialProviderVendor(PaymentCredentialProviderVendorType value) {
    SetCredentialProviderVendor(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Output configuration (contains secret ARNs, excludes actual secret
   * values)</p>
   */
  inline const PaymentProviderConfigurationOutput& GetProviderConfigurationOutput() const { return m_providerConfigurationOutput; }
  template <typename ProviderConfigurationOutputT = PaymentProviderConfigurationOutput>
  void SetProviderConfigurationOutput(ProviderConfigurationOutputT&& value) {
    m_providerConfigurationOutputHasBeenSet = true;
    m_providerConfigurationOutput = std::forward<ProviderConfigurationOutputT>(value);
  }
  template <typename ProviderConfigurationOutputT = PaymentProviderConfigurationOutput>
  GetPaymentCredentialProviderResult& WithProviderConfigurationOutput(ProviderConfigurationOutputT&& value) {
    SetProviderConfigurationOutput(std::forward<ProviderConfigurationOutputT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the payment credential provider was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  void SetCreatedTime(CreatedTimeT&& value) {
    m_createdTimeHasBeenSet = true;
    m_createdTime = std::forward<CreatedTimeT>(value);
  }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  GetPaymentCredentialProviderResult& WithCreatedTime(CreatedTimeT&& value) {
    SetCreatedTime(std::forward<CreatedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the payment credential provider was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
  template <typename LastUpdatedTimeT = Aws::Utils::DateTime>
  void SetLastUpdatedTime(LastUpdatedTimeT&& value) {
    m_lastUpdatedTimeHasBeenSet = true;
    m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value);
  }
  template <typename LastUpdatedTimeT = Aws::Utils::DateTime>
  GetPaymentCredentialProviderResult& WithLastUpdatedTime(LastUpdatedTimeT&& value) {
    SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags associated with the payment credential provider.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  GetPaymentCredentialProviderResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  GetPaymentCredentialProviderResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetPaymentCredentialProviderResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_name;

  Aws::String m_credentialProviderArn;

  PaymentCredentialProviderVendorType m_credentialProviderVendor{PaymentCredentialProviderVendorType::NOT_SET};

  PaymentProviderConfigurationOutput m_providerConfigurationOutput;

  Aws::Utils::DateTime m_createdTime{};

  Aws::Utils::DateTime m_lastUpdatedTime{};

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nameHasBeenSet = false;
  bool m_credentialProviderArnHasBeenSet = false;
  bool m_credentialProviderVendorHasBeenSet = false;
  bool m_providerConfigurationOutputHasBeenSet = false;
  bool m_createdTimeHasBeenSet = false;
  bool m_lastUpdatedTimeHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
