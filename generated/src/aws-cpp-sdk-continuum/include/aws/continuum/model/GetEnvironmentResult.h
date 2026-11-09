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
 * <p>Contains the current state and configuration of the requested
 * environment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/GetEnvironmentOutput">AWS
 * API Reference</a></p>
 */
class GetEnvironmentResult {
 public:
  AWS_CONTINUUM_API GetEnvironmentResult() = default;
  AWS_CONTINUUM_API GetEnvironmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONTINUUM_API GetEnvironmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the environment.</p>
   */
  inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
  template <typename EnvironmentIdT = Aws::String>
  void SetEnvironmentId(EnvironmentIdT&& value) {
    m_environmentIdHasBeenSet = true;
    m_environmentId = std::forward<EnvironmentIdT>(value);
  }
  template <typename EnvironmentIdT = Aws::String>
  GetEnvironmentResult& WithEnvironmentId(EnvironmentIdT&& value) {
    SetEnvironmentId(std::forward<EnvironmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the environment.</p>
   */
  inline const Aws::String& GetEnvironmentArn() const { return m_environmentArn; }
  template <typename EnvironmentArnT = Aws::String>
  void SetEnvironmentArn(EnvironmentArnT&& value) {
    m_environmentArnHasBeenSet = true;
    m_environmentArn = std::forward<EnvironmentArnT>(value);
  }
  template <typename EnvironmentArnT = Aws::String>
  GetEnvironmentResult& WithEnvironmentArn(EnvironmentArnT&& value) {
    SetEnvironmentArn(std::forward<EnvironmentArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The customer-visible name of the environment.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetEnvironmentResult& WithName(NameT&& value) {
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
  inline GetEnvironmentResult& WithStatus(EnvironmentStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Human-readable details about the current status. Present when the status
   * requires additional context (e.g., failure reason).</p>
   */
  inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
  template <typename StatusMessageT = Aws::String>
  void SetStatusMessage(StatusMessageT&& value) {
    m_statusMessageHasBeenSet = true;
    m_statusMessage = std::forward<StatusMessageT>(value);
  }
  template <typename StatusMessageT = Aws::String>
  GetEnvironmentResult& WithStatusMessage(StatusMessageT&& value) {
    SetStatusMessage(std::forward<StatusMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the status last transitioned.</p>
   */
  inline const Aws::Utils::DateTime& GetStatusUpdatedAt() const { return m_statusUpdatedAt; }
  template <typename StatusUpdatedAtT = Aws::Utils::DateTime>
  void SetStatusUpdatedAt(StatusUpdatedAtT&& value) {
    m_statusUpdatedAtHasBeenSet = true;
    m_statusUpdatedAt = std::forward<StatusUpdatedAtT>(value);
  }
  template <typename StatusUpdatedAtT = Aws::Utils::DateTime>
  GetEnvironmentResult& WithStatusUpdatedAt(StatusUpdatedAtT&& value) {
    SetStatusUpdatedAt(std::forward<StatusUpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the environment was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetEnvironmentResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the environment's properties were last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetEnvironmentResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Type-specific configuration and state, including code sources, operating
   * policy, Collector details, and the latest scan.</p>
   */
  inline const EnvironmentConfigurationDetails& GetConfiguration() const { return m_configuration; }
  template <typename ConfigurationT = EnvironmentConfigurationDetails>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = EnvironmentConfigurationDetails>
  GetEnvironmentResult& WithConfiguration(ConfigurationT&& value) {
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
  GetEnvironmentResult& WithRequestId(RequestIdT&& value) {
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

  Aws::Utils::DateTime m_updatedAt{};

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
  bool m_updatedAtHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
