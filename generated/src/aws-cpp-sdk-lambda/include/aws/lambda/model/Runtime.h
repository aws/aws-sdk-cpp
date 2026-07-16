/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/Lambda_EXPORTS.h>

namespace Aws {
namespace Lambda {
namespace Model {
enum class Runtime {
  NOT_SET,
  nodejs,
  nodejs4_3,
  nodejs6_10,
  nodejs8_10,
  nodejs10_x,
  nodejs12_x,
  nodejs14_x,
  nodejs16_x,
  nodejs18_x,
  nodejs20_x,
  nodejs22_x,
  nodejs24_x,
  java8,
  java8_al2,
  java11,
  java17,
  java21,
  java25,
  python2_7,
  python3_6,
  python3_7,
  python3_8,
  python3_9,
  python3_10,
  python3_11,
  python3_12,
  python3_13,
  python3_14,
  dotnetcore1_0,
  dotnetcore2_0,
  dotnetcore2_1,
  dotnetcore3_1,
  dotnet6,
  dotnet8,
  dotnet10,
  nodejs4_3_edge,
  go1_x,
  ruby2_5,
  ruby2_7,
  ruby3_2,
  ruby3_3,
  ruby3_4,
  ruby4_0,
  provided,
  provided_al2,
  provided_al2023,
  java8_al2023,
  java11_al2023,
  java17_al2023
};

namespace RuntimeMapper {
AWS_LAMBDA_API Runtime GetRuntimeForName(const Aws::String& name);

AWS_LAMBDA_API Aws::String GetNameForRuntime(Runtime value);
}  // namespace RuntimeMapper
}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
