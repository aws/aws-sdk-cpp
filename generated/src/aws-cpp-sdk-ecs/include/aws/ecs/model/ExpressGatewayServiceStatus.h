/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/ExpressGatewayServiceStatusCode.h>

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
 * <p>An object that defines the status of Express service creation and information
 * about the status of the service.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ExpressGatewayServiceStatus">AWS
 * API Reference</a></p>
 */
class ExpressGatewayServiceStatus {
 public:
  AWS_ECS_API ExpressGatewayServiceStatus() = default;
  AWS_ECS_API ExpressGatewayServiceStatus(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API ExpressGatewayServiceStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The status of the Express service.</p>
   */
  inline ExpressGatewayServiceStatusCode GetStatusCode() const { return m_statusCode; }
  inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
  inline void SetStatusCode(ExpressGatewayServiceStatusCode value) {
    m_statusCodeHasBeenSet = true;
    m_statusCode = value;
  }
  inline ExpressGatewayServiceStatus& WithStatusCode(ExpressGatewayServiceStatusCode value) {
    SetStatusCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about why the Express service is in the current status.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  ExpressGatewayServiceStatus& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}
 private:
  ExpressGatewayServiceStatusCode m_statusCode{ExpressGatewayServiceStatusCode::NOT_SET};
  bool m_statusCodeHasBeenSet = false;

  Aws::String m_statusReason;
  bool m_statusReasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
