/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/model/ACMManaged.h>
#include <aws/apigatewayv2/model/None.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ApiGatewayV2 {
namespace Model {

/**
 * <p>Represents an endpoint configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/EndpointConfigurationRequest">AWS
 * API Reference</a></p>
 */
class EndpointConfigurationRequest {
 public:
  AWS_APIGATEWAYV2_API EndpointConfigurationRequest() = default;
  AWS_APIGATEWAYV2_API EndpointConfigurationRequest(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAYV2_API EndpointConfigurationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Represents a domain name and certificate for a portal.</p>
   */
  inline const ACMManaged& GetAcmManaged() const { return m_acmManaged; }
  inline bool AcmManagedHasBeenSet() const { return m_acmManagedHasBeenSet; }
  template <typename AcmManagedT = ACMManaged>
  void SetAcmManaged(AcmManagedT&& value) {
    m_acmManagedHasBeenSet = true;
    m_acmManaged = std::forward<AcmManagedT>(value);
  }
  template <typename AcmManagedT = ACMManaged>
  EndpointConfigurationRequest& WithAcmManaged(AcmManagedT&& value) {
    SetAcmManaged(std::forward<AcmManagedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Use the default portal domain name that is generated and managed by API
   * Gateway.</p>
   */
  inline const None& GetNone() const { return m_none; }
  inline bool NoneHasBeenSet() const { return m_noneHasBeenSet; }
  template <typename NoneT = None>
  void SetNone(NoneT&& value) {
    m_noneHasBeenSet = true;
    m_none = std::forward<NoneT>(value);
  }
  template <typename NoneT = None>
  EndpointConfigurationRequest& WithNone(NoneT&& value) {
    SetNone(std::forward<NoneT>(value));
    return *this;
  }
  ///@}
 private:
  ACMManaged m_acmManaged;

  None m_none;
  bool m_acmManagedHasBeenSet = false;
  bool m_noneHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
