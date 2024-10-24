/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/StopDeploymentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopDeploymentRequest::StopDeploymentRequest() : 
    m_applicationIdHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_deploymentNumber(0),
    m_deploymentNumberHasBeenSet(false),
    m_allowRevert(false),
    m_allowRevertHasBeenSet(false)
{
}

Aws::String StopDeploymentRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection StopDeploymentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_allowRevertHasBeenSet)
  {
    ss << std::boolalpha << m_allowRevert;
    headers.emplace("allow-revert", ss.str());
    ss.str("");
  }

  return headers;

}




