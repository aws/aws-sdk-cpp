/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/AnalyticsStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace HealthLake {
namespace Model {

/**
 * <para>The analytics configuration for a data store.</para><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/AnalyticsConfiguration">AWS
 * API Reference</a></p>
 */
class AnalyticsConfiguration {
 public:
  AWS_HEALTHLAKE_API AnalyticsConfiguration() = default;
  AWS_HEALTHLAKE_API AnalyticsConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API AnalyticsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <para>The status of the analytics configuration.</para>
   */
  inline AnalyticsStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(AnalyticsStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AnalyticsConfiguration& WithStatus(AnalyticsStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  AnalyticsStatus m_status{AnalyticsStatus::NOT_SET};
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
