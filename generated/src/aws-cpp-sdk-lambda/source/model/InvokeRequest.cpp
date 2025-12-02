/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/lambda/model/InvokeRequest.h>

#include <utility>

using namespace Aws::Lambda::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws::Http;
using namespace Aws;

void InvokeRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_qualifierHasBeenSet) {
    ss << m_qualifier;
    uri.AddQueryStringParameter("Qualifier", ss.str());
    ss.str("");
  }
}

Aws::Http::HeaderValueCollection InvokeRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_invocationTypeHasBeenSet && m_invocationType != InvocationType::NOT_SET) {
    headers.emplace("x-amz-invocation-type", InvocationTypeMapper::GetNameForInvocationType(m_invocationType));
  }

  if (m_logTypeHasBeenSet && m_logType != LogType::NOT_SET) {
    headers.emplace("x-amz-log-type", LogTypeMapper::GetNameForLogType(m_logType));
  }

  if (m_clientContextHasBeenSet) {
    ss << m_clientContext;
    headers.emplace("x-amz-client-context", ss.str());
    ss.str("");
  }

  if (m_durableExecutionNameHasBeenSet) {
    ss << m_durableExecutionName;
    headers.emplace("x-amz-durable-execution-name", ss.str());
    ss.str("");
  }

  if (m_tenantIdHasBeenSet) {
    ss << m_tenantId;
    headers.emplace("x-amz-tenant-id", ss.str());
    ss.str("");
  }

  return headers;
}
