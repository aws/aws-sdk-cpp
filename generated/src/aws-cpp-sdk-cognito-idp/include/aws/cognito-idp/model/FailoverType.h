/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Specifies failover configuration for multi-region user pool domains. Contains
 * settings for the secondary region and health check configuration.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/FailoverType">AWS
 * API Reference</a></p>
 */
class FailoverType {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API FailoverType() = default;
  AWS_COGNITOIDENTITYPROVIDER_API FailoverType(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API FailoverType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The secondary Amazon Web Services Region to use for failover when the primary
   * region becomes unavailable.</p>
   */
  inline const Aws::String& GetSecondaryRegion() const { return m_secondaryRegion; }
  inline bool SecondaryRegionHasBeenSet() const { return m_secondaryRegionHasBeenSet; }
  template <typename SecondaryRegionT = Aws::String>
  void SetSecondaryRegion(SecondaryRegionT&& value) {
    m_secondaryRegionHasBeenSet = true;
    m_secondaryRegion = std::forward<SecondaryRegionT>(value);
  }
  template <typename SecondaryRegionT = Aws::String>
  FailoverType& WithSecondaryRegion(SecondaryRegionT&& value) {
    SetSecondaryRegion(std::forward<SecondaryRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Amazon Web Services Route53 healthcheck that controls routing.
   * If the healthcheck is healthy, traffic will be routed to the primary replica,
   * and if the healthcheck is unhealthy, traffic will be routed to the secondary
   * region.</p>
   */
  inline const Aws::String& GetPrimaryRoute53HealthCheckId() const { return m_primaryRoute53HealthCheckId; }
  inline bool PrimaryRoute53HealthCheckIdHasBeenSet() const { return m_primaryRoute53HealthCheckIdHasBeenSet; }
  template <typename PrimaryRoute53HealthCheckIdT = Aws::String>
  void SetPrimaryRoute53HealthCheckId(PrimaryRoute53HealthCheckIdT&& value) {
    m_primaryRoute53HealthCheckIdHasBeenSet = true;
    m_primaryRoute53HealthCheckId = std::forward<PrimaryRoute53HealthCheckIdT>(value);
  }
  template <typename PrimaryRoute53HealthCheckIdT = Aws::String>
  FailoverType& WithPrimaryRoute53HealthCheckId(PrimaryRoute53HealthCheckIdT&& value) {
    SetPrimaryRoute53HealthCheckId(std::forward<PrimaryRoute53HealthCheckIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_secondaryRegion;

  Aws::String m_primaryRoute53HealthCheckId;
  bool m_secondaryRegionHasBeenSet = false;
  bool m_primaryRoute53HealthCheckIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
