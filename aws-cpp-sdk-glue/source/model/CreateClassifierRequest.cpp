﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/glue/model/CreateClassifierRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateClassifierRequest::CreateClassifierRequest() : 
    m_grokClassifierHasBeenSet(false),
    m_xMLClassifierHasBeenSet(false),
    m_jsonClassifierHasBeenSet(false)
{
}

Aws::String CreateClassifierRequest::SerializePayload() const
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateClassifierRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.CreateClassifier"));
  return headers;

}




