/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpTypes.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace HealthLake {
namespace Model {

class UpdateProfileWithAgentInitialResponse {
 public:
  AWS_HEALTHLAKE_API UpdateProfileWithAgentInitialResponse() = default;
  AWS_HEALTHLAKE_API UpdateProfileWithAgentInitialResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API UpdateProfileWithAgentInitialResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API UpdateProfileWithAgentInitialResponse(const Http::HeaderValueCollection& responseHeaders);
  AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
