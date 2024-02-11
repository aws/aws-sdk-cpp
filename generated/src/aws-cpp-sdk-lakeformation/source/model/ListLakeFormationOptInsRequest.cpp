/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/ListLakeFormationOptInsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListLakeFormationOptInsRequest::ListLakeFormationOptInsRequest() : 
    m_principalHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListLakeFormationOptInsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_principalHasBeenSet)
  {
   payload.WithObject("Principal", m_principal.Jsonize());

  }

  if(m_resourceHasBeenSet)
  {
   payload.WithObject("Resource", m_resource.Jsonize());

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}




