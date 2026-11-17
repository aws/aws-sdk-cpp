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
 * <p>A target that invokes nothing. Elemental Inference evaluates your request
 * expression, then evaluates your response expression against that result. If the
 * function has no response expression, Elemental Inference stores the result of
 * the request expression. </p> <p>A passthrough function can't reference
 * media.frames. It also needs no access role on the feed. </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/PassthroughFunctionTarget">AWS
 * API Reference</a></p>
 */
class PassthroughFunctionTarget {
 public:
  AWS_ELEMENTALINFERENCE_API PassthroughFunctionTarget() = default;
  AWS_ELEMENTALINFERENCE_API PassthroughFunctionTarget(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API PassthroughFunctionTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
