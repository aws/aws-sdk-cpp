/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/pinpoint/model/UpdatePushTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

UpdatePushTemplateRequest::UpdatePushTemplateRequest() : 
    m_createNewVersion(false),
    m_createNewVersionHasBeenSet(false),
    m_pushNotificationTemplateRequestHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

Aws::String UpdatePushTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pushNotificationTemplateRequestHasBeenSet)
  {
   payload = m_pushNotificationTemplateRequest.Jsonize();
  }

  return payload.View().WriteReadable();
}

void UpdatePushTemplateRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_createNewVersionHasBeenSet)
    {
      ss << m_createNewVersion;
      uri.AddQueryStringParameter("create-new-version", ss.str());
      ss.str("");
    }

    if(m_versionHasBeenSet)
    {
      ss << m_version;
      uri.AddQueryStringParameter("version", ss.str());
      ss.str("");
    }

}



