/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/glue/GlueClient.h>
#include <aws/glue/GlueEndpointProvider.h>
#include <aws/glue/GlueErrorMarshaller.h>
#include <aws/glue/model/UpdateTableOptimizerRequest.h>
#include <aws/glue/model/UpdateTableRequest.h>
#include <aws/glue/model/UpdateTriggerRequest.h>
#include <aws/glue/model/UpdateUsageProfileRequest.h>
#include <aws/glue/model/UpdateUserDefinedFunctionRequest.h>
#include <aws/glue/model/UpdateWorkflowRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Glue;
using namespace Aws::Glue::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

UpdateTableOutcome GlueClient::UpdateTable(const UpdateTableRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateTableOutcome(result.GetResultWithOwnership()) : UpdateTableOutcome(std::move(result.GetError()));
}

UpdateTableOptimizerOutcome GlueClient::UpdateTableOptimizer(const UpdateTableOptimizerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateTableOptimizerOutcome(result.GetResultWithOwnership())
                            : UpdateTableOptimizerOutcome(std::move(result.GetError()));
}

UpdateTriggerOutcome GlueClient::UpdateTrigger(const UpdateTriggerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateTriggerOutcome(result.GetResultWithOwnership()) : UpdateTriggerOutcome(std::move(result.GetError()));
}

UpdateUsageProfileOutcome GlueClient::UpdateUsageProfile(const UpdateUsageProfileRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateUsageProfileOutcome(result.GetResultWithOwnership())
                            : UpdateUsageProfileOutcome(std::move(result.GetError()));
}

UpdateUserDefinedFunctionOutcome GlueClient::UpdateUserDefinedFunction(const UpdateUserDefinedFunctionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateUserDefinedFunctionOutcome(result.GetResultWithOwnership())
                            : UpdateUserDefinedFunctionOutcome(std::move(result.GetError()));
}

UpdateWorkflowOutcome GlueClient::UpdateWorkflow(const UpdateWorkflowRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateWorkflowOutcome(result.GetResultWithOwnership()) : UpdateWorkflowOutcome(std::move(result.GetError()));
}
