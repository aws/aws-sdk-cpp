/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GameLiftStreams {
namespace Model {

/**
 * <p>Configuration settings that define a stream group's stream capacity for a
 * location. When configuring a location for the first time, you must specify a
 * numeric value for at least one of the two capacity types. To update the capacity
 * for an existing stream group, call <a
 * href="https://docs.aws.amazon.com/gameliftstreams/latest/apireference/API_UpdateStreamGroup.html">UpdateStreamGroup</a>.
 * To add a new location and specify its capacity, call <a
 * href="https://docs.aws.amazon.com/gameliftstreams/latest/apireference/API_AddStreamGroupLocations.html">AddStreamGroupLocations</a>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/LocationConfiguration">AWS
 * API Reference</a></p>
 */
class LocationConfiguration {
 public:
  AWS_GAMELIFTSTREAMS_API LocationConfiguration() = default;
  AWS_GAMELIFTSTREAMS_API LocationConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_GAMELIFTSTREAMS_API LocationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GAMELIFTSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> A location's name. For example, <code>us-east-1</code>. For a complete list
   * of locations that Amazon GameLift Streams supports, refer to <a
   * href="https://docs.aws.amazon.com/gameliftstreams/latest/developerguide/regions-quotas.html">Regions,
   * quotas, and limitations</a> in the <i>Amazon GameLift Streams Developer
   * Guide</i>. </p>
   */
  inline const Aws::String& GetLocationName() const { return m_locationName; }
  inline bool LocationNameHasBeenSet() const { return m_locationNameHasBeenSet; }
  template <typename LocationNameT = Aws::String>
  void SetLocationName(LocationNameT&& value) {
    m_locationNameHasBeenSet = true;
    m_locationName = std::forward<LocationNameT>(value);
  }
  template <typename LocationNameT = Aws::String>
  LocationConfiguration& WithLocationName(LocationNameT&& value) {
    SetLocationName(std::forward<LocationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>This setting, if non-zero, indicates minimum streaming capacity which is
   * allocated to you and is never released back to the service. You pay for this
   * base level of capacity at all times, whether used or idle.</p>
   */
  inline int GetAlwaysOnCapacity() const { return m_alwaysOnCapacity; }
  inline bool AlwaysOnCapacityHasBeenSet() const { return m_alwaysOnCapacityHasBeenSet; }
  inline void SetAlwaysOnCapacity(int value) {
    m_alwaysOnCapacityHasBeenSet = true;
    m_alwaysOnCapacity = value;
  }
  inline LocationConfiguration& WithAlwaysOnCapacity(int value) {
    SetAlwaysOnCapacity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>This indicates idle capacity which the service pre-allocates and holds for
   * you in anticipation of future activity. This helps to insulate your users from
   * capacity-allocation delays. You pay for capacity which is held in this
   * intentional idle state.</p>
   */
  inline int GetTargetIdleCapacity() const { return m_targetIdleCapacity; }
  inline bool TargetIdleCapacityHasBeenSet() const { return m_targetIdleCapacityHasBeenSet; }
  inline void SetTargetIdleCapacity(int value) {
    m_targetIdleCapacityHasBeenSet = true;
    m_targetIdleCapacity = value;
  }
  inline LocationConfiguration& WithTargetIdleCapacity(int value) {
    SetTargetIdleCapacity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>This indicates the maximum capacity that the service can allocate for you.
   * Newly created streams may take a few minutes to start. Capacity is released back
   * to the service when idle. You pay for capacity that is allocated to you until it
   * is released.</p>
   */
  inline int GetMaximumCapacity() const { return m_maximumCapacity; }
  inline bool MaximumCapacityHasBeenSet() const { return m_maximumCapacityHasBeenSet; }
  inline void SetMaximumCapacity(int value) {
    m_maximumCapacityHasBeenSet = true;
    m_maximumCapacity = value;
  }
  inline LocationConfiguration& WithMaximumCapacity(int value) {
    SetMaximumCapacity(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_locationName;

  int m_alwaysOnCapacity{0};

  int m_targetIdleCapacity{0};

  int m_maximumCapacity{0};
  bool m_locationNameHasBeenSet = false;
  bool m_alwaysOnCapacityHasBeenSet = false;
  bool m_targetIdleCapacityHasBeenSet = false;
  bool m_maximumCapacityHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLiftStreams
}  // namespace Aws
