/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda-microvms/LambdaMicrovmsRequest.h>
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>
#include <aws/lambda-microvms/model/PortSpecification.h>

#include <utility>

namespace Aws {
namespace LambdaMicrovms {
namespace Model {

/**
 */
class CreateMicrovmAuthTokenRequest : public LambdaMicrovmsRequest {
 public:
  AWS_LAMBDAMICROVMS_API CreateMicrovmAuthTokenRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateMicrovmAuthToken"; }

  AWS_LAMBDAMICROVMS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the MicroVM to create an authentication token for.</p>
   */
  inline const Aws::String& GetMicrovmIdentifier() const { return m_microvmIdentifier; }
  inline bool MicrovmIdentifierHasBeenSet() const { return m_microvmIdentifierHasBeenSet; }
  template <typename MicrovmIdentifierT = Aws::String>
  void SetMicrovmIdentifier(MicrovmIdentifierT&& value) {
    m_microvmIdentifierHasBeenSet = true;
    m_microvmIdentifier = std::forward<MicrovmIdentifierT>(value);
  }
  template <typename MicrovmIdentifierT = Aws::String>
  CreateMicrovmAuthTokenRequest& WithMicrovmIdentifier(MicrovmIdentifierT&& value) {
    SetMicrovmIdentifier(std::forward<MicrovmIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The duration in minutes before the authentication token expires. Maximum: 60
   * minutes.</p>
   */
  inline int GetExpirationInMinutes() const { return m_expirationInMinutes; }
  inline bool ExpirationInMinutesHasBeenSet() const { return m_expirationInMinutesHasBeenSet; }
  inline void SetExpirationInMinutes(int value) {
    m_expirationInMinutesHasBeenSet = true;
    m_expirationInMinutes = value;
  }
  inline CreateMicrovmAuthTokenRequest& WithExpirationInMinutes(int value) {
    SetExpirationInMinutes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of port specifications that the authentication token grants access
   * to on the MicroVM.</p>
   */
  inline const Aws::Vector<PortSpecification>& GetAllowedPorts() const { return m_allowedPorts; }
  inline bool AllowedPortsHasBeenSet() const { return m_allowedPortsHasBeenSet; }
  template <typename AllowedPortsT = Aws::Vector<PortSpecification>>
  void SetAllowedPorts(AllowedPortsT&& value) {
    m_allowedPortsHasBeenSet = true;
    m_allowedPorts = std::forward<AllowedPortsT>(value);
  }
  template <typename AllowedPortsT = Aws::Vector<PortSpecification>>
  CreateMicrovmAuthTokenRequest& WithAllowedPorts(AllowedPortsT&& value) {
    SetAllowedPorts(std::forward<AllowedPortsT>(value));
    return *this;
  }
  template <typename AllowedPortsT = PortSpecification>
  CreateMicrovmAuthTokenRequest& AddAllowedPorts(AllowedPortsT&& value) {
    m_allowedPortsHasBeenSet = true;
    m_allowedPorts.emplace_back(std::forward<AllowedPortsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_microvmIdentifier;

  int m_expirationInMinutes{0};

  Aws::Vector<PortSpecification> m_allowedPorts;
  bool m_microvmIdentifierHasBeenSet = false;
  bool m_expirationInMinutesHasBeenSet = false;
  bool m_allowedPortsHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
