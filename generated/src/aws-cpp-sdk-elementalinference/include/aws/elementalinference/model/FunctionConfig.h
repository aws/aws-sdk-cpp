/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/ClippingSettings.h>
#include <aws/elementalinference/model/ContextualMetadataSettings.h>
#include <aws/elementalinference/model/FrameSettings.h>
#include <aws/elementalinference/model/SubtitlingSettings.h>
#include <aws/elementalinference/model/Trigger.h>

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
 * <p>The output configuration settings for a function. Use this structure to run a
 * function on this feed. The name of the output is the name that you pass to
 * GetMetadata to read the results. </p> <p>Include the settings that the
 * function's media context and trigger require. Elemental Inference ignores
 * settings that neither uses. It also rejects settings whose frames are estimated
 * to exceed the size of a single model request. </p> <p>A feed that has an enabled
 * function output must also have an enabled cropping, clipping, subtitling, or
 * contextual metadata output. A feed that runs a function with a Bedrock target
 * must specify an accessRoleArn. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/FunctionConfig">AWS
 * API Reference</a></p>
 */
class FunctionConfig {
 public:
  AWS_ELEMENTALINFERENCE_API FunctionConfig() = default;
  AWS_ELEMENTALINFERENCE_API FunctionConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API FunctionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the function to run. The function must exist in the same account
   * and the same Region as the feed. </p>
   */
  inline const Aws::String& GetFunctionArn() const { return m_functionArn; }
  inline bool FunctionArnHasBeenSet() const { return m_functionArnHasBeenSet; }
  template <typename FunctionArnT = Aws::String>
  void SetFunctionArn(FunctionArnT&& value) {
    m_functionArnHasBeenSet = true;
    m_functionArn = std::forward<FunctionArnT>(value);
  }
  template <typename FunctionArnT = Aws::String>
  FunctionConfig& WithFunctionArn(FunctionArnT&& value) {
    SetFunctionArn(std::forward<FunctionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Determines when the function runs.</p>
   */
  inline const Trigger& GetTrigger() const { return m_trigger; }
  inline bool TriggerHasBeenSet() const { return m_triggerHasBeenSet; }
  template <typename TriggerT = Trigger>
  void SetTrigger(TriggerT&& value) {
    m_triggerHasBeenSet = true;
    m_trigger = std::forward<TriggerT>(value);
  }
  template <typename TriggerT = Trigger>
  FunctionConfig& WithTrigger(TriggerT&& value) {
    SetTrigger(std::forward<TriggerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The frames to send on each run: how many, which ones, and at what size.
   * Applies to a function that references media.frames. If you omit this structure,
   * Elemental Inference sends the first frame of the window, at its source size.
   * </p>
   */
  inline const FrameSettings& GetFrameSettings() const { return m_frameSettings; }
  inline bool FrameSettingsHasBeenSet() const { return m_frameSettingsHasBeenSet; }
  template <typename FrameSettingsT = FrameSettings>
  void SetFrameSettings(FrameSettingsT&& value) {
    m_frameSettingsHasBeenSet = true;
    m_frameSettings = std::forward<FrameSettingsT>(value);
  }
  template <typename FrameSettingsT = FrameSettings>
  FunctionConfig& WithFrameSettings(FrameSettingsT&& value) {
    SetFrameSettings(std::forward<FrameSettingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The smart subtitles output on this feed to read the transcript from. Required
   * for a function that references media.transcript. </p>
   */
  inline const SubtitlingSettings& GetSubtitlingSettings() const { return m_subtitlingSettings; }
  inline bool SubtitlingSettingsHasBeenSet() const { return m_subtitlingSettingsHasBeenSet; }
  template <typename SubtitlingSettingsT = SubtitlingSettings>
  void SetSubtitlingSettings(SubtitlingSettingsT&& value) {
    m_subtitlingSettingsHasBeenSet = true;
    m_subtitlingSettings = std::forward<SubtitlingSettingsT>(value);
  }
  template <typename SubtitlingSettingsT = SubtitlingSettings>
  FunctionConfig& WithSubtitlingSettings(SubtitlingSettingsT&& value) {
    SetSubtitlingSettings(std::forward<SubtitlingSettingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The contextual metadata output on this feed to read scenes and
   * classifications from. Required for a perScene trigger, and for a function that
   * references media.contextual on a perShot trigger. </p>
   */
  inline const ContextualMetadataSettings& GetContextualMetadataSettings() const { return m_contextualMetadataSettings; }
  inline bool ContextualMetadataSettingsHasBeenSet() const { return m_contextualMetadataSettingsHasBeenSet; }
  template <typename ContextualMetadataSettingsT = ContextualMetadataSettings>
  void SetContextualMetadataSettings(ContextualMetadataSettingsT&& value) {
    m_contextualMetadataSettingsHasBeenSet = true;
    m_contextualMetadataSettings = std::forward<ContextualMetadataSettingsT>(value);
  }
  template <typename ContextualMetadataSettingsT = ContextualMetadataSettings>
  FunctionConfig& WithContextualMetadataSettings(ContextualMetadataSettingsT&& value) {
    SetContextualMetadataSettings(std::forward<ContextualMetadataSettingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The event clipping output on this feed to read clips from. Required for a
   * perClip trigger, and for a function that references media.clip. </p>
   */
  inline const ClippingSettings& GetClippingSettings() const { return m_clippingSettings; }
  inline bool ClippingSettingsHasBeenSet() const { return m_clippingSettingsHasBeenSet; }
  template <typename ClippingSettingsT = ClippingSettings>
  void SetClippingSettings(ClippingSettingsT&& value) {
    m_clippingSettingsHasBeenSet = true;
    m_clippingSettings = std::forward<ClippingSettingsT>(value);
  }
  template <typename ClippingSettingsT = ClippingSettings>
  FunctionConfig& WithClippingSettings(ClippingSettingsT&& value) {
    SetClippingSettings(std::forward<ClippingSettingsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_functionArn;

  Trigger m_trigger;

  FrameSettings m_frameSettings;

  SubtitlingSettings m_subtitlingSettings;

  ContextualMetadataSettings m_contextualMetadataSettings;

  ClippingSettings m_clippingSettings;
  bool m_functionArnHasBeenSet = false;
  bool m_triggerHasBeenSet = false;
  bool m_frameSettingsHasBeenSet = false;
  bool m_subtitlingSettingsHasBeenSet = false;
  bool m_contextualMetadataSettingsHasBeenSet = false;
  bool m_clippingSettingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
