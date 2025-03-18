/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/model/DeltaTimeSessionWindowConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>The information needed to configure a delta time session
   * window.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/LateDataRuleConfiguration">AWS
   * API Reference</a></p>
   */
  class LateDataRuleConfiguration
  {
  public:
    AWS_IOTANALYTICS_API LateDataRuleConfiguration() = default;
    AWS_IOTANALYTICS_API LateDataRuleConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API LateDataRuleConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The information needed to configure a delta time session window.</p>
     */
    inline const DeltaTimeSessionWindowConfiguration& GetDeltaTimeSessionWindowConfiguration() const { return m_deltaTimeSessionWindowConfiguration; }
    inline bool DeltaTimeSessionWindowConfigurationHasBeenSet() const { return m_deltaTimeSessionWindowConfigurationHasBeenSet; }
    template<typename DeltaTimeSessionWindowConfigurationT = DeltaTimeSessionWindowConfiguration>
    void SetDeltaTimeSessionWindowConfiguration(DeltaTimeSessionWindowConfigurationT&& value) { m_deltaTimeSessionWindowConfigurationHasBeenSet = true; m_deltaTimeSessionWindowConfiguration = std::forward<DeltaTimeSessionWindowConfigurationT>(value); }
    template<typename DeltaTimeSessionWindowConfigurationT = DeltaTimeSessionWindowConfiguration>
    LateDataRuleConfiguration& WithDeltaTimeSessionWindowConfiguration(DeltaTimeSessionWindowConfigurationT&& value) { SetDeltaTimeSessionWindowConfiguration(std::forward<DeltaTimeSessionWindowConfigurationT>(value)); return *this;}
    ///@}
  private:

    DeltaTimeSessionWindowConfiguration m_deltaTimeSessionWindowConfiguration;
    bool m_deltaTimeSessionWindowConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
