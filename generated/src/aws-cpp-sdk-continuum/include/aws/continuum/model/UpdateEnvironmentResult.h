/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/EnvironmentConfigurationDetails.h>
#include <aws/continuum/model/EnvironmentStatus.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
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
namespace Continuum {
namespace Model {
/**
 * <p>Contains the current state of the updated environment. Use GetEnvironment to
 * read its source and environment configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/UpdateEnvironmentOutput">AWS
 * API Reference</a></p>
 */
class UpdateEnvironmentResult {
 public:
  AWS_CONTINUUM_API UpdateEnvironmentResult() = default;
  AWS_CONTINUUM_API UpdateEnvironmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONTINUUM_API UpdateEnvironmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the updated environment.</p>
   */
  inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
  template <typename EnvironmentIdT = Aws::String>
  void SetEnvironmentId(EnvironmentIdT&& value) {
    m_environmentIdHasBeenSet = true;
    m_environmentId = std::forward<EnvironmentIdT>(value);
  }
  template <typename EnvironmentIdT = Aws::String>
  UpdateEnvironmentResult& WithEnvironmentId(EnvironmentIdT&& value) {
    SetEnvironmentId(std::forward<EnvironmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the updated environment.</p>
   */
  inline const Aws::String& GetEnvironmentArn() const { return m_environmentArn; }
  template <typename EnvironmentArnT = Aws::String>
  void SetEnvironmentArn(EnvironmentArnT&& value) {
    m_environmentArnHasBeenSet = true;
    m_environmentArn = std::forward<EnvironmentArnT>(value);
  }
  template <typename EnvironmentArnT = Aws::String>
  UpdateEnvironmentResult& WithEnvironmentArn(EnvironmentArnT&& value) {
    SetEnvironmentArn(std::forward<EnvironmentArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current customer-visible name of the environment.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateEnvironmentResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current operational status of the environment.</p>
   */
  inline EnvironmentStatus GetStatus() const { return m_status; }
  inline void SetStatus(EnvironmentStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateEnvironmentResult& WithStatus(EnvironmentStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Human-readable details about the current status.</p>
   */
  inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
  template <typename StatusMessageT = Aws::String>
  void SetStatusMessage(StatusMessageT&& value) {
    m_statusMessageHasBeenSet = true;
    m_statusMessage = std::forward<StatusMessageT>(value);
  }
  template <typename StatusMessageT = Aws::String>
  UpdateEnvironmentResult& WithStatusMessage(StatusMessageT&& value) {
    SetStatusMessage(std::forward<StatusMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the status last transitioned. Uses the existing
   * GetEnvironment/ListEnvironments ISO-8601 wire format for this field.</p>
   */
  inline const Aws::Utils::DateTime& GetStatusUpdatedAt() const { return m_statusUpdatedAt; }
  template <typename StatusUpdatedAtT = Aws::Utils::DateTime>
  void SetStatusUpdatedAt(StatusUpdatedAtT&& value) {
    m_statusUpdatedAtHasBeenSet = true;
    m_statusUpdatedAt = std::forward<StatusUpdatedAtT>(value);
  }
  template <typename StatusUpdatedAtT = Aws::Utils::DateTime>
  UpdateEnvironmentResult& WithStatusUpdatedAt(StatusUpdatedAtT&& value) {
    SetStatusUpdatedAt(std::forward<StatusUpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the environment was created. Uses the existing
   * GetEnvironment/ListEnvironments ISO-8601 wire format for this field.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  UpdateEnvironmentResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Type-specific state, including Collector details and the latest scan. Read
   * source and operating-policy settings through GetEnvironment.</p>
   */
  inline const EnvironmentConfigurationDetails& GetConfiguration() const { return m_configuration; }
  template <typename ConfigurationT = EnvironmentConfigurationDetails>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = EnvironmentConfigurationDetails>
  UpdateEnvironmentResult& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
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
  UpdateEnvironmentResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_environmentId;

  Aws::String m_environmentArn;

  Aws::String m_name;

  EnvironmentStatus m_status{EnvironmentStatus::NOT_SET};

  Aws::String m_statusMessage;

  Aws::Utils::DateTime m_statusUpdatedAt{};

  Aws::Utils::DateTime m_createdAt{};

  EnvironmentConfigurationDetails m_configuration;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_environmentIdHasBeenSet = false;
  bool m_environmentArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusMessageHasBeenSet = false;
  bool m_statusUpdatedAtHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
