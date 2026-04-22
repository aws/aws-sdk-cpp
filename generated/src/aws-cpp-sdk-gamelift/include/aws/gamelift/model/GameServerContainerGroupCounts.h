/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/GameLift_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace GameLift {
namespace Model {

/**
 * <p>The number and status of game server container groups that are deployed
 * across a container fleet. Combine this count with the number of server processes
 * that each game server container group runs to learn how many game sessions the
 * fleet is capable of hosting concurrently. For example, if a fleet has 50 game
 * server container groups, and the game server container in each group runs 1 game
 * server process, then the fleet has the capacity to run host 50 game sessions at
 * a time. </p> <p> <b>Returned by:</b> <a
 * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribeFleetCapacity.html">https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribeFleetCapacity.html</a>,
 * <a
 * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribeFleetLocationCapacity.html">https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribeFleetLocationCapacity.html</a>
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GameServerContainerGroupCounts">AWS
 * API Reference</a></p>
 */
class GameServerContainerGroupCounts {
 public:
  AWS_GAMELIFT_API GameServerContainerGroupCounts() = default;
  AWS_GAMELIFT_API GameServerContainerGroupCounts(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API GameServerContainerGroupCounts& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p> The number of container groups that are starting up but haven't yet
   * registered. </p>
   */
  inline int64_t GetPENDING() const { return m_pENDING; }
  inline bool PENDINGHasBeenSet() const { return m_pENDINGHasBeenSet; }
  inline void SetPENDING(int64_t value) {
    m_pENDINGHasBeenSet = true;
    m_pENDING = value;
  }
  inline GameServerContainerGroupCounts& WithPENDING(int64_t value) {
    SetPENDING(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The number of container groups that have active game sessions. </p>
   */
  inline int64_t GetACTIVE() const { return m_aCTIVE; }
  inline bool ACTIVEHasBeenSet() const { return m_aCTIVEHasBeenSet; }
  inline void SetACTIVE(int64_t value) {
    m_aCTIVEHasBeenSet = true;
    m_aCTIVE = value;
  }
  inline GameServerContainerGroupCounts& WithACTIVE(int64_t value) {
    SetACTIVE(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The number of container groups that have no active game sessions. </p>
   */
  inline int64_t GetIDLE() const { return m_iDLE; }
  inline bool IDLEHasBeenSet() const { return m_iDLEHasBeenSet; }
  inline void SetIDLE(int64_t value) {
    m_iDLEHasBeenSet = true;
    m_iDLE = value;
  }
  inline GameServerContainerGroupCounts& WithIDLE(int64_t value) {
    SetIDLE(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The number of container groups that are in the process of shutting down.
   * </p>
   */
  inline int64_t GetTERMINATING() const { return m_tERMINATING; }
  inline bool TERMINATINGHasBeenSet() const { return m_tERMINATINGHasBeenSet; }
  inline void SetTERMINATING(int64_t value) {
    m_tERMINATINGHasBeenSet = true;
    m_tERMINATING = value;
  }
  inline GameServerContainerGroupCounts& WithTERMINATING(int64_t value) {
    SetTERMINATING(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_pENDING{0};

  int64_t m_aCTIVE{0};

  int64_t m_iDLE{0};

  int64_t m_tERMINATING{0};
  bool m_pENDINGHasBeenSet = false;
  bool m_aCTIVEHasBeenSet = false;
  bool m_iDLEHasBeenSet = false;
  bool m_tERMINATINGHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
