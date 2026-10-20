/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/GatewayElbAccessLogS3Destination.h>

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
 * <p>The destination where the access logs for a gateway's load balancers are
 * delivered.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/GatewayElbAccessLogDestination">AWS
 * API Reference</a></p>
 */
class GatewayElbAccessLogDestination {
 public:
  AWS_ECS_API GatewayElbAccessLogDestination() = default;
  AWS_ECS_API GatewayElbAccessLogDestination(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API GatewayElbAccessLogDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon S3 destination for access logs.</p>
   */
  inline const GatewayElbAccessLogS3Destination& GetS3() const { return m_s3; }
  inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
  template <typename S3T = GatewayElbAccessLogS3Destination>
  void SetS3(S3T&& value) {
    m_s3HasBeenSet = true;
    m_s3 = std::forward<S3T>(value);
  }
  template <typename S3T = GatewayElbAccessLogS3Destination>
  GatewayElbAccessLogDestination& WithS3(S3T&& value) {
    SetS3(std::forward<S3T>(value));
    return *this;
  }
  ///@}
 private:
  GatewayElbAccessLogS3Destination m_s3;
  bool m_s3HasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
