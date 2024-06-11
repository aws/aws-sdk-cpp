/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>Resource capacity settings. Fleet capacity is measured in Amazon EC2
   * instances. Pending and terminating counts are non-zero when the fleet capacity
   * is adjusting to a scaling event or if access to resources is temporarily
   * affected.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/EC2InstanceCounts">AWS
   * API Reference</a></p>
   */
  class EC2InstanceCounts
  {
  public:
    AWS_GAMELIFT_API EC2InstanceCounts();
    AWS_GAMELIFT_API EC2InstanceCounts(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API EC2InstanceCounts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Requested number of active instances. Amazon GameLift takes action as needed
     * to maintain the desired number of instances. Capacity is scaled up or down by
     * changing the desired instances. A change in the desired instances value can take
     * up to 1 minute to be reflected when viewing a fleet's capacity settings. </p>
     */
    inline int GetDESIRED() const{ return m_dESIRED; }
    inline bool DESIREDHasBeenSet() const { return m_dESIREDHasBeenSet; }
    inline void SetDESIRED(int value) { m_dESIREDHasBeenSet = true; m_dESIRED = value; }
    inline EC2InstanceCounts& WithDESIRED(int value) { SetDESIRED(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum instance count value allowed.</p>
     */
    inline int GetMINIMUM() const{ return m_mINIMUM; }
    inline bool MINIMUMHasBeenSet() const { return m_mINIMUMHasBeenSet; }
    inline void SetMINIMUM(int value) { m_mINIMUMHasBeenSet = true; m_mINIMUM = value; }
    inline EC2InstanceCounts& WithMINIMUM(int value) { SetMINIMUM(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum instance count value allowed.</p>
     */
    inline int GetMAXIMUM() const{ return m_mAXIMUM; }
    inline bool MAXIMUMHasBeenSet() const { return m_mAXIMUMHasBeenSet; }
    inline void SetMAXIMUM(int value) { m_mAXIMUMHasBeenSet = true; m_mAXIMUM = value; }
    inline EC2InstanceCounts& WithMAXIMUM(int value) { SetMAXIMUM(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of instances that are starting but not yet active.</p>
     */
    inline int GetPENDING() const{ return m_pENDING; }
    inline bool PENDINGHasBeenSet() const { return m_pENDINGHasBeenSet; }
    inline void SetPENDING(int value) { m_pENDINGHasBeenSet = true; m_pENDING = value; }
    inline EC2InstanceCounts& WithPENDING(int value) { SetPENDING(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Actual number of instances that are ready to host game sessions.</p>
     */
    inline int GetACTIVE() const{ return m_aCTIVE; }
    inline bool ACTIVEHasBeenSet() const { return m_aCTIVEHasBeenSet; }
    inline void SetACTIVE(int value) { m_aCTIVEHasBeenSet = true; m_aCTIVE = value; }
    inline EC2InstanceCounts& WithACTIVE(int value) { SetACTIVE(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of active instances that are not currently hosting a game session.</p>
     */
    inline int GetIDLE() const{ return m_iDLE; }
    inline bool IDLEHasBeenSet() const { return m_iDLEHasBeenSet; }
    inline void SetIDLE(int value) { m_iDLEHasBeenSet = true; m_iDLE = value; }
    inline EC2InstanceCounts& WithIDLE(int value) { SetIDLE(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of instances that are no longer active but haven't yet been
     * terminated.</p>
     */
    inline int GetTERMINATING() const{ return m_tERMINATING; }
    inline bool TERMINATINGHasBeenSet() const { return m_tERMINATINGHasBeenSet; }
    inline void SetTERMINATING(int value) { m_tERMINATINGHasBeenSet = true; m_tERMINATING = value; }
    inline EC2InstanceCounts& WithTERMINATING(int value) { SetTERMINATING(value); return *this;}
    ///@}
  private:

    int m_dESIRED;
    bool m_dESIREDHasBeenSet = false;

    int m_mINIMUM;
    bool m_mINIMUMHasBeenSet = false;

    int m_mAXIMUM;
    bool m_mAXIMUMHasBeenSet = false;

    int m_pENDING;
    bool m_pENDINGHasBeenSet = false;

    int m_aCTIVE;
    bool m_aCTIVEHasBeenSet = false;

    int m_iDLE;
    bool m_iDLEHasBeenSet = false;

    int m_tERMINATING;
    bool m_tERMINATINGHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
