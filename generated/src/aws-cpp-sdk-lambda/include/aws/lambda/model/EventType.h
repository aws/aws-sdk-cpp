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
enum class EventType {
  NOT_SET,
  ExecutionStarted,
  ExecutionSucceeded,
  ExecutionFailed,
  ExecutionTimedOut,
  ExecutionStopped,
  ContextStarted,
  ContextSucceeded,
  ContextFailed,
  WaitStarted,
  WaitSucceeded,
  WaitCancelled,
  StepStarted,
  StepSucceeded,
  StepFailed,
  ChainedInvokeStarted,
  ChainedInvokeSucceeded,
  ChainedInvokeFailed,
  ChainedInvokeTimedOut,
  ChainedInvokeStopped,
  CallbackStarted,
  CallbackSucceeded,
  CallbackFailed,
  CallbackTimedOut,
  InvocationCompleted
};

namespace EventTypeMapper {
AWS_LAMBDA_API EventType GetEventTypeForName(const Aws::String& name);

AWS_LAMBDA_API Aws::String GetNameForEventType(EventType value);
}  // namespace EventTypeMapper
}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
