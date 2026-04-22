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
 * <p>Resource capacity settings. Fleet capacity is measured in Amazon EC2
 * instances. Pending and terminating counts are non-zero when the fleet capacity
 * is adjusting to a scaling event or if access to resources is temporarily
 * affected.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/EC2InstanceCounts">AWS
 * API Reference</a></p>
 */
class EC2InstanceCounts {
 public:
  AWS_GAMELIFT_API EC2InstanceCounts() = default;
  AWS_GAMELIFT_API EC2InstanceCounts(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API EC2InstanceCounts& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Requested number of active instances. Amazon GameLift Servers takes action as
   * needed to maintain the desired number of instances. Capacity is scaled up or
   * down by changing the desired instances. A change in the desired instances value
   * can take up to 1 minute to be reflected when viewing a fleet's capacity
   * settings. </p>
   */
  inline int64_t GetDESIRED() const { return m_dESIRED; }
  inline bool DESIREDHasBeenSet() const { return m_dESIREDHasBeenSet; }
  inline void SetDESIRED(int64_t value) {
    m_dESIREDHasBeenSet = true;
    m_dESIRED = value;
  }
  inline EC2InstanceCounts& WithDESIRED(int64_t value) {
    SetDESIRED(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minimum instance count value allowed.</p>
   */
  inline int64_t GetMINIMUM() const { return m_mINIMUM; }
  inline bool MINIMUMHasBeenSet() const { return m_mINIMUMHasBeenSet; }
  inline void SetMINIMUM(int64_t value) {
    m_mINIMUMHasBeenSet = true;
    m_mINIMUM = value;
  }
  inline EC2InstanceCounts& WithMINIMUM(int64_t value) {
    SetMINIMUM(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum instance count value allowed.</p>
   */
  inline int64_t GetMAXIMUM() const { return m_mAXIMUM; }
  inline bool MAXIMUMHasBeenSet() const { return m_mAXIMUMHasBeenSet; }
  inline void SetMAXIMUM(int64_t value) {
    m_mAXIMUMHasBeenSet = true;
    m_mAXIMUM = value;
  }
  inline EC2InstanceCounts& WithMAXIMUM(int64_t value) {
    SetMAXIMUM(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Number of instances that are starting but not yet active.</p>
   */
  inline int64_t GetPENDING() const { return m_pENDING; }
  inline bool PENDINGHasBeenSet() const { return m_pENDINGHasBeenSet; }
  inline void SetPENDING(int64_t value) {
    m_pENDINGHasBeenSet = true;
    m_pENDING = value;
  }
  inline EC2InstanceCounts& WithPENDING(int64_t value) {
    SetPENDING(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Actual number of instances that are ready to host game sessions.</p>
   */
  inline int64_t GetACTIVE() const { return m_aCTIVE; }
  inline bool ACTIVEHasBeenSet() const { return m_aCTIVEHasBeenSet; }
  inline void SetACTIVE(int64_t value) {
    m_aCTIVEHasBeenSet = true;
    m_aCTIVE = value;
  }
  inline EC2InstanceCounts& WithACTIVE(int64_t value) {
    SetACTIVE(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Number of active instances that are not currently hosting a game session.</p>
   */
  inline int64_t GetIDLE() const { return m_iDLE; }
  inline bool IDLEHasBeenSet() const { return m_iDLEHasBeenSet; }
  inline void SetIDLE(int64_t value) {
    m_iDLEHasBeenSet = true;
    m_iDLE = value;
  }
  inline EC2InstanceCounts& WithIDLE(int64_t value) {
    SetIDLE(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Number of instances that are no longer active but haven't yet been
   * terminated.</p>
   */
  inline int64_t GetTERMINATING() const { return m_tERMINATING; }
  inline bool TERMINATINGHasBeenSet() const { return m_tERMINATINGHasBeenSet; }
  inline void SetTERMINATING(int64_t value) {
    m_tERMINATINGHasBeenSet = true;
    m_tERMINATING = value;
  }
  inline EC2InstanceCounts& WithTERMINATING(int64_t value) {
    SetTERMINATING(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_dESIRED{0};

  int64_t m_mINIMUM{0};

  int64_t m_mAXIMUM{0};

  int64_t m_pENDING{0};

  int64_t m_aCTIVE{0};

  int64_t m_iDLE{0};

  int64_t m_tERMINATING{0};
  bool m_dESIREDHasBeenSet = false;
  bool m_mINIMUMHasBeenSet = false;
  bool m_mAXIMUMHasBeenSet = false;
  bool m_pENDINGHasBeenSet = false;
  bool m_aCTIVEHasBeenSet = false;
  bool m_iDLEHasBeenSet = false;
  bool m_tERMINATINGHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
