/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/events/model/ConnectionAuthResponseParameters.h>
#include <aws/events/model/ConnectionAuthorizationType.h>
#include <aws/events/model/ConnectionState.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace CloudWatchEvents {
namespace Model {
class DescribeConnectionResult {
 public:
  AWS_CLOUDWATCHEVENTS_API DescribeConnectionResult() = default;
  AWS_CLOUDWATCHEVENTS_API DescribeConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CLOUDWATCHEVENTS_API DescribeConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ARN of the connection retrieved.</p>
   */
  inline const Aws::String& GetConnectionArn() const { return m_connectionArn; }
  template <typename ConnectionArnT = Aws::String>
  void SetConnectionArn(ConnectionArnT&& value) {
    m_connectionArnHasBeenSet = true;
    m_connectionArn = std::forward<ConnectionArnT>(value);
  }
  template <typename ConnectionArnT = Aws::String>
  DescribeConnectionResult& WithConnectionArn(ConnectionArnT&& value) {
    SetConnectionArn(std::forward<ConnectionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the connection retrieved.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  DescribeConnectionResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description for the connection retrieved.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  DescribeConnectionResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the connection retrieved.</p>
   */
  inline ConnectionState GetConnectionState() const { return m_connectionState; }
  inline void SetConnectionState(ConnectionState value) {
    m_connectionStateHasBeenSet = true;
    m_connectionState = value;
  }
  inline DescribeConnectionResult& WithConnectionState(ConnectionState value) {
    SetConnectionState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason that the connection is in the current connection state.</p>
   */
  inline const Aws::String& GetStateReason() const { return m_stateReason; }
  template <typename StateReasonT = Aws::String>
  void SetStateReason(StateReasonT&& value) {
    m_stateReasonHasBeenSet = true;
    m_stateReason = std::forward<StateReasonT>(value);
  }
  template <typename StateReasonT = Aws::String>
  DescribeConnectionResult& WithStateReason(StateReasonT&& value) {
    SetStateReason(std::forward<StateReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of authorization specified for the connection.</p>
   */
  inline ConnectionAuthorizationType GetAuthorizationType() const { return m_authorizationType; }
  inline void SetAuthorizationType(ConnectionAuthorizationType value) {
    m_authorizationTypeHasBeenSet = true;
    m_authorizationType = value;
  }
  inline DescribeConnectionResult& WithAuthorizationType(ConnectionAuthorizationType value) {
    SetAuthorizationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the secret created from the authorization parameters specified for
   * the connection.</p>
   */
  inline const Aws::String& GetSecretArn() const { return m_secretArn; }
  template <typename SecretArnT = Aws::String>
  void SetSecretArn(SecretArnT&& value) {
    m_secretArnHasBeenSet = true;
    m_secretArn = std::forward<SecretArnT>(value);
  }
  template <typename SecretArnT = Aws::String>
  DescribeConnectionResult& WithSecretArn(SecretArnT&& value) {
    SetSecretArn(std::forward<SecretArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The parameters to use for authorization for the connection.</p>
   */
  inline const ConnectionAuthResponseParameters& GetAuthParameters() const { return m_authParameters; }
  template <typename AuthParametersT = ConnectionAuthResponseParameters>
  void SetAuthParameters(AuthParametersT&& value) {
    m_authParametersHasBeenSet = true;
    m_authParameters = std::forward<AuthParametersT>(value);
  }
  template <typename AuthParametersT = ConnectionAuthResponseParameters>
  DescribeConnectionResult& WithAuthParameters(AuthParametersT&& value) {
    SetAuthParameters(std::forward<AuthParametersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A time stamp for the time that the connection was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  DescribeConnectionResult& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A time stamp for the time that the connection was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  DescribeConnectionResult& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A time stamp for the time that the connection was last authorized.</p>
   */
  inline const Aws::Utils::DateTime& GetLastAuthorizedTime() const { return m_lastAuthorizedTime; }
  template <typename LastAuthorizedTimeT = Aws::Utils::DateTime>
  void SetLastAuthorizedTime(LastAuthorizedTimeT&& value) {
    m_lastAuthorizedTimeHasBeenSet = true;
    m_lastAuthorizedTime = std::forward<LastAuthorizedTimeT>(value);
  }
  template <typename LastAuthorizedTimeT = Aws::Utils::DateTime>
  DescribeConnectionResult& WithLastAuthorizedTime(LastAuthorizedTimeT&& value) {
    SetLastAuthorizedTime(std::forward<LastAuthorizedTimeT>(value));
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
  DescribeConnectionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_connectionArn;

  Aws::String m_name;

  Aws::String m_description;

  ConnectionState m_connectionState{ConnectionState::NOT_SET};

  Aws::String m_stateReason;

  ConnectionAuthorizationType m_authorizationType{ConnectionAuthorizationType::NOT_SET};

  Aws::String m_secretArn;

  ConnectionAuthResponseParameters m_authParameters;

  Aws::Utils::DateTime m_creationTime{};

  Aws::Utils::DateTime m_lastModifiedTime{};

  Aws::Utils::DateTime m_lastAuthorizedTime{};

  Aws::String m_requestId;
  bool m_connectionArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_connectionStateHasBeenSet = false;
  bool m_stateReasonHasBeenSet = false;
  bool m_authorizationTypeHasBeenSet = false;
  bool m_secretArnHasBeenSet = false;
  bool m_authParametersHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
  bool m_lastAuthorizedTimeHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchEvents
}  // namespace Aws
