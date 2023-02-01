/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/model/UpdateWorkspaceConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ManagedGrafana::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateWorkspaceConfigurationResult::UpdateWorkspaceConfigurationResult()
{
}

UpdateWorkspaceConfigurationResult::UpdateWorkspaceConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateWorkspaceConfigurationResult& UpdateWorkspaceConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  AWS_UNREFERENCED_PARAM(result);


  return *this;
}
