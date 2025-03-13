/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>

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
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents the total (metered or unmetered) minutes used by the resource to
   * run tests. Contains the sum of minutes consumed by all children.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeviceMinutes">AWS
   * API Reference</a></p>
   */
  class DeviceMinutes
  {
  public:
    AWS_DEVICEFARM_API DeviceMinutes() = default;
    AWS_DEVICEFARM_API DeviceMinutes(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API DeviceMinutes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>When specified, represents the total minutes used by the resource to run
     * tests.</p>
     */
    inline double GetTotal() const { return m_total; }
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }
    inline void SetTotal(double value) { m_totalHasBeenSet = true; m_total = value; }
    inline DeviceMinutes& WithTotal(double value) { SetTotal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When specified, represents only the sum of metered minutes used by the
     * resource to run tests.</p>
     */
    inline double GetMetered() const { return m_metered; }
    inline bool MeteredHasBeenSet() const { return m_meteredHasBeenSet; }
    inline void SetMetered(double value) { m_meteredHasBeenSet = true; m_metered = value; }
    inline DeviceMinutes& WithMetered(double value) { SetMetered(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When specified, represents only the sum of unmetered minutes used by the
     * resource to run tests.</p>
     */
    inline double GetUnmetered() const { return m_unmetered; }
    inline bool UnmeteredHasBeenSet() const { return m_unmeteredHasBeenSet; }
    inline void SetUnmetered(double value) { m_unmeteredHasBeenSet = true; m_unmetered = value; }
    inline DeviceMinutes& WithUnmetered(double value) { SetUnmetered(value); return *this;}
    ///@}
  private:

    double m_total{0.0};
    bool m_totalHasBeenSet = false;

    double m_metered{0.0};
    bool m_meteredHasBeenSet = false;

    double m_unmetered{0.0};
    bool m_unmeteredHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
