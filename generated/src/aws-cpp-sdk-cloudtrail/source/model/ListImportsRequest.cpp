/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/ListImportsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListImportsRequest::ListImportsRequest() : 
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_importStatus(ImportStatus::NOT_SET),
    m_importStatusHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListImportsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_destinationHasBeenSet)
  {
   payload.WithString("Destination", m_destination);

  }

  if(m_importStatusHasBeenSet)
  {
   payload.WithString("ImportStatus", ImportStatusMapper::GetNameForImportStatus(m_importStatus));
  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListImportsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.cloudtrail.v20131101.CloudTrail_20131101.ListImports"));
  return headers;

}




