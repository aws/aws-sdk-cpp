/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>

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
namespace LookoutEquipment
{
namespace Model
{

  /**
   * <p> Entity that comprises aggregated information on sensors having insufficient
   * data. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/InvalidSensorData">AWS
   * API Reference</a></p>
   */
  class InvalidSensorData
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API InvalidSensorData();
    AWS_LOOKOUTEQUIPMENT_API InvalidSensorData(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API InvalidSensorData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Indicates the number of sensors that have at least some invalid values. </p>
     */
    inline int GetAffectedSensorCount() const{ return m_affectedSensorCount; }

    /**
     * <p> Indicates the number of sensors that have at least some invalid values. </p>
     */
    inline bool AffectedSensorCountHasBeenSet() const { return m_affectedSensorCountHasBeenSet; }

    /**
     * <p> Indicates the number of sensors that have at least some invalid values. </p>
     */
    inline void SetAffectedSensorCount(int value) { m_affectedSensorCountHasBeenSet = true; m_affectedSensorCount = value; }

    /**
     * <p> Indicates the number of sensors that have at least some invalid values. </p>
     */
    inline InvalidSensorData& WithAffectedSensorCount(int value) { SetAffectedSensorCount(value); return *this;}


    /**
     * <p> Indicates the total number of invalid values across all the sensors. </p>
     */
    inline int GetTotalNumberOfInvalidValues() const{ return m_totalNumberOfInvalidValues; }

    /**
     * <p> Indicates the total number of invalid values across all the sensors. </p>
     */
    inline bool TotalNumberOfInvalidValuesHasBeenSet() const { return m_totalNumberOfInvalidValuesHasBeenSet; }

    /**
     * <p> Indicates the total number of invalid values across all the sensors. </p>
     */
    inline void SetTotalNumberOfInvalidValues(int value) { m_totalNumberOfInvalidValuesHasBeenSet = true; m_totalNumberOfInvalidValues = value; }

    /**
     * <p> Indicates the total number of invalid values across all the sensors. </p>
     */
    inline InvalidSensorData& WithTotalNumberOfInvalidValues(int value) { SetTotalNumberOfInvalidValues(value); return *this;}

  private:

    int m_affectedSensorCount;
    bool m_affectedSensorCountHasBeenSet = false;

    int m_totalNumberOfInvalidValues;
    bool m_totalNumberOfInvalidValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
