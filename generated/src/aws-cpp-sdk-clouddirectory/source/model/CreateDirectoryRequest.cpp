/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/CreateDirectoryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDirectoryRequest::CreateDirectoryRequest() : 
    m_nameHasBeenSet(false),
    m_schemaArnHasBeenSet(false)
{
}

Aws::String CreateDirectoryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateDirectoryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_schemaArnHasBeenSet)
  {
    ss << m_schemaArn;
    headers.emplace("x-amz-data-partition",  ss.str());
    ss.str("");
  }

  return headers;

}




