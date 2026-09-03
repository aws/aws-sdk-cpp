/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains information about an API call that was observed as part of an
 * activity.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ApiCall">AWS
 * API Reference</a></p>
 */
class ApiCall {
 public:
  AWS_GUARDDUTY_API ApiCall() = default;
  AWS_GUARDDUTY_API ApiCall(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API ApiCall& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the API operation that was invoked.</p>
   */
  inline const Aws::String& GetOperation() const { return m_operation; }
  inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
  template <typename OperationT = Aws::String>
  void SetOperation(OperationT&& value) {
    m_operationHasBeenSet = true;
    m_operation = std::forward<OperationT>(value);
  }
  template <typename OperationT = Aws::String>
  ApiCall& WithOperation(OperationT&& value) {
    SetOperation(std::forward<OperationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The service that the API operation was invoked against.</p>
   */
  inline const Aws::String& GetService() const { return m_service; }
  inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
  template <typename ServiceT = Aws::String>
  void SetService(ServiceT&& value) {
    m_serviceHasBeenSet = true;
    m_service = std::forward<ServiceT>(value);
  }
  template <typename ServiceT = Aws::String>
  ApiCall& WithService(ServiceT&& value) {
    SetService(std::forward<ServiceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error code that was returned, if the API call failed.</p>
   */
  inline const Aws::String& GetError() const { return m_error; }
  inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
  template <typename ErrorT = Aws::String>
  void SetError(ErrorT&& value) {
    m_errorHasBeenSet = true;
    m_error = std::forward<ErrorT>(value);
  }
  template <typename ErrorT = Aws::String>
  ApiCall& WithError(ErrorT&& value) {
    SetError(std::forward<ErrorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>User agent in the request to the API operation</p>
   */
  inline const Aws::String& GetUserAgent() const { return m_userAgent; }
  inline bool UserAgentHasBeenSet() const { return m_userAgentHasBeenSet; }
  template <typename UserAgentT = Aws::String>
  void SetUserAgent(UserAgentT&& value) {
    m_userAgentHasBeenSet = true;
    m_userAgent = std::forward<UserAgentT>(value);
  }
  template <typename UserAgentT = Aws::String>
  ApiCall& WithUserAgent(UserAgentT&& value) {
    SetUserAgent(std::forward<UserAgentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_operation;

  Aws::String m_service;

  Aws::String m_error;

  Aws::String m_userAgent;
  bool m_operationHasBeenSet = false;
  bool m_serviceHasBeenSet = false;
  bool m_errorHasBeenSet = false;
  bool m_userAgentHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
