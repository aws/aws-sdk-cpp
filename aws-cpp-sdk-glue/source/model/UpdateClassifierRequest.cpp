/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/UpdateClassifierRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateClassifierRequest::UpdateClassifierRequest() : 
    m_grokClassifierHasBeenSet(false),
    m_xMLClassifierHasBeenSet(false),
    m_jsonClassifierHasBeenSet(false),
    m_csvClassifierHasBeenSet(false)
{
}

Aws::String UpdateClassifierRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_grokClassifierHasBeenSet)
  {
   payload.WithObject("GrokClassifier", m_grokClassifier.Jsonize());

  }

  if(m_xMLClassifierHasBeenSet)
  {
   payload.WithObject("XMLClassifier", m_xMLClassifier.Jsonize());

  }

  if(m_jsonClassifierHasBeenSet)
  {
   payload.WithObject("JsonClassifier", m_jsonClassifier.Jsonize());

  }

  if(m_csvClassifierHasBeenSet)
  {
   payload.WithObject("CsvClassifier", m_csvClassifier.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateClassifierRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.UpdateClassifier"));
  return headers;

}




