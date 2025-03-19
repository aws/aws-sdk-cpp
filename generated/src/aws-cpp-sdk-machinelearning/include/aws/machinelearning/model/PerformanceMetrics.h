/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace MachineLearning
{
namespace Model
{

  /**
   * <p>Measurements of how well the <code>MLModel</code> performed on known
   * observations. One of the following metrics is returned, based on the type of the
   * <code>MLModel</code>: </p> <ul> <li> <p>BinaryAUC: The binary
   * <code>MLModel</code> uses the Area Under the Curve (AUC) technique to measure
   * performance. </p> </li> <li> <p>RegressionRMSE: The regression
   * <code>MLModel</code> uses the Root Mean Square Error (RMSE) technique to measure
   * performance. RMSE measures the difference between predicted and actual values
   * for a single variable.</p> </li> <li> <p>MulticlassAvgFScore: The multiclass
   * <code>MLModel</code> uses the F1 score technique to measure performance. </p>
   * </li> </ul> <p> For more information about performance metrics, please see the
   * <a href="https://docs.aws.amazon.com/machine-learning/latest/dg">Amazon Machine
   * Learning Developer Guide</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/PerformanceMetrics">AWS
   * API Reference</a></p>
   */
  class PerformanceMetrics
  {
  public:
    AWS_MACHINELEARNING_API PerformanceMetrics() = default;
    AWS_MACHINELEARNING_API PerformanceMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACHINELEARNING_API PerformanceMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACHINELEARNING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetProperties() const { return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    template<typename PropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetProperties(PropertiesT&& value) { m_propertiesHasBeenSet = true; m_properties = std::forward<PropertiesT>(value); }
    template<typename PropertiesT = Aws::Map<Aws::String, Aws::String>>
    PerformanceMetrics& WithProperties(PropertiesT&& value) { SetProperties(std::forward<PropertiesT>(value)); return *this;}
    template<typename PropertiesKeyT = Aws::String, typename PropertiesValueT = Aws::String>
    PerformanceMetrics& AddProperties(PropertiesKeyT&& key, PropertiesValueT&& value) {
      m_propertiesHasBeenSet = true; m_properties.emplace(std::forward<PropertiesKeyT>(key), std::forward<PropertiesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_properties;
    bool m_propertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
