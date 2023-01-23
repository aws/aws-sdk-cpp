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
   * <p> Entity that comprises aggregated information on sensors having missing data.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/MissingSensorData">AWS
   * API Reference</a></p>
   */
  class MissingSensorData
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API MissingSensorData();
    AWS_LOOKOUTEQUIPMENT_API MissingSensorData(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API MissingSensorData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Indicates the number of sensors that have atleast some data missing. </p>
     */
    inline int GetAffectedSensorCount() const{ return m_affectedSensorCount; }

    /**
     * <p> Indicates the number of sensors that have atleast some data missing. </p>
     */
    inline bool AffectedSensorCountHasBeenSet() const { return m_affectedSensorCountHasBeenSet; }

    /**
     * <p> Indicates the number of sensors that have atleast some data missing. </p>
     */
    inline void SetAffectedSensorCount(int value) { m_affectedSensorCountHasBeenSet = true; m_affectedSensorCount = value; }

    /**
     * <p> Indicates the number of sensors that have atleast some data missing. </p>
     */
    inline MissingSensorData& WithAffectedSensorCount(int value) { SetAffectedSensorCount(value); return *this;}


    /**
     * <p> Indicates the total number of missing values across all the sensors. </p>
     */
    inline int GetTotalNumberOfMissingValues() const{ return m_totalNumberOfMissingValues; }

    /**
     * <p> Indicates the total number of missing values across all the sensors. </p>
     */
    inline bool TotalNumberOfMissingValuesHasBeenSet() const { return m_totalNumberOfMissingValuesHasBeenSet; }

    /**
     * <p> Indicates the total number of missing values across all the sensors. </p>
     */
    inline void SetTotalNumberOfMissingValues(int value) { m_totalNumberOfMissingValuesHasBeenSet = true; m_totalNumberOfMissingValues = value; }

    /**
     * <p> Indicates the total number of missing values across all the sensors. </p>
     */
    inline MissingSensorData& WithTotalNumberOfMissingValues(int value) { SetTotalNumberOfMissingValues(value); return *this;}

  private:

    int m_affectedSensorCount;
    bool m_affectedSensorCountHasBeenSet = false;

    int m_totalNumberOfMissingValues;
    bool m_totalNumberOfMissingValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
