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
 * <p>The perScene trigger, which runs the function once for each scene that a
 * contextual metadata output reports. The function runs after the scene ends, with
 * the media of that scene. To choose this trigger, set perScene to an empty
 * object. </p> <p>Specify contextualMetadataSettings to name the contextual
 * metadata output that reports the scenes. You can't use this trigger with a
 * function that references media.transcript or media.clip. </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/SceneTrigger">AWS
 * API Reference</a></p>
 */
class SceneTrigger {
 public:
  AWS_ELEMENTALINFERENCE_API SceneTrigger() = default;
  AWS_ELEMENTALINFERENCE_API SceneTrigger(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API SceneTrigger& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
