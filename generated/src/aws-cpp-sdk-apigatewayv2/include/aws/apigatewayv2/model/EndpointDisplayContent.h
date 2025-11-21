/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/model/DisplayContentOverrides.h>
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
 * <p>Represents the endpoint display content.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/EndpointDisplayContent">AWS
 * API Reference</a></p>
 */
class EndpointDisplayContent {
 public:
  AWS_APIGATEWAYV2_API EndpointDisplayContent() = default;
  AWS_APIGATEWAYV2_API EndpointDisplayContent(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAYV2_API EndpointDisplayContent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>If your product REST endpoint contains no overrides, the none object is
   * returned.</p>
   */
  inline const None& GetNone() const { return m_none; }
  inline bool NoneHasBeenSet() const { return m_noneHasBeenSet; }
  template <typename NoneT = None>
  void SetNone(NoneT&& value) {
    m_noneHasBeenSet = true;
    m_none = std::forward<NoneT>(value);
  }
  template <typename NoneT = None>
  EndpointDisplayContent& WithNone(NoneT&& value) {
    SetNone(std::forward<NoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The overrides for endpoint display content.</p>
   */
  inline const DisplayContentOverrides& GetOverrides() const { return m_overrides; }
  inline bool OverridesHasBeenSet() const { return m_overridesHasBeenSet; }
  template <typename OverridesT = DisplayContentOverrides>
  void SetOverrides(OverridesT&& value) {
    m_overridesHasBeenSet = true;
    m_overrides = std::forward<OverridesT>(value);
  }
  template <typename OverridesT = DisplayContentOverrides>
  EndpointDisplayContent& WithOverrides(OverridesT&& value) {
    SetOverrides(std::forward<OverridesT>(value));
    return *this;
  }
  ///@}
 private:
  None m_none;
  bool m_noneHasBeenSet = false;

  DisplayContentOverrides m_overrides;
  bool m_overridesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
