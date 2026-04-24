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
 * <p>Contains percentile statistics for object type attributes.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/GetObjectTypeAttributeStatisticsPercentiles">AWS
 * API Reference</a></p>
 */
class GetObjectTypeAttributeStatisticsPercentiles {
 public:
  AWS_CUSTOMERPROFILES_API GetObjectTypeAttributeStatisticsPercentiles() = default;
  AWS_CUSTOMERPROFILES_API GetObjectTypeAttributeStatisticsPercentiles(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API GetObjectTypeAttributeStatisticsPercentiles& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The 5th percentile value of the attribute.</p>
   */
  inline double GetP5() const { return m_p5; }
  inline bool P5HasBeenSet() const { return m_p5HasBeenSet; }
  inline void SetP5(double value) {
    m_p5HasBeenSet = true;
    m_p5 = value;
  }
  inline GetObjectTypeAttributeStatisticsPercentiles& WithP5(double value) {
    SetP5(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The 25th percentile value of the attribute.</p>
   */
  inline double GetP25() const { return m_p25; }
  inline bool P25HasBeenSet() const { return m_p25HasBeenSet; }
  inline void SetP25(double value) {
    m_p25HasBeenSet = true;
    m_p25 = value;
  }
  inline GetObjectTypeAttributeStatisticsPercentiles& WithP25(double value) {
    SetP25(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The 50th percentile (median) value of the attribute.</p>
   */
  inline double GetP50() const { return m_p50; }
  inline bool P50HasBeenSet() const { return m_p50HasBeenSet; }
  inline void SetP50(double value) {
    m_p50HasBeenSet = true;
    m_p50 = value;
  }
  inline GetObjectTypeAttributeStatisticsPercentiles& WithP50(double value) {
    SetP50(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The 75th percentile value of the attribute.</p>
   */
  inline double GetP75() const { return m_p75; }
  inline bool P75HasBeenSet() const { return m_p75HasBeenSet; }
  inline void SetP75(double value) {
    m_p75HasBeenSet = true;
    m_p75 = value;
  }
  inline GetObjectTypeAttributeStatisticsPercentiles& WithP75(double value) {
    SetP75(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The 95th percentile value of the attribute.</p>
   */
  inline double GetP95() const { return m_p95; }
  inline bool P95HasBeenSet() const { return m_p95HasBeenSet; }
  inline void SetP95(double value) {
    m_p95HasBeenSet = true;
    m_p95 = value;
  }
  inline GetObjectTypeAttributeStatisticsPercentiles& WithP95(double value) {
    SetP95(value);
    return *this;
  }
  ///@}
 private:
  double m_p5{0.0};

  double m_p25{0.0};

  double m_p50{0.0};

  double m_p75{0.0};

  double m_p95{0.0};
  bool m_p5HasBeenSet = false;
  bool m_p25HasBeenSet = false;
  bool m_p50HasBeenSet = false;
  bool m_p75HasBeenSet = false;
  bool m_p95HasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
