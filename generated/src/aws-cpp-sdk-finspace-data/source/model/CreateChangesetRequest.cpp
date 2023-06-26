/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/CreateChangesetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FinSpaceData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateChangesetRequest::CreateChangesetRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_datasetIdHasBeenSet(false),
    m_changeType(ChangeType::NOT_SET),
    m_changeTypeHasBeenSet(false),
    m_sourceParamsHasBeenSet(false),
    m_formatParamsHasBeenSet(false)
{
}

Aws::String CreateChangesetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_changeTypeHasBeenSet)
  {
   payload.WithString("changeType", ChangeTypeMapper::GetNameForChangeType(m_changeType));
  }

  if(m_sourceParamsHasBeenSet)
  {
   JsonValue sourceParamsJsonMap;
   for(auto& sourceParamsItem : m_sourceParams)
   {
     sourceParamsJsonMap.WithString(sourceParamsItem.first, sourceParamsItem.second);
   }
   payload.WithObject("sourceParams", std::move(sourceParamsJsonMap));

  }

  if(m_formatParamsHasBeenSet)
  {
   JsonValue formatParamsJsonMap;
   for(auto& formatParamsItem : m_formatParams)
   {
     formatParamsJsonMap.WithString(formatParamsItem.first, formatParamsItem.second);
   }
   payload.WithObject("formatParams", std::move(formatParamsJsonMap));

  }

  return payload.View().WriteReadable();
}




