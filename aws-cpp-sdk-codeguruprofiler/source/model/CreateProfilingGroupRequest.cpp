/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/CreateProfilingGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeGuruProfiler::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

CreateProfilingGroupRequest::CreateProfilingGroupRequest() : 
    m_agentOrchestrationConfigHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_computePlatform(ComputePlatform::NOT_SET),
    m_computePlatformHasBeenSet(false),
    m_profilingGroupNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateProfilingGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_agentOrchestrationConfigHasBeenSet)
  {
   payload.WithObject("agentOrchestrationConfig", m_agentOrchestrationConfig.Jsonize());

  }

  if(m_computePlatformHasBeenSet)
  {
   payload.WithString("computePlatform", ComputePlatformMapper::GetNameForComputePlatform(m_computePlatform));
  }

  if(m_profilingGroupNameHasBeenSet)
  {
   payload.WithString("profilingGroupName", m_profilingGroupName);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}

void CreateProfilingGroupRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_clientTokenHasBeenSet)
    {
      ss << m_clientToken;
      uri.AddQueryStringParameter("clientToken", ss.str());
      ss.str("");
    }

}



