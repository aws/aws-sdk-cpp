/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpTypes.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace RestJsonProtocol {
namespace Model {

class OutputStreamInitialResponse {
 public:
  AWS_RESTJSONPROTOCOL_API OutputStreamInitialResponse() = default;
  AWS_RESTJSONPROTOCOL_API OutputStreamInitialResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESTJSONPROTOCOL_API OutputStreamInitialResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESTJSONPROTOCOL_API OutputStreamInitialResponse(const Http::HeaderValueCollection& responseHeaders);
  AWS_RESTJSONPROTOCOL_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
