/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CustomerProfiles {
namespace Model {

/**
 * <p>Configuration settings for inference behavior of the
 * recommender.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/InferenceConfig">AWS
 * API Reference</a></p>
 */
class InferenceConfig {
 public:
  AWS_CUSTOMERPROFILES_API InferenceConfig() = default;
  AWS_CUSTOMERPROFILES_API InferenceConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API InferenceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The minimum provisioned transactions per second (TPS) that the recommender
   * supports. The default value is 1. A high MinProvisionedTPS will increase your
   * cost.</p>
   */
  inline int GetMinProvisionedTPS() const { return m_minProvisionedTPS; }
  inline bool MinProvisionedTPSHasBeenSet() const { return m_minProvisionedTPSHasBeenSet; }
  inline void SetMinProvisionedTPS(int value) {
    m_minProvisionedTPSHasBeenSet = true;
    m_minProvisionedTPS = value;
  }
  inline InferenceConfig& WithMinProvisionedTPS(int value) {
    SetMinProvisionedTPS(value);
    return *this;
  }
  ///@}
 private:
  int m_minProvisionedTPS{0};
  bool m_minProvisionedTPSHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
