/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains the configuration of the type of anomaly detection computation
   * model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ComputationModelAnomalyDetectionConfiguration">AWS
   * API Reference</a></p>
   */
  class ComputationModelAnomalyDetectionConfiguration
  {
  public:
    AWS_IOTSITEWISE_API ComputationModelAnomalyDetectionConfiguration() = default;
    AWS_IOTSITEWISE_API ComputationModelAnomalyDetectionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API ComputationModelAnomalyDetectionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Define the variable name associated with input properties, with the following
     * format <code>${VariableName}</code>.</p>
     */
    inline const Aws::String& GetInputProperties() const { return m_inputProperties; }
    inline bool InputPropertiesHasBeenSet() const { return m_inputPropertiesHasBeenSet; }
    template<typename InputPropertiesT = Aws::String>
    void SetInputProperties(InputPropertiesT&& value) { m_inputPropertiesHasBeenSet = true; m_inputProperties = std::forward<InputPropertiesT>(value); }
    template<typename InputPropertiesT = Aws::String>
    ComputationModelAnomalyDetectionConfiguration& WithInputProperties(InputPropertiesT&& value) { SetInputProperties(std::forward<InputPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Define the variable name associated with the result property, and the
     * following format <code>${VariableName}</code>.</p>
     */
    inline const Aws::String& GetResultProperty() const { return m_resultProperty; }
    inline bool ResultPropertyHasBeenSet() const { return m_resultPropertyHasBeenSet; }
    template<typename ResultPropertyT = Aws::String>
    void SetResultProperty(ResultPropertyT&& value) { m_resultPropertyHasBeenSet = true; m_resultProperty = std::forward<ResultPropertyT>(value); }
    template<typename ResultPropertyT = Aws::String>
    ComputationModelAnomalyDetectionConfiguration& WithResultProperty(ResultPropertyT&& value) { SetResultProperty(std::forward<ResultPropertyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_inputProperties;
    bool m_inputPropertiesHasBeenSet = false;

    Aws::String m_resultProperty;
    bool m_resultPropertyHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
