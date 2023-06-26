/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/UpdateResourceProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

UpdateResourceProfileRequest::UpdateResourceProfileRequest() : 
    m_resourceArnHasBeenSet(false),
    m_sensitivityScoreOverride(0),
    m_sensitivityScoreOverrideHasBeenSet(false)
{
}

Aws::String UpdateResourceProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sensitivityScoreOverrideHasBeenSet)
  {
   payload.WithInteger("sensitivityScoreOverride", m_sensitivityScoreOverride);

  }

  return payload.View().WriteReadable();
}

void UpdateResourceProfileRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_resourceArnHasBeenSet)
    {
      ss << m_resourceArn;
      uri.AddQueryStringParameter("resourceArn", ss.str());
      ss.str("");
    }

}



