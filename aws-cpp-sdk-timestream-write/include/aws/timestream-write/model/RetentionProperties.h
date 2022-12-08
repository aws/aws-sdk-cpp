/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>

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
namespace TimestreamWrite
{
namespace Model
{

  /**
   * <p>Retention properties contain the duration for which your time series data
   * must be stored in the magnetic store and the memory store. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/RetentionProperties">AWS
   * API Reference</a></p>
   */
  class RetentionProperties
  {
  public:
    AWS_TIMESTREAMWRITE_API RetentionProperties();
    AWS_TIMESTREAMWRITE_API RetentionProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API RetentionProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The duration for which data must be stored in the memory store. </p>
     */
    inline long long GetMemoryStoreRetentionPeriodInHours() const{ return m_memoryStoreRetentionPeriodInHours; }

    /**
     * <p>The duration for which data must be stored in the memory store. </p>
     */
    inline bool MemoryStoreRetentionPeriodInHoursHasBeenSet() const { return m_memoryStoreRetentionPeriodInHoursHasBeenSet; }

    /**
     * <p>The duration for which data must be stored in the memory store. </p>
     */
    inline void SetMemoryStoreRetentionPeriodInHours(long long value) { m_memoryStoreRetentionPeriodInHoursHasBeenSet = true; m_memoryStoreRetentionPeriodInHours = value; }

    /**
     * <p>The duration for which data must be stored in the memory store. </p>
     */
    inline RetentionProperties& WithMemoryStoreRetentionPeriodInHours(long long value) { SetMemoryStoreRetentionPeriodInHours(value); return *this;}


    /**
     * <p>The duration for which data must be stored in the magnetic store. </p>
     */
    inline long long GetMagneticStoreRetentionPeriodInDays() const{ return m_magneticStoreRetentionPeriodInDays; }

    /**
     * <p>The duration for which data must be stored in the magnetic store. </p>
     */
    inline bool MagneticStoreRetentionPeriodInDaysHasBeenSet() const { return m_magneticStoreRetentionPeriodInDaysHasBeenSet; }

    /**
     * <p>The duration for which data must be stored in the magnetic store. </p>
     */
    inline void SetMagneticStoreRetentionPeriodInDays(long long value) { m_magneticStoreRetentionPeriodInDaysHasBeenSet = true; m_magneticStoreRetentionPeriodInDays = value; }

    /**
     * <p>The duration for which data must be stored in the magnetic store. </p>
     */
    inline RetentionProperties& WithMagneticStoreRetentionPeriodInDays(long long value) { SetMagneticStoreRetentionPeriodInDays(value); return *this;}

  private:

    long long m_memoryStoreRetentionPeriodInHours;
    bool m_memoryStoreRetentionPeriodInHoursHasBeenSet = false;

    long long m_magneticStoreRetentionPeriodInDays;
    bool m_magneticStoreRetentionPeriodInDaysHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
