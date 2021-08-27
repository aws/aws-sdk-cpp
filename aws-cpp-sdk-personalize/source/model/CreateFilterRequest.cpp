/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/CreateFilterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateFilterRequest::CreateFilterRequest() : 
    m_nameHasBeenSet(false),
    m_datasetGroupArnHasBeenSet(false),
    m_filterExpressionHasBeenSet(false)
{
}

Aws::String CreateFilterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_datasetGroupArnHasBeenSet)
  {
   payload.WithString("datasetGroupArn", m_datasetGroupArn);

  }

  if(m_filterExpressionHasBeenSet)
  {
   payload.WithString("filterExpression", m_filterExpression);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateFilterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonPersonalize.CreateFilter"));
  return headers;

}




