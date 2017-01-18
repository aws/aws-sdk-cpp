/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/vitalservices/model/urlForFileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VitalServices::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

urlForFileRequest::urlForFileRequest() : 
    m_patientIdHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_doctorIdHasBeenSet(false),
    m_httpMethodHasBeenSet(false)
{
}

Aws::String urlForFileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_patientIdHasBeenSet)
  {
   payload.WithString("patientId", m_patientId);

  }

  if(m_fileNameHasBeenSet)
  {
   payload.WithString("fileName", m_fileName);

  }

  if(m_doctorIdHasBeenSet)
  {
   payload.WithString("doctorId", m_doctorId);

  }

  if(m_httpMethodHasBeenSet)
  {
   payload.WithString("httpMethod", m_httpMethod);

  }

  return payload.WriteReadable();
}



