/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/ObservationConfiguration.h>
#include <aws/glue/model/ObservationMode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {

/**
 * <p>The run configuration for a data quality result.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DataQualityConfigurationV2">AWS
 * API Reference</a></p>
 */
class DataQualityConfigurationV2 {
 public:
  AWS_GLUE_API DataQualityConfigurationV2() = default;
  AWS_GLUE_API DataQualityConfigurationV2(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API DataQualityConfigurationV2& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether observations are enabled for the run. Valid values are:</p> <ul> <li>
   * <p> <code>ALL</code> </p> </li> <li> <p> <code>NONE</code> </p> </li> </ul>
   */
  inline ObservationConfiguration GetObservationsEnabled() const { return m_observationsEnabled; }
  inline bool ObservationsEnabledHasBeenSet() const { return m_observationsEnabledHasBeenSet; }
  inline void SetObservationsEnabled(ObservationConfiguration value) {
    m_observationsEnabledHasBeenSet = true;
    m_observationsEnabled = value;
  }
  inline DataQualityConfigurationV2& WithObservationsEnabled(ObservationConfiguration value) {
    SetObservationsEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The observation mode for the run. Valid values are:</p> <ul> <li> <p>
   * <code>SCHEDULED</code> </p> </li> <li> <p> <code>FIXED</code> </p> </li> </ul>
   */
  inline ObservationMode GetObservationMode() const { return m_observationMode; }
  inline bool ObservationModeHasBeenSet() const { return m_observationModeHasBeenSet; }
  inline void SetObservationMode(ObservationMode value) {
    m_observationModeHasBeenSet = true;
    m_observationMode = value;
  }
  inline DataQualityConfigurationV2& WithObservationMode(ObservationMode value) {
    SetObservationMode(value);
    return *this;
  }
  ///@}
 private:
  ObservationConfiguration m_observationsEnabled{ObservationConfiguration::NOT_SET};

  ObservationMode m_observationMode{ObservationMode::NOT_SET};
  bool m_observationsEnabledHasBeenSet = false;
  bool m_observationModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
