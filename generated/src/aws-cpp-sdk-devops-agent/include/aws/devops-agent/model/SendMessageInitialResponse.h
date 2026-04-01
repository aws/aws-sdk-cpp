/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpTypes.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

class SendMessageInitialResponse {
 public:
  AWS_DEVOPSAGENT_API SendMessageInitialResponse() = default;
  AWS_DEVOPSAGENT_API SendMessageInitialResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API SendMessageInitialResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API SendMessageInitialResponse(const Http::HeaderValueCollection& responseHeaders);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
