/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/DeleteEnvironmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteEnvironmentRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection DeleteEnvironmentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_deletionProtectionCheckHasBeenSet && m_deletionProtectionCheck != DeletionProtectionCheck::NOT_SET)
  {
    headers.emplace("x-amzn-deletion-protection-check", DeletionProtectionCheckMapper::GetNameForDeletionProtectionCheck(m_deletionProtectionCheck));
  }

  return headers;

}




