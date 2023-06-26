/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/MergeProfilesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

MergeProfilesRequest::MergeProfilesRequest() : 
    m_domainNameHasBeenSet(false),
    m_mainProfileIdHasBeenSet(false),
    m_profileIdsToBeMergedHasBeenSet(false),
    m_fieldSourceProfileIdsHasBeenSet(false)
{
}

Aws::String MergeProfilesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_mainProfileIdHasBeenSet)
  {
   payload.WithString("MainProfileId", m_mainProfileId);

  }

  if(m_profileIdsToBeMergedHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> profileIdsToBeMergedJsonList(m_profileIdsToBeMerged.size());
   for(unsigned profileIdsToBeMergedIndex = 0; profileIdsToBeMergedIndex < profileIdsToBeMergedJsonList.GetLength(); ++profileIdsToBeMergedIndex)
   {
     profileIdsToBeMergedJsonList[profileIdsToBeMergedIndex].AsString(m_profileIdsToBeMerged[profileIdsToBeMergedIndex]);
   }
   payload.WithArray("ProfileIdsToBeMerged", std::move(profileIdsToBeMergedJsonList));

  }

  if(m_fieldSourceProfileIdsHasBeenSet)
  {
   payload.WithObject("FieldSourceProfileIds", m_fieldSourceProfileIds.Jsonize());

  }

  return payload.View().WriteReadable();
}




