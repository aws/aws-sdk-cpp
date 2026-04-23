/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <a href="http://docs.aws.amazon.com/machine-learning/latest/dg">Amazon Machine
   * Learning Developer Guide</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/PerformanceMetrics">AWS
   * API Reference</a></p>
   */
  class AWS_MACHINELEARNING_API PerformanceMetrics
  {
  public:
    PerformanceMetrics();
    PerformanceMetrics(Aws::Utils::Json::JsonView jsonValue);
    PerformanceMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::Map<Aws::String, Aws::String>& GetProperties() const{ return m_properties; }

    
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }

    
    inline void SetProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_propertiesHasBeenSet = true; m_properties = value; }

    
    inline void SetProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }

    
    inline PerformanceMetrics& WithProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetProperties(value); return *this;}

    
    inline PerformanceMetrics& WithProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetProperties(std::move(value)); return *this;}

    
    inline PerformanceMetrics& AddProperties(const Aws::String& key, const Aws::String& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, value); return *this; }

    
    inline PerformanceMetrics& AddProperties(Aws::String&& key, const Aws::String& value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), value); return *this; }

    
    inline PerformanceMetrics& AddProperties(const Aws::String& key, Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, std::move(value)); return *this; }

    
    inline PerformanceMetrics& AddProperties(Aws::String&& key, Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), std::move(value)); return *this; }

    
    inline PerformanceMetrics& AddProperties(const char* key, Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, std::move(value)); return *this; }

    
    inline PerformanceMetrics& AddProperties(Aws::String&& key, const char* value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), value); return *this; }

    
    inline PerformanceMetrics& AddProperties(const char* key, const char* value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::String> m_properties;
    bool m_propertiesHasBeenSet;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
