/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/GroundStationRequest.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>

#include <utility>

namespace Aws {
namespace GroundStation {
namespace Model {

/**
 */
class UpdateEphemerisRequest : public GroundStationRequest {
 public:
  AWS_GROUNDSTATION_API UpdateEphemerisRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateEphemeris"; }

  AWS_GROUNDSTATION_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The AWS Ground Station ephemeris ID.</p>
   */
  inline const Aws::String& GetEphemerisId() const { return m_ephemerisId; }
  inline bool EphemerisIdHasBeenSet() const { return m_ephemerisIdHasBeenSet; }
  template <typename EphemerisIdT = Aws::String>
  void SetEphemerisId(EphemerisIdT&& value) {
    m_ephemerisIdHasBeenSet = true;
    m_ephemerisId = std::forward<EphemerisIdT>(value);
  }
  template <typename EphemerisIdT = Aws::String>
  UpdateEphemerisRequest& WithEphemerisId(EphemerisIdT&& value) {
    SetEphemerisId(std::forward<EphemerisIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Enable or disable the ephemeris. Changing this value doesn't require
   * re-validation.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline UpdateEphemerisRequest& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A name that you can use to identify the ephemeris.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateEphemerisRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A priority score that determines which ephemeris to use when multiple
   * ephemerides overlap.</p> <p>Higher numbers take precedence. The default is 1.
   * Must be 1 or greater.</p>
   */
  inline int GetPriority() const { return m_priority; }
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  inline void SetPriority(int value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline UpdateEphemerisRequest& WithPriority(int value) {
    SetPriority(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_ephemerisId;

  bool m_enabled{false};

  Aws::String m_name;

  int m_priority{0};
  bool m_ephemerisIdHasBeenSet = false;
  bool m_enabledHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_priorityHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
