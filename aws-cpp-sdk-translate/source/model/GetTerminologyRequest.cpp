/*
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

#include <aws/translate/model/GetTerminologyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Translate::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetTerminologyRequest::GetTerminologyRequest() : 
    m_nameHasBeenSet(false),
    m_terminologyDataFormat(TerminologyDataFormat::NOT_SET),
    m_terminologyDataFormatHasBeenSet(false)
{
}

Aws::String GetTerminologyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_terminologyDataFormatHasBeenSet)
  {
   payload.WithString("TerminologyDataFormat", TerminologyDataFormatMapper::GetNameForTerminologyDataFormat(m_terminologyDataFormat));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetTerminologyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSShineFrontendService_20170701.GetTerminology"));
  return headers;

}




