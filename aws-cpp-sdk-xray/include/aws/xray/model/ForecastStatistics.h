/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>

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
namespace XRay
{
namespace Model
{

  /**
   * <p>The predicted high and low fault count. This is used to determine if a
   * service has become anomalous and if an insight should be created.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/ForecastStatistics">AWS
   * API Reference</a></p>
   */
  class ForecastStatistics
  {
  public:
    AWS_XRAY_API ForecastStatistics();
    AWS_XRAY_API ForecastStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API ForecastStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The upper limit of fault counts for a service.</p>
     */
    inline long long GetFaultCountHigh() const{ return m_faultCountHigh; }

    /**
     * <p>The upper limit of fault counts for a service.</p>
     */
    inline bool FaultCountHighHasBeenSet() const { return m_faultCountHighHasBeenSet; }

    /**
     * <p>The upper limit of fault counts for a service.</p>
     */
    inline void SetFaultCountHigh(long long value) { m_faultCountHighHasBeenSet = true; m_faultCountHigh = value; }

    /**
     * <p>The upper limit of fault counts for a service.</p>
     */
    inline ForecastStatistics& WithFaultCountHigh(long long value) { SetFaultCountHigh(value); return *this;}


    /**
     * <p>The lower limit of fault counts for a service.</p>
     */
    inline long long GetFaultCountLow() const{ return m_faultCountLow; }

    /**
     * <p>The lower limit of fault counts for a service.</p>
     */
    inline bool FaultCountLowHasBeenSet() const { return m_faultCountLowHasBeenSet; }

    /**
     * <p>The lower limit of fault counts for a service.</p>
     */
    inline void SetFaultCountLow(long long value) { m_faultCountLowHasBeenSet = true; m_faultCountLow = value; }

    /**
     * <p>The lower limit of fault counts for a service.</p>
     */
    inline ForecastStatistics& WithFaultCountLow(long long value) { SetFaultCountLow(value); return *this;}

  private:

    long long m_faultCountHigh;
    bool m_faultCountHighHasBeenSet = false;

    long long m_faultCountLow;
    bool m_faultCountLowHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
