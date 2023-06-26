/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/AssociateTargetsWithJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

AssociateTargetsWithJobRequest::AssociateTargetsWithJobRequest() : 
    m_targetsHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_namespaceIdHasBeenSet(false)
{
}

Aws::String AssociateTargetsWithJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_targetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetsJsonList(m_targets.size());
   for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
   {
     targetsJsonList[targetsIndex].AsString(m_targets[targetsIndex]);
   }
   payload.WithArray("targets", std::move(targetsJsonList));

  }

  if(m_commentHasBeenSet)
  {
   payload.WithString("comment", m_comment);

  }

  return payload.View().WriteReadable();
}

void AssociateTargetsWithJobRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_namespaceIdHasBeenSet)
    {
      ss << m_namespaceId;
      uri.AddQueryStringParameter("namespaceId", ss.str());
      ss.str("");
    }

}



