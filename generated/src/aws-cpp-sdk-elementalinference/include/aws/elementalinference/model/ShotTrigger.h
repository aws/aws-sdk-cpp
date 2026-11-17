/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elementalinference/ElementalInference_EXPORTS.h>

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
 * <p>The perShot trigger, which runs the function once for each shot that
 * Elemental Inference detects in the video. The function runs after the shot ends,
 * with the media of that shot. To choose this trigger, set perShot to an empty
 * object. The feed must have a video input. </p> <p>You can't use this trigger
 * with a function that references media.transcript or media.clip. If the function
 * references media.contextual, specify contextualMetadataSettings. </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/ShotTrigger">AWS
 * API Reference</a></p>
 */
class ShotTrigger {
 public:
  AWS_ELEMENTALINFERENCE_API ShotTrigger() = default;
  AWS_ELEMENTALINFERENCE_API ShotTrigger(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API ShotTrigger& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
