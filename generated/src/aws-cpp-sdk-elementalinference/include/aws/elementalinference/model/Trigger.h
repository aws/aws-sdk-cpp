/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/ClipTrigger.h>
#include <aws/elementalinference/model/FixedIntervalTrigger.h>
#include <aws/elementalinference/model/SceneTrigger.h>
#include <aws/elementalinference/model/ShotTrigger.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ElementalInference {
namespace Model {

/**
 * <p>Determines when a function runs. Specify exactly one member.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/Trigger">AWS
 * API Reference</a></p>
 */
class Trigger {
 public:
  AWS_ELEMENTALINFERENCE_API Trigger() = default;
  AWS_ELEMENTALINFERENCE_API Trigger(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Trigger& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Run the function at a fixed interval of content. This is the only trigger for
   * a function that references media.transcript. Can't be used with a function that
   * references media.contextual. </p>
   */
  inline const FixedIntervalTrigger& GetFixedInterval() const { return m_fixedInterval; }
  inline bool FixedIntervalHasBeenSet() const { return m_fixedIntervalHasBeenSet; }
  template <typename FixedIntervalT = FixedIntervalTrigger>
  void SetFixedInterval(FixedIntervalT&& value) {
    m_fixedIntervalHasBeenSet = true;
    m_fixedInterval = std::forward<FixedIntervalT>(value);
  }
  template <typename FixedIntervalT = FixedIntervalTrigger>
  Trigger& WithFixedInterval(FixedIntervalT&& value) {
    SetFixedInterval(std::forward<FixedIntervalT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Run the function once for each shot that Elemental Inference detects. Can't
   * be used with a function that references media.transcript or media.clip. </p>
   */
  inline const ShotTrigger& GetPerShot() const { return m_perShot; }
  inline bool PerShotHasBeenSet() const { return m_perShotHasBeenSet; }
  template <typename PerShotT = ShotTrigger>
  void SetPerShot(PerShotT&& value) {
    m_perShotHasBeenSet = true;
    m_perShot = std::forward<PerShotT>(value);
  }
  template <typename PerShotT = ShotTrigger>
  Trigger& WithPerShot(PerShotT&& value) {
    SetPerShot(std::forward<PerShotT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Run the function once for each scene boundary that a contextual metadata
   * output reports. Requires contextualMetadataSettings. Can't be used with a
   * function that references media.transcript or media.clip. </p>
   */
  inline const SceneTrigger& GetPerScene() const { return m_perScene; }
  inline bool PerSceneHasBeenSet() const { return m_perSceneHasBeenSet; }
  template <typename PerSceneT = SceneTrigger>
  void SetPerScene(PerSceneT&& value) {
    m_perSceneHasBeenSet = true;
    m_perScene = std::forward<PerSceneT>(value);
  }
  template <typename PerSceneT = SceneTrigger>
  Trigger& WithPerScene(PerSceneT&& value) {
    SetPerScene(std::forward<PerSceneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Run the function once for each clip that an event clipping output detects.
   * Requires clippingSettings. Can't be used with a function that references
   * media.transcript or media.contextual. </p>
   */
  inline const ClipTrigger& GetPerClip() const { return m_perClip; }
  inline bool PerClipHasBeenSet() const { return m_perClipHasBeenSet; }
  template <typename PerClipT = ClipTrigger>
  void SetPerClip(PerClipT&& value) {
    m_perClipHasBeenSet = true;
    m_perClip = std::forward<PerClipT>(value);
  }
  template <typename PerClipT = ClipTrigger>
  Trigger& WithPerClip(PerClipT&& value) {
    SetPerClip(std::forward<PerClipT>(value));
    return *this;
  }
  ///@}
 private:
  FixedIntervalTrigger m_fixedInterval;

  ShotTrigger m_perShot;

  SceneTrigger m_perScene;

  ClipTrigger m_perClip;
  bool m_fixedIntervalHasBeenSet = false;
  bool m_perShotHasBeenSet = false;
  bool m_perSceneHasBeenSet = false;
  bool m_perClipHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
