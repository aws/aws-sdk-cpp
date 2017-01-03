﻿/*
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
#include <aws/ssm/model/CreateDocumentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDocumentRequest::CreateDocumentRequest() : 
    m_contentHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_documentType(DocumentType::NOT_SET),
    m_documentTypeHasBeenSet(false)
{
}

Aws::String CreateDocumentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", m_content);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_documentTypeHasBeenSet)
  {
   payload.WithString("DocumentType", DocumentTypeMapper::GetNameForDocumentType(m_documentType));
  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CreateDocumentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.CreateDocument"));
  return headers;

}



