/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/AdditionalServiceRegistrationStep.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {
/**
 * <p>Output containing the service ID and any additional steps required for
 * registration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/RegisterServiceOutput">AWS
 * API Reference</a></p>
 */
class RegisterServiceResult {
 public:
  AWS_DEVOPSAGENT_API RegisterServiceResult() = default;
  AWS_DEVOPSAGENT_API RegisterServiceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DEVOPSAGENT_API RegisterServiceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Service ID - present when registration is complete, absent when additional
   * steps are required</p>
   */
  inline const Aws::String& GetServiceId() const { return m_serviceId; }
  template <typename ServiceIdT = Aws::String>
  void SetServiceId(ServiceIdT&& value) {
    m_serviceIdHasBeenSet = true;
    m_serviceId = std::forward<ServiceIdT>(value);
  }
  template <typename ServiceIdT = Aws::String>
  RegisterServiceResult& WithServiceId(ServiceIdT&& value) {
    SetServiceId(std::forward<ServiceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates if additional steps are required to complete service registration
   * (e.g., 3-legged OAuth)</p>
   */
  inline const AdditionalServiceRegistrationStep& GetAdditionalStep() const { return m_additionalStep; }
  template <typename AdditionalStepT = AdditionalServiceRegistrationStep>
  void SetAdditionalStep(AdditionalStepT&& value) {
    m_additionalStepHasBeenSet = true;
    m_additionalStep = std::forward<AdditionalStepT>(value);
  }
  template <typename AdditionalStepT = AdditionalServiceRegistrationStep>
  RegisterServiceResult& WithAdditionalStep(AdditionalStepT&& value) {
    SetAdditionalStep(std::forward<AdditionalStepT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the AWS Key Management Service (AWS KMS) customer managed key
   * that's used to encrypt resources.</p>
   */
  inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
  template <typename KmsKeyArnT = Aws::String>
  void SetKmsKeyArn(KmsKeyArnT&& value) {
    m_kmsKeyArnHasBeenSet = true;
    m_kmsKeyArn = std::forward<KmsKeyArnT>(value);
  }
  template <typename KmsKeyArnT = Aws::String>
  RegisterServiceResult& WithKmsKeyArn(KmsKeyArnT&& value) {
    SetKmsKeyArn(std::forward<KmsKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tags associated with the registered Service.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  RegisterServiceResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  RegisterServiceResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
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
  RegisterServiceResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_serviceId;

  AdditionalServiceRegistrationStep m_additionalStep;

  Aws::String m_kmsKeyArn;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_serviceIdHasBeenSet = false;
  bool m_additionalStepHasBeenSet = false;
  bool m_kmsKeyArnHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
