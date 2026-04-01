/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mailmanager/model/InvokeLambdaAction.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MailManager {
namespace Model {

InvokeLambdaAction::InvokeLambdaAction(JsonView jsonValue) { *this = jsonValue; }

InvokeLambdaAction& InvokeLambdaAction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ActionFailurePolicy")) {
    m_actionFailurePolicy = ActionFailurePolicyMapper::GetActionFailurePolicyForName(jsonValue.GetString("ActionFailurePolicy"));
    m_actionFailurePolicyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FunctionArn")) {
    m_functionArn = jsonValue.GetString("FunctionArn");
    m_functionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InvocationType")) {
    m_invocationType = LambdaInvocationTypeMapper::GetLambdaInvocationTypeForName(jsonValue.GetString("InvocationType"));
    m_invocationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RoleArn")) {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RetryTimeMinutes")) {
    m_retryTimeMinutes = jsonValue.GetInteger("RetryTimeMinutes");
    m_retryTimeMinutesHasBeenSet = true;
  }
  return *this;
}

JsonValue InvokeLambdaAction::Jsonize() const {
  JsonValue payload;

  if (m_actionFailurePolicyHasBeenSet) {
    payload.WithString("ActionFailurePolicy", ActionFailurePolicyMapper::GetNameForActionFailurePolicy(m_actionFailurePolicy));
  }

  if (m_functionArnHasBeenSet) {
    payload.WithString("FunctionArn", m_functionArn);
  }

  if (m_invocationTypeHasBeenSet) {
    payload.WithString("InvocationType", LambdaInvocationTypeMapper::GetNameForLambdaInvocationType(m_invocationType));
  }

  if (m_roleArnHasBeenSet) {
    payload.WithString("RoleArn", m_roleArn);
  }

  if (m_retryTimeMinutesHasBeenSet) {
    payload.WithInteger("RetryTimeMinutes", m_retryTimeMinutes);
  }

  return payload;
}

}  // namespace Model
}  // namespace MailManager
}  // namespace Aws
