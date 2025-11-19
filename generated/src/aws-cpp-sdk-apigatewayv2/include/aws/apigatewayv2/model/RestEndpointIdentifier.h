/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/model/IdentifierParts.h>

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
 * <p>The REST API endpoint identifier.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/RestEndpointIdentifier">AWS
 * API Reference</a></p>
 */
class RestEndpointIdentifier {
 public:
  AWS_APIGATEWAYV2_API RestEndpointIdentifier() = default;
  AWS_APIGATEWAYV2_API RestEndpointIdentifier(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAYV2_API RestEndpointIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier parts of the REST endpoint identifier.</p>
   */
  inline const IdentifierParts& GetIdentifierParts() const { return m_identifierParts; }
  inline bool IdentifierPartsHasBeenSet() const { return m_identifierPartsHasBeenSet; }
  template <typename IdentifierPartsT = IdentifierParts>
  void SetIdentifierParts(IdentifierPartsT&& value) {
    m_identifierPartsHasBeenSet = true;
    m_identifierParts = std::forward<IdentifierPartsT>(value);
  }
  template <typename IdentifierPartsT = IdentifierParts>
  RestEndpointIdentifier& WithIdentifierParts(IdentifierPartsT&& value) {
    SetIdentifierParts(std::forward<IdentifierPartsT>(value));
    return *this;
  }
  ///@}
 private:
  IdentifierParts m_identifierParts;
  bool m_identifierPartsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
