/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/json-protocol/JsonProtocol_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace JsonProtocol {
namespace Model {

class EmptyStruct {
 public:
  AWS_JSONPROTOCOL_API EmptyStruct() = default;
  AWS_JSONPROTOCOL_API EmptyStruct(Aws::Utils::Json::JsonView jsonValue);
  AWS_JSONPROTOCOL_API EmptyStruct& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_JSONPROTOCOL_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace JsonProtocol
}  // namespace Aws
