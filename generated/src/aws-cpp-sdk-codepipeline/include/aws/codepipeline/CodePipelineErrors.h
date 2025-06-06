﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/codepipeline/CodePipeline_EXPORTS.h>

namespace Aws
{
namespace CodePipeline
{
enum class CodePipelineErrors
{
  //From Core//
  //////////////////////////////////////////////////////////////////////////////////////////
  INCOMPLETE_SIGNATURE = 0,
  INTERNAL_FAILURE = 1,
  INVALID_ACTION = 2,
  INVALID_CLIENT_TOKEN_ID = 3,
  INVALID_PARAMETER_COMBINATION = 4,
  INVALID_QUERY_PARAMETER = 5,
  INVALID_PARAMETER_VALUE = 6,
  MISSING_ACTION = 7, // SDK should never allow
  MISSING_AUTHENTICATION_TOKEN = 8, // SDK should never allow
  MISSING_PARAMETER = 9, // SDK should never allow
  OPT_IN_REQUIRED = 10,
  REQUEST_EXPIRED = 11,
  SERVICE_UNAVAILABLE = 12,
  THROTTLING = 13,
  VALIDATION = 14,
  ACCESS_DENIED = 15,
  RESOURCE_NOT_FOUND = 16,
  UNRECOGNIZED_CLIENT = 17,
  MALFORMED_QUERY_STRING = 18,
  SLOW_DOWN = 19,
  REQUEST_TIME_TOO_SKEWED = 20,
  INVALID_SIGNATURE = 21,
  SIGNATURE_DOES_NOT_MATCH = 22,
  INVALID_ACCESS_KEY_ID = 23,
  REQUEST_TIMEOUT = 24,
  NETWORK_CONNECTION = 99,

  UNKNOWN = 100,
  ///////////////////////////////////////////////////////////////////////////////////////////

  ACTION_EXECUTION_NOT_FOUND= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  ACTION_NOT_FOUND,
  ACTION_TYPE_NOT_FOUND,
  APPROVAL_ALREADY_COMPLETED,
  CONCURRENT_MODIFICATION,
  CONCURRENT_PIPELINE_EXECUTIONS_LIMIT_EXCEEDED,
  CONDITION_NOT_OVERRIDABLE,
  CONFLICT,
  DUPLICATED_STOP_REQUEST,
  INVALID_ACTION_DECLARATION,
  INVALID_APPROVAL_TOKEN,
  INVALID_ARN,
  INVALID_BLOCKER_DECLARATION,
  INVALID_CLIENT_TOKEN,
  INVALID_JOB,
  INVALID_JOB_STATE,
  INVALID_NEXT_TOKEN,
  INVALID_NONCE,
  INVALID_STAGE_DECLARATION,
  INVALID_STRUCTURE,
  INVALID_TAGS,
  INVALID_WEBHOOK_AUTHENTICATION_PARAMETERS,
  INVALID_WEBHOOK_FILTER_PATTERN,
  JOB_NOT_FOUND,
  LIMIT_EXCEEDED,
  NOT_LATEST_PIPELINE_EXECUTION,
  OUTPUT_VARIABLES_SIZE_EXCEEDED,
  PIPELINE_EXECUTION_NOT_FOUND,
  PIPELINE_EXECUTION_NOT_STOPPABLE,
  PIPELINE_EXECUTION_OUTDATED,
  PIPELINE_NAME_IN_USE,
  PIPELINE_NOT_FOUND,
  PIPELINE_VERSION_NOT_FOUND,
  REQUEST_FAILED,
  STAGE_NOT_FOUND,
  STAGE_NOT_RETRYABLE,
  TOO_MANY_TAGS,
  UNABLE_TO_ROLLBACK_STAGE,
  WEBHOOK_NOT_FOUND
};

class AWS_CODEPIPELINE_API CodePipelineError : public Aws::Client::AWSError<CodePipelineErrors>
{
public:
  CodePipelineError() {}
  CodePipelineError(const Aws::Client::AWSError<Aws::Client::CoreErrors>& rhs) : Aws::Client::AWSError<CodePipelineErrors>(rhs) {}
  CodePipelineError(Aws::Client::AWSError<Aws::Client::CoreErrors>&& rhs) : Aws::Client::AWSError<CodePipelineErrors>(rhs) {}
  CodePipelineError(const Aws::Client::AWSError<CodePipelineErrors>& rhs) : Aws::Client::AWSError<CodePipelineErrors>(rhs) {}
  CodePipelineError(Aws::Client::AWSError<CodePipelineErrors>&& rhs) : Aws::Client::AWSError<CodePipelineErrors>(rhs) {}

  template <typename T>
  T GetModeledError();
};

namespace CodePipelineErrorMapper
{
  AWS_CODEPIPELINE_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace CodePipeline
} // namespace Aws
