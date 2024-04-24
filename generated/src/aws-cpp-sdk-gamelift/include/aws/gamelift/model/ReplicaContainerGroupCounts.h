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
   * <p> <b>This data type is used with the Amazon GameLift containers feature, which
   * is currently in public preview.</b> </p> <p>The number and status of replica
   * container groups that are deployed across a fleet with compute type
   * <code>CONTAINER</code>. This information, combined with the number of server
   * processes being hosted per container group (see
   * <code>RuntimeConfiguration</code>), tells you how many game sessions the fleet
   * is currently capable of hosting concurrently.</p> <p> <b>Returned by:</b>
   * <a>DescribeFleetCapacity</a>, <a>DescribeFleetLocationCapacity</a>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ReplicaContainerGroupCounts">AWS
   * API Reference</a></p>
   */
  class ReplicaContainerGroupCounts
  {
  public:
    AWS_GAMELIFT_API ReplicaContainerGroupCounts();
    AWS_GAMELIFT_API ReplicaContainerGroupCounts(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API ReplicaContainerGroupCounts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The number of container groups that are starting up but have not yet
     * registered. </p>
     */
    inline int GetPENDING() const{ return m_pENDING; }

    /**
     * <p> The number of container groups that are starting up but have not yet
     * registered. </p>
     */
    inline bool PENDINGHasBeenSet() const { return m_pENDINGHasBeenSet; }

    /**
     * <p> The number of container groups that are starting up but have not yet
     * registered. </p>
     */
    inline void SetPENDING(int value) { m_pENDINGHasBeenSet = true; m_pENDING = value; }

    /**
     * <p> The number of container groups that are starting up but have not yet
     * registered. </p>
     */
    inline ReplicaContainerGroupCounts& WithPENDING(int value) { SetPENDING(value); return *this;}


    /**
     * <p> The number of container groups that have active game sessions. </p>
     */
    inline int GetACTIVE() const{ return m_aCTIVE; }

    /**
     * <p> The number of container groups that have active game sessions. </p>
     */
    inline bool ACTIVEHasBeenSet() const { return m_aCTIVEHasBeenSet; }

    /**
     * <p> The number of container groups that have active game sessions. </p>
     */
    inline void SetACTIVE(int value) { m_aCTIVEHasBeenSet = true; m_aCTIVE = value; }

    /**
     * <p> The number of container groups that have active game sessions. </p>
     */
    inline ReplicaContainerGroupCounts& WithACTIVE(int value) { SetACTIVE(value); return *this;}


    /**
     * <p> The number of container groups that have no active game sessions. </p>
     */
    inline int GetIDLE() const{ return m_iDLE; }

    /**
     * <p> The number of container groups that have no active game sessions. </p>
     */
    inline bool IDLEHasBeenSet() const { return m_iDLEHasBeenSet; }

    /**
     * <p> The number of container groups that have no active game sessions. </p>
     */
    inline void SetIDLE(int value) { m_iDLEHasBeenSet = true; m_iDLE = value; }

    /**
     * <p> The number of container groups that have no active game sessions. </p>
     */
    inline ReplicaContainerGroupCounts& WithIDLE(int value) { SetIDLE(value); return *this;}


    /**
     * <p> The number of container groups that are in the process of shutting down.
     * </p>
     */
    inline int GetTERMINATING() const{ return m_tERMINATING; }

    /**
     * <p> The number of container groups that are in the process of shutting down.
     * </p>
     */
    inline bool TERMINATINGHasBeenSet() const { return m_tERMINATINGHasBeenSet; }

    /**
     * <p> The number of container groups that are in the process of shutting down.
     * </p>
     */
    inline void SetTERMINATING(int value) { m_tERMINATINGHasBeenSet = true; m_tERMINATING = value; }

    /**
     * <p> The number of container groups that are in the process of shutting down.
     * </p>
     */
    inline ReplicaContainerGroupCounts& WithTERMINATING(int value) { SetTERMINATING(value); return *this;}

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
