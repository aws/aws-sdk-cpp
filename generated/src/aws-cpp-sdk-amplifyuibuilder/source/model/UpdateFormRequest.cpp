/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/UpdateFormRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AmplifyUIBuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

UpdateFormRequest::UpdateFormRequest() : 
    m_appIdHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_environmentNameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_updatedFormHasBeenSet(false)
{
}

Aws::String UpdateFormRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_updatedFormHasBeenSet)
  {
   payload = m_updatedForm.Jsonize();
  }

  return payload.View().WriteReadable();
}

void UpdateFormRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_clientTokenHasBeenSet)
    {
      ss << m_clientToken;
      uri.AddQueryStringParameter("clientToken", ss.str());
      ss.str("");
    }

}



