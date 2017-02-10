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
   * affected.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/EC2InstanceCounts">AWS
   * API Reference</a></p>
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
    inline int GetDESIRED() const{ return m_dESIRED; }

    /**
     * <p>Ideal number of active instances in the fleet.</p>
     */
    inline void SetDESIRED(int value) { m_dESIREDHasBeenSet = true; m_dESIRED = value; }

    /**
     * <p>Ideal number of active instances in the fleet.</p>
     */
    inline EC2InstanceCounts& WithDESIRED(int value) { SetDESIRED(value); return *this;}

    /**
     * <p>Minimum value allowed for the fleet's instance count.</p>
     */
    inline int GetMINIMUM() const{ return m_mINIMUM; }

    /**
     * <p>Minimum value allowed for the fleet's instance count.</p>
     */
    inline void SetMINIMUM(int value) { m_mINIMUMHasBeenSet = true; m_mINIMUM = value; }

    /**
     * <p>Minimum value allowed for the fleet's instance count.</p>
     */
    inline EC2InstanceCounts& WithMINIMUM(int value) { SetMINIMUM(value); return *this;}

    /**
     * <p>Maximum value allowed for the fleet's instance count.</p>
     */
    inline int GetMAXIMUM() const{ return m_mAXIMUM; }

    /**
     * <p>Maximum value allowed for the fleet's instance count.</p>
     */
    inline void SetMAXIMUM(int value) { m_mAXIMUMHasBeenSet = true; m_mAXIMUM = value; }

    /**
     * <p>Maximum value allowed for the fleet's instance count.</p>
     */
    inline EC2InstanceCounts& WithMAXIMUM(int value) { SetMAXIMUM(value); return *this;}

    /**
     * <p>Number of instances in the fleet that are starting but not yet active.</p>
     */
    inline int GetPENDING() const{ return m_pENDING; }

    /**
     * <p>Number of instances in the fleet that are starting but not yet active.</p>
     */
    inline void SetPENDING(int value) { m_pENDINGHasBeenSet = true; m_pENDING = value; }

    /**
     * <p>Number of instances in the fleet that are starting but not yet active.</p>
     */
    inline EC2InstanceCounts& WithPENDING(int value) { SetPENDING(value); return *this;}

    /**
     * <p>Actual number of active instances in the fleet.</p>
     */
    inline int GetACTIVE() const{ return m_aCTIVE; }

    /**
     * <p>Actual number of active instances in the fleet.</p>
     */
    inline void SetACTIVE(int value) { m_aCTIVEHasBeenSet = true; m_aCTIVE = value; }

    /**
     * <p>Actual number of active instances in the fleet.</p>
     */
    inline EC2InstanceCounts& WithACTIVE(int value) { SetACTIVE(value); return *this;}

    /**
     * <p>Number of active instances in the fleet that are not currently hosting a game
     * session.</p>
     */
    inline int GetIDLE() const{ return m_iDLE; }

    /**
     * <p>Number of active instances in the fleet that are not currently hosting a game
     * session.</p>
     */
    inline void SetIDLE(int value) { m_iDLEHasBeenSet = true; m_iDLE = value; }

    /**
     * <p>Number of active instances in the fleet that are not currently hosting a game
     * session.</p>
     */
    inline EC2InstanceCounts& WithIDLE(int value) { SetIDLE(value); return *this;}

    /**
     * <p>Number of instances in the fleet that are no longer active but haven't yet
     * been terminated.</p>
     */
    inline int GetTERMINATING() const{ return m_tERMINATING; }

    /**
     * <p>Number of instances in the fleet that are no longer active but haven't yet
     * been terminated.</p>
     */
    inline void SetTERMINATING(int value) { m_tERMINATINGHasBeenSet = true; m_tERMINATING = value; }

    /**
     * <p>Number of instances in the fleet that are no longer active but haven't yet
     * been terminated.</p>
     */
    inline EC2InstanceCounts& WithTERMINATING(int value) { SetTERMINATING(value); return *this;}

  private:
    int m_dESIRED;
    bool m_dESIREDHasBeenSet;
    int m_mINIMUM;
    bool m_mINIMUMHasBeenSet;
    int m_mAXIMUM;
    bool m_mAXIMUMHasBeenSet;
    int m_pENDING;
    bool m_pENDINGHasBeenSet;
    int m_aCTIVE;
    bool m_aCTIVEHasBeenSet;
    int m_iDLE;
    bool m_iDLEHasBeenSet;
    int m_tERMINATING;
    bool m_tERMINATINGHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
