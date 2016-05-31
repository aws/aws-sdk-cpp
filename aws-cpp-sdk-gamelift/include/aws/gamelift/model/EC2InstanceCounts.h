/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/gamelift/GameLift_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>Current status of fleet capacity. The number of active instances should match
   * or be in the process of matching the number of desired instances. Pending and
   * terminating counts are non-zero only if fleet capacity is adjusting to an
   * <a>UpdateFleetCapacity</a> request, or if access to resources is temporarily
   * affected.</p>
   */
  class AWS_GAMELIFT_API EC2InstanceCounts
  {
  public:
    EC2InstanceCounts();
    EC2InstanceCounts(const Aws::Utils::Json::JsonValue& jsonValue);
    EC2InstanceCounts& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Ideal number of active instances in the fleet.</p>
     */
    inline long GetDESIRED() const{ return m_dESIRED; }

    /**
     * <p>Ideal number of active instances in the fleet.</p>
     */
    inline void SetDESIRED(long value) { m_dESIREDHasBeenSet = true; m_dESIRED = value; }

    /**
     * <p>Ideal number of active instances in the fleet.</p>
     */
    inline EC2InstanceCounts& WithDESIRED(long value) { SetDESIRED(value); return *this;}

    /**
     * <p>Minimum value allowed for the fleet's instance count.</p>
     */
    inline long GetMINIMUM() const{ return m_mINIMUM; }

    /**
     * <p>Minimum value allowed for the fleet's instance count.</p>
     */
    inline void SetMINIMUM(long value) { m_mINIMUMHasBeenSet = true; m_mINIMUM = value; }

    /**
     * <p>Minimum value allowed for the fleet's instance count.</p>
     */
    inline EC2InstanceCounts& WithMINIMUM(long value) { SetMINIMUM(value); return *this;}

    /**
     * <p>Maximum value allowed for the fleet's instance count.</p>
     */
    inline long GetMAXIMUM() const{ return m_mAXIMUM; }

    /**
     * <p>Maximum value allowed for the fleet's instance count.</p>
     */
    inline void SetMAXIMUM(long value) { m_mAXIMUMHasBeenSet = true; m_mAXIMUM = value; }

    /**
     * <p>Maximum value allowed for the fleet's instance count.</p>
     */
    inline EC2InstanceCounts& WithMAXIMUM(long value) { SetMAXIMUM(value); return *this;}

    /**
     * <p>Number of instances in the fleet that are starting but not yet active.</p>
     */
    inline long GetPENDING() const{ return m_pENDING; }

    /**
     * <p>Number of instances in the fleet that are starting but not yet active.</p>
     */
    inline void SetPENDING(long value) { m_pENDINGHasBeenSet = true; m_pENDING = value; }

    /**
     * <p>Number of instances in the fleet that are starting but not yet active.</p>
     */
    inline EC2InstanceCounts& WithPENDING(long value) { SetPENDING(value); return *this;}

    /**
     * <p>Actual number of active instances in the fleet.</p>
     */
    inline long GetACTIVE() const{ return m_aCTIVE; }

    /**
     * <p>Actual number of active instances in the fleet.</p>
     */
    inline void SetACTIVE(long value) { m_aCTIVEHasBeenSet = true; m_aCTIVE = value; }

    /**
     * <p>Actual number of active instances in the fleet.</p>
     */
    inline EC2InstanceCounts& WithACTIVE(long value) { SetACTIVE(value); return *this;}

    /**
     * <p>Number of active instances in the fleet that are not currently hosting a game
     * session.</p>
     */
    inline long GetIDLE() const{ return m_iDLE; }

    /**
     * <p>Number of active instances in the fleet that are not currently hosting a game
     * session.</p>
     */
    inline void SetIDLE(long value) { m_iDLEHasBeenSet = true; m_iDLE = value; }

    /**
     * <p>Number of active instances in the fleet that are not currently hosting a game
     * session.</p>
     */
    inline EC2InstanceCounts& WithIDLE(long value) { SetIDLE(value); return *this;}

    /**
     * <p>Number of instances in the fleet that are no longer active but haven't yet
     * been terminated. </p>
     */
    inline long GetTERMINATING() const{ return m_tERMINATING; }

    /**
     * <p>Number of instances in the fleet that are no longer active but haven't yet
     * been terminated. </p>
     */
    inline void SetTERMINATING(long value) { m_tERMINATINGHasBeenSet = true; m_tERMINATING = value; }

    /**
     * <p>Number of instances in the fleet that are no longer active but haven't yet
     * been terminated. </p>
     */
    inline EC2InstanceCounts& WithTERMINATING(long value) { SetTERMINATING(value); return *this;}

  private:
    long m_dESIRED;
    bool m_dESIREDHasBeenSet;
    long m_mINIMUM;
    bool m_mINIMUMHasBeenSet;
    long m_mAXIMUM;
    bool m_mAXIMUMHasBeenSet;
    long m_pENDING;
    bool m_pENDINGHasBeenSet;
    long m_aCTIVE;
    bool m_aCTIVEHasBeenSet;
    long m_iDLE;
    bool m_iDLEHasBeenSet;
    long m_tERMINATING;
    bool m_tERMINATINGHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
