/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/PublishSchemaRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PublishSchemaRequest::PublishSchemaRequest() : 
    m_developmentSchemaArnHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_minorVersionHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

Aws::String PublishSchemaRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  if(m_minorVersionHasBeenSet)
  {
   payload.WithString("MinorVersion", m_minorVersion);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PublishSchemaRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_developmentSchemaArnHasBeenSet)
  {
    ss << m_developmentSchemaArn;
    headers.emplace("x-amz-data-partition",  ss.str());
    ss.str("");
  }

  return headers;

}




