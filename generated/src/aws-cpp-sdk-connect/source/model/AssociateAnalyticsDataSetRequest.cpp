/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AssociateAnalyticsDataSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateAnalyticsDataSetRequest::AssociateAnalyticsDataSetRequest() : 
    m_instanceIdHasBeenSet(false),
    m_dataSetIdHasBeenSet(false),
    m_targetAccountIdHasBeenSet(false)
{
}

Aws::String AssociateAnalyticsDataSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dataSetIdHasBeenSet)
  {
   payload.WithString("DataSetId", m_dataSetId);

  }

  if(m_targetAccountIdHasBeenSet)
  {
   payload.WithString("TargetAccountId", m_targetAccountId);

  }

  return payload.View().WriteReadable();
}




