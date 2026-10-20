/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECS {
namespace Model {

/**
 * <p>The codes that indicate a successful health check response from a
 * target.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/GatewayConnectorHealthCheckMatcher">AWS
 * API Reference</a></p>
 */
class GatewayConnectorHealthCheckMatcher {
 public:
  AWS_ECS_API GatewayConnectorHealthCheckMatcher() = default;
  AWS_ECS_API GatewayConnectorHealthCheckMatcher(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API GatewayConnectorHealthCheckMatcher& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The HTTP codes that indicate a successful response from a target.</p>
   */
  inline const Aws::String& GetHttpCode() const { return m_httpCode; }
  inline bool HttpCodeHasBeenSet() const { return m_httpCodeHasBeenSet; }
  template <typename HttpCodeT = Aws::String>
  void SetHttpCode(HttpCodeT&& value) {
    m_httpCodeHasBeenSet = true;
    m_httpCode = std::forward<HttpCodeT>(value);
  }
  template <typename HttpCodeT = Aws::String>
  GatewayConnectorHealthCheckMatcher& WithHttpCode(HttpCodeT&& value) {
    SetHttpCode(std::forward<HttpCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The gRPC codes that indicate a successful response from a target.</p>
   */
  inline const Aws::String& GetGrpcCode() const { return m_grpcCode; }
  inline bool GrpcCodeHasBeenSet() const { return m_grpcCodeHasBeenSet; }
  template <typename GrpcCodeT = Aws::String>
  void SetGrpcCode(GrpcCodeT&& value) {
    m_grpcCodeHasBeenSet = true;
    m_grpcCode = std::forward<GrpcCodeT>(value);
  }
  template <typename GrpcCodeT = Aws::String>
  GatewayConnectorHealthCheckMatcher& WithGrpcCode(GrpcCodeT&& value) {
    SetGrpcCode(std::forward<GrpcCodeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_httpCode;

  Aws::String m_grpcCode;
  bool m_httpCodeHasBeenSet = false;
  bool m_grpcCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
