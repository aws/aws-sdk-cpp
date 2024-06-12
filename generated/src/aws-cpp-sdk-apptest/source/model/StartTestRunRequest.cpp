/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/StartTestRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppTest::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartTestRunRequest::StartTestRunRequest() : 
    m_testSuiteIdHasBeenSet(false),
    m_testConfigurationIdHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_tagsHasBeenSet(false)
{
}

Aws::String StartTestRunRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_testSuiteIdHasBeenSet)
  {
   payload.WithString("testSuiteId", m_testSuiteId);

  }

  if(m_testConfigurationIdHasBeenSet)
  {
   payload.WithString("testConfigurationId", m_testConfigurationId);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

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




