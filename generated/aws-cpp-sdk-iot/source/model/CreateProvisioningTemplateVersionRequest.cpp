/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CreateProvisioningTemplateVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

CreateProvisioningTemplateVersionRequest::CreateProvisioningTemplateVersionRequest() : 
    m_templateNameHasBeenSet(false),
    m_templateBodyHasBeenSet(false),
    m_setAsDefault(false),
    m_setAsDefaultHasBeenSet(false)
{
}

Aws::String CreateProvisioningTemplateVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_templateBodyHasBeenSet)
  {
   payload.WithString("templateBody", m_templateBody);

  }

  return payload.View().WriteReadable();
}

void CreateProvisioningTemplateVersionRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_setAsDefaultHasBeenSet)
    {
      ss << m_setAsDefault;
      uri.AddQueryStringParameter("setAsDefault", ss.str());
      ss.str("");
    }

}



