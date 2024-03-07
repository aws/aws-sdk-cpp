/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/model/AssociateLicenseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ManagedGrafana::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateLicenseRequest::AssociateLicenseRequest() : 
    m_grafanaTokenHasBeenSet(false),
    m_licenseType(LicenseType::NOT_SET),
    m_licenseTypeHasBeenSet(false),
    m_workspaceIdHasBeenSet(false)
{
}

Aws::String AssociateLicenseRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection AssociateLicenseRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_grafanaTokenHasBeenSet)
  {
    ss << m_grafanaToken;
    headers.emplace("grafana-token",  ss.str());
    ss.str("");
  }

  return headers;

}




