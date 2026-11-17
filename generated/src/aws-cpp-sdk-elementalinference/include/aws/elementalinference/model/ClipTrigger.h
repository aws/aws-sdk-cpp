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
 * <p>The perClip trigger, which runs the function each time an event clipping
 * output reports events. Events that the output reports together share one run,
 * and media.clip.events contains all of them. To choose this trigger, set perClip
 * to an empty object. </p> <p>Specify clippingSettings to name the event clipping
 * output that reports the events. You can't use this trigger with a function that
 * references media.transcript or media.contextual. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/ClipTrigger">AWS
 * API Reference</a></p>
 */
class ClipTrigger {
 public:
  AWS_ELEMENTALINFERENCE_API ClipTrigger() = default;
  AWS_ELEMENTALINFERENCE_API ClipTrigger(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API ClipTrigger& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
