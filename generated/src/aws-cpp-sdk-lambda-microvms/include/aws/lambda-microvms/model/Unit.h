/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LambdaMicrovms {
namespace Model {

class Unit {
 public:
  AWS_LAMBDAMICROVMS_API Unit() = default;
  AWS_LAMBDAMICROVMS_API Unit(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAMICROVMS_API Unit& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAMICROVMS_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
