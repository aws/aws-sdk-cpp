/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/FailoverType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CognitoIdentityProvider {
namespace Model {

/**
 * <p>Specifies routing configuration for user pool domains. Contains failover
 * settings for multi-region deployments.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/RoutingType">AWS
 * API Reference</a></p>
 */
class RoutingType {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API RoutingType() = default;
  AWS_COGNITOIDENTITYPROVIDER_API RoutingType(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API RoutingType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The failover configuration that specifies the secondary region and health
   * check settings.</p>
   */
  inline const FailoverType& GetFailover() const { return m_failover; }
  inline bool FailoverHasBeenSet() const { return m_failoverHasBeenSet; }
  template <typename FailoverT = FailoverType>
  void SetFailover(FailoverT&& value) {
    m_failoverHasBeenSet = true;
    m_failover = std::forward<FailoverT>(value);
  }
  template <typename FailoverT = FailoverType>
  RoutingType& WithFailover(FailoverT&& value) {
    SetFailover(std::forward<FailoverT>(value));
    return *this;
  }
  ///@}
 private:
  FailoverType m_failover;
  bool m_failoverHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
