/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/model/TargetSamplingRate.h>
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
namespace LookoutEquipment
{
namespace Model
{

  /**
   * <p>The configuration is the <code>TargetSamplingRate</code>, which is the
   * sampling rate of the data after post processing by Amazon Lookout for Equipment.
   * For example, if you provide data that has been collected at a 1 second level and
   * you want the system to resample the data at a 1 minute rate before training, the
   * <code>TargetSamplingRate</code> is 1 minute.</p> <p>When providing a value for
   * the <code>TargetSamplingRate</code>, you must attach the prefix "PT" to the rate
   * you want. The value for a 1 second rate is therefore <i>PT1S</i>, the value for
   * a 15 minute rate is <i>PT15M</i>, and the value for a 1 hour rate is <i>PT1H</i>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DataPreProcessingConfiguration">AWS
   * API Reference</a></p>
   */
  class DataPreProcessingConfiguration
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API DataPreProcessingConfiguration();
    AWS_LOOKOUTEQUIPMENT_API DataPreProcessingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API DataPreProcessingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The sampling rate of the data after post processing by Amazon Lookout for
     * Equipment. For example, if you provide data that has been collected at a 1
     * second level and you want the system to resample the data at a 1 minute rate
     * before training, the <code>TargetSamplingRate</code> is 1 minute.</p> <p>When
     * providing a value for the <code>TargetSamplingRate</code>, you must attach the
     * prefix "PT" to the rate you want. The value for a 1 second rate is therefore
     * <i>PT1S</i>, the value for a 15 minute rate is <i>PT15M</i>, and the value for a
     * 1 hour rate is <i>PT1H</i> </p>
     */
    inline const TargetSamplingRate& GetTargetSamplingRate() const{ return m_targetSamplingRate; }

    /**
     * <p>The sampling rate of the data after post processing by Amazon Lookout for
     * Equipment. For example, if you provide data that has been collected at a 1
     * second level and you want the system to resample the data at a 1 minute rate
     * before training, the <code>TargetSamplingRate</code> is 1 minute.</p> <p>When
     * providing a value for the <code>TargetSamplingRate</code>, you must attach the
     * prefix "PT" to the rate you want. The value for a 1 second rate is therefore
     * <i>PT1S</i>, the value for a 15 minute rate is <i>PT15M</i>, and the value for a
     * 1 hour rate is <i>PT1H</i> </p>
     */
    inline bool TargetSamplingRateHasBeenSet() const { return m_targetSamplingRateHasBeenSet; }

    /**
     * <p>The sampling rate of the data after post processing by Amazon Lookout for
     * Equipment. For example, if you provide data that has been collected at a 1
     * second level and you want the system to resample the data at a 1 minute rate
     * before training, the <code>TargetSamplingRate</code> is 1 minute.</p> <p>When
     * providing a value for the <code>TargetSamplingRate</code>, you must attach the
     * prefix "PT" to the rate you want. The value for a 1 second rate is therefore
     * <i>PT1S</i>, the value for a 15 minute rate is <i>PT15M</i>, and the value for a
     * 1 hour rate is <i>PT1H</i> </p>
     */
    inline void SetTargetSamplingRate(const TargetSamplingRate& value) { m_targetSamplingRateHasBeenSet = true; m_targetSamplingRate = value; }

    /**
     * <p>The sampling rate of the data after post processing by Amazon Lookout for
     * Equipment. For example, if you provide data that has been collected at a 1
     * second level and you want the system to resample the data at a 1 minute rate
     * before training, the <code>TargetSamplingRate</code> is 1 minute.</p> <p>When
     * providing a value for the <code>TargetSamplingRate</code>, you must attach the
     * prefix "PT" to the rate you want. The value for a 1 second rate is therefore
     * <i>PT1S</i>, the value for a 15 minute rate is <i>PT15M</i>, and the value for a
     * 1 hour rate is <i>PT1H</i> </p>
     */
    inline void SetTargetSamplingRate(TargetSamplingRate&& value) { m_targetSamplingRateHasBeenSet = true; m_targetSamplingRate = std::move(value); }

    /**
     * <p>The sampling rate of the data after post processing by Amazon Lookout for
     * Equipment. For example, if you provide data that has been collected at a 1
     * second level and you want the system to resample the data at a 1 minute rate
     * before training, the <code>TargetSamplingRate</code> is 1 minute.</p> <p>When
     * providing a value for the <code>TargetSamplingRate</code>, you must attach the
     * prefix "PT" to the rate you want. The value for a 1 second rate is therefore
     * <i>PT1S</i>, the value for a 15 minute rate is <i>PT15M</i>, and the value for a
     * 1 hour rate is <i>PT1H</i> </p>
     */
    inline DataPreProcessingConfiguration& WithTargetSamplingRate(const TargetSamplingRate& value) { SetTargetSamplingRate(value); return *this;}

    /**
     * <p>The sampling rate of the data after post processing by Amazon Lookout for
     * Equipment. For example, if you provide data that has been collected at a 1
     * second level and you want the system to resample the data at a 1 minute rate
     * before training, the <code>TargetSamplingRate</code> is 1 minute.</p> <p>When
     * providing a value for the <code>TargetSamplingRate</code>, you must attach the
     * prefix "PT" to the rate you want. The value for a 1 second rate is therefore
     * <i>PT1S</i>, the value for a 15 minute rate is <i>PT15M</i>, and the value for a
     * 1 hour rate is <i>PT1H</i> </p>
     */
    inline DataPreProcessingConfiguration& WithTargetSamplingRate(TargetSamplingRate&& value) { SetTargetSamplingRate(std::move(value)); return *this;}

  private:

    TargetSamplingRate m_targetSamplingRate;
    bool m_targetSamplingRateHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
