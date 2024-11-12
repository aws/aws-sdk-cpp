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
   * <p>The number and status of game server container groups that are deployed
   * across a container fleet. Combine this count with the number of server processes
   * that each game server container group runs to learn how many game sessions the
   * fleet is capable of hosting concurrently. For example, if a fleet has 50 game
   * server container groups, and the game server container in each group runs 1 game
   * server process, then the fleet has the capacity to run host 50 game sessions at
   * a time. </p> <p> <b>Returned by:</b> <a>DescribeFleetCapacity</a>,
   * <a>DescribeFleetLocationCapacity</a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GameServerContainerGroupCounts">AWS
   * API Reference</a></p>
   */
  class GameServerContainerGroupCounts
  {
  public:
    AWS_GAMELIFT_API GameServerContainerGroupCounts();
    AWS_GAMELIFT_API GameServerContainerGroupCounts(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API GameServerContainerGroupCounts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The number of container groups that are starting up but haven't yet
     * registered. </p>
     */
    inline int GetPENDING() const{ return m_pENDING; }
    inline bool PENDINGHasBeenSet() const { return m_pENDINGHasBeenSet; }
    inline void SetPENDING(int value) { m_pENDINGHasBeenSet = true; m_pENDING = value; }
    inline GameServerContainerGroupCounts& WithPENDING(int value) { SetPENDING(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of container groups that have active game sessions. </p>
     */
    inline int GetACTIVE() const{ return m_aCTIVE; }
    inline bool ACTIVEHasBeenSet() const { return m_aCTIVEHasBeenSet; }
    inline void SetACTIVE(int value) { m_aCTIVEHasBeenSet = true; m_aCTIVE = value; }
    inline GameServerContainerGroupCounts& WithACTIVE(int value) { SetACTIVE(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of container groups that have no active game sessions. </p>
     */
    inline int GetIDLE() const{ return m_iDLE; }
    inline bool IDLEHasBeenSet() const { return m_iDLEHasBeenSet; }
    inline void SetIDLE(int value) { m_iDLEHasBeenSet = true; m_iDLE = value; }
    inline GameServerContainerGroupCounts& WithIDLE(int value) { SetIDLE(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of container groups that are in the process of shutting down.
     * </p>
     */
    inline int GetTERMINATING() const{ return m_tERMINATING; }
    inline bool TERMINATINGHasBeenSet() const { return m_tERMINATINGHasBeenSet; }
    inline void SetTERMINATING(int value) { m_tERMINATINGHasBeenSet = true; m_tERMINATING = value; }
    inline GameServerContainerGroupCounts& WithTERMINATING(int value) { SetTERMINATING(value); return *this;}
    ///@}
  private:

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
