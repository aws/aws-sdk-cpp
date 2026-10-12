/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>
#include <aws/lambda-web/model/BuildConfig.h>
#include <aws/lambda-web/model/RevisionError.h>
#include <aws/lambda-web/model/RevisionState.h>
#include <aws/lambda-web/model/ServiceConfig.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace LambdaWeb {
namespace Model {
/**
 * <p>Contains details about the created revision.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/CreateWebFunctionRevisionResponse">AWS
 * API Reference</a></p>
 */
class CreateWebFunctionRevisionResult {
 public:
  AWS_LAMBDAWEB_API CreateWebFunctionRevisionResult() = default;
  AWS_LAMBDAWEB_API CreateWebFunctionRevisionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LAMBDAWEB_API CreateWebFunctionRevisionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the web function.</p>
   */
  inline const Aws::String& GetFunctionArn() const { return m_functionArn; }
  template <typename FunctionArnT = Aws::String>
  void SetFunctionArn(FunctionArnT&& value) {
    m_functionArnHasBeenSet = true;
    m_functionArn = std::forward<FunctionArnT>(value);
  }
  template <typename FunctionArnT = Aws::String>
  CreateWebFunctionRevisionResult& WithFunctionArn(FunctionArnT&& value) {
    SetFunctionArn(std::forward<FunctionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the revision.</p>
   */
  inline const Aws::String& GetRevisionArn() const { return m_revisionArn; }
  template <typename RevisionArnT = Aws::String>
  void SetRevisionArn(RevisionArnT&& value) {
    m_revisionArnHasBeenSet = true;
    m_revisionArn = std::forward<RevisionArnT>(value);
  }
  template <typename RevisionArnT = Aws::String>
  CreateWebFunctionRevisionResult& WithRevisionArn(RevisionArnT&& value) {
    SetRevisionArn(std::forward<RevisionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the revision.</p>
   */
  inline const Aws::String& GetRevisionId() const { return m_revisionId; }
  template <typename RevisionIdT = Aws::String>
  void SetRevisionId(RevisionIdT&& value) {
    m_revisionIdHasBeenSet = true;
    m_revisionId = std::forward<RevisionIdT>(value);
  }
  template <typename RevisionIdT = Aws::String>
  CreateWebFunctionRevisionResult& WithRevisionId(RevisionIdT&& value) {
    SetRevisionId(std::forward<RevisionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the revision.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateWebFunctionRevisionResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the AWS KMS key used to encrypt the
   * revision's code and environment variables.</p>
   */
  inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
  template <typename KmsKeyArnT = Aws::String>
  void SetKmsKeyArn(KmsKeyArnT&& value) {
    m_kmsKeyArnHasBeenSet = true;
    m_kmsKeyArn = std::forward<KmsKeyArnT>(value);
  }
  template <typename KmsKeyArnT = Aws::String>
  CreateWebFunctionRevisionResult& WithKmsKeyArn(KmsKeyArnT&& value) {
    SetKmsKeyArn(std::forward<KmsKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const BuildConfig& GetBuildConfig() const { return m_buildConfig; }
  template <typename BuildConfigT = BuildConfig>
  void SetBuildConfig(BuildConfigT&& value) {
    m_buildConfigHasBeenSet = true;
    m_buildConfig = std::forward<BuildConfigT>(value);
  }
  template <typename BuildConfigT = BuildConfig>
  CreateWebFunctionRevisionResult& WithBuildConfig(BuildConfigT&& value) {
    SetBuildConfig(std::forward<BuildConfigT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ServiceConfig& GetServiceConfig() const { return m_serviceConfig; }
  template <typename ServiceConfigT = ServiceConfig>
  void SetServiceConfig(ServiceConfigT&& value) {
    m_serviceConfigHasBeenSet = true;
    m_serviceConfig = std::forward<ServiceConfigT>(value);
  }
  template <typename ServiceConfigT = ServiceConfig>
  CreateWebFunctionRevisionResult& WithServiceConfig(ServiceConfigT&& value) {
    SetServiceConfig(std::forward<ServiceConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the revision.</p>
   */
  inline RevisionState GetState() const { return m_state; }
  inline void SetState(RevisionState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline CreateWebFunctionRevisionResult& WithState(RevisionState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the current state of the revision.</p>
   */
  inline const Aws::String& GetStateReason() const { return m_stateReason; }
  template <typename StateReasonT = Aws::String>
  void SetStateReason(StateReasonT&& value) {
    m_stateReasonHasBeenSet = true;
    m_stateReason = std::forward<StateReasonT>(value);
  }
  template <typename StateReasonT = Aws::String>
  CreateWebFunctionRevisionResult& WithStateReason(StateReasonT&& value) {
    SetStateReason(std::forward<StateReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of errors encountered during revision creation. This field is absent
   * when the revision has no errors.</p>
   */
  inline const Aws::Vector<RevisionError>& GetErrors() const { return m_errors; }
  template <typename ErrorsT = Aws::Vector<RevisionError>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<RevisionError>>
  CreateWebFunctionRevisionResult& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  template <typename ErrorsT = RevisionError>
  CreateWebFunctionRevisionResult& AddErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors.emplace_back(std::forward<ErrorsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the revision was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  CreateWebFunctionRevisionResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
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
  CreateWebFunctionRevisionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_functionArn;

  Aws::String m_revisionArn;

  Aws::String m_revisionId;

  Aws::String m_description;

  Aws::String m_kmsKeyArn;

  BuildConfig m_buildConfig;

  ServiceConfig m_serviceConfig;

  RevisionState m_state{RevisionState::NOT_SET};

  Aws::String m_stateReason;

  Aws::Vector<RevisionError> m_errors;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_functionArnHasBeenSet = false;
  bool m_revisionArnHasBeenSet = false;
  bool m_revisionIdHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_kmsKeyArnHasBeenSet = false;
  bool m_buildConfigHasBeenSet = false;
  bool m_serviceConfigHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_stateReasonHasBeenSet = false;
  bool m_errorsHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
