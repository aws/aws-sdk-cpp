/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace APIPortal {
namespace Model {

/**
 * <p>An empty value, used in a union to choose the option that has no
 * settings.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/None">AWS API
 * Reference</a></p>
 */
class None {
 public:
  AWS_APIPORTAL_API None() = default;
  AWS_APIPORTAL_API None(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API None& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
