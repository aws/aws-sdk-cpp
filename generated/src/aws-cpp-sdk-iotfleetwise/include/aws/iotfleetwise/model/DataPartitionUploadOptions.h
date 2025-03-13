/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>The upload options for the data partition. If upload options are specified,
   * you must also specify storage options. See <a
   * href="https://docs.aws.amazon.com/iot-fleetwise/latest/APIReference/API_DataPartitionStorageOptions.html">DataPartitionStorageOptions</a>.</p>
   *  <p>Access to certain Amazon Web Services IoT FleetWise features is
   * currently gated. For more information, see <a
   * href="https://docs.aws.amazon.com/iot-fleetwise/latest/developerguide/fleetwise-regions.html">Amazon
   * Web Services Region and feature availability</a> in the <i>Amazon Web Services
   * IoT FleetWise Developer Guide</i>.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/DataPartitionUploadOptions">AWS
   * API Reference</a></p>
   */
  class DataPartitionUploadOptions
  {
  public:
    AWS_IOTFLEETWISE_API DataPartitionUploadOptions() = default;
    AWS_IOTFLEETWISE_API DataPartitionUploadOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API DataPartitionUploadOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The logical expression used to recognize what data to collect. For example,
     * <code>$variable.`Vehicle.OutsideAirTemperature` &gt;= 105.0</code>.</p>
     */
    inline const Aws::String& GetExpression() const { return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    template<typename ExpressionT = Aws::String>
    void SetExpression(ExpressionT&& value) { m_expressionHasBeenSet = true; m_expression = std::forward<ExpressionT>(value); }
    template<typename ExpressionT = Aws::String>
    DataPartitionUploadOptions& WithExpression(ExpressionT&& value) { SetExpression(std::forward<ExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the condition language. Defaults to the most recent condition
     * language version.</p>
     */
    inline int GetConditionLanguageVersion() const { return m_conditionLanguageVersion; }
    inline bool ConditionLanguageVersionHasBeenSet() const { return m_conditionLanguageVersionHasBeenSet; }
    inline void SetConditionLanguageVersion(int value) { m_conditionLanguageVersionHasBeenSet = true; m_conditionLanguageVersion = value; }
    inline DataPartitionUploadOptions& WithConditionLanguageVersion(int value) { SetConditionLanguageVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    int m_conditionLanguageVersion{0};
    bool m_conditionLanguageVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
