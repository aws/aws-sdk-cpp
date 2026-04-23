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
  class AWS_DEVICEFARM_API DeviceMinutes
  {
  public:
    DeviceMinutes();
    DeviceMinutes(Aws::Utils::Json::JsonView jsonValue);
    DeviceMinutes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>When specified, represents the total minutes used by the resource to run
     * tests.</p>
     */
    inline double GetTotal() const{ return m_total; }

    /**
     * <p>When specified, represents the total minutes used by the resource to run
     * tests.</p>
     */
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }

    /**
     * <p>When specified, represents the total minutes used by the resource to run
     * tests.</p>
     */
    inline void SetTotal(double value) { m_totalHasBeenSet = true; m_total = value; }

    /**
     * <p>When specified, represents the total minutes used by the resource to run
     * tests.</p>
     */
    inline DeviceMinutes& WithTotal(double value) { SetTotal(value); return *this;}


    /**
     * <p>When specified, represents only the sum of metered minutes used by the
     * resource to run tests.</p>
     */
    inline double GetMetered() const{ return m_metered; }

    /**
     * <p>When specified, represents only the sum of metered minutes used by the
     * resource to run tests.</p>
     */
    inline bool MeteredHasBeenSet() const { return m_meteredHasBeenSet; }

    /**
     * <p>When specified, represents only the sum of metered minutes used by the
     * resource to run tests.</p>
     */
    inline void SetMetered(double value) { m_meteredHasBeenSet = true; m_metered = value; }

    /**
     * <p>When specified, represents only the sum of metered minutes used by the
     * resource to run tests.</p>
     */
    inline DeviceMinutes& WithMetered(double value) { SetMetered(value); return *this;}


    /**
     * <p>When specified, represents only the sum of unmetered minutes used by the
     * resource to run tests.</p>
     */
    inline double GetUnmetered() const{ return m_unmetered; }

    /**
     * <p>When specified, represents only the sum of unmetered minutes used by the
     * resource to run tests.</p>
     */
    inline bool UnmeteredHasBeenSet() const { return m_unmeteredHasBeenSet; }

    /**
     * <p>When specified, represents only the sum of unmetered minutes used by the
     * resource to run tests.</p>
     */
    inline void SetUnmetered(double value) { m_unmeteredHasBeenSet = true; m_unmetered = value; }

    /**
     * <p>When specified, represents only the sum of unmetered minutes used by the
     * resource to run tests.</p>
     */
    inline DeviceMinutes& WithUnmetered(double value) { SetUnmetered(value); return *this;}

  private:

    double m_total;
    bool m_totalHasBeenSet;

    double m_metered;
    bool m_meteredHasBeenSet;

    double m_unmetered;
    bool m_unmeteredHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
