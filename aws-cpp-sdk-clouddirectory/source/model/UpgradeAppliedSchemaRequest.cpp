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

#include <aws/clouddirectory/model/UpgradeAppliedSchemaRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpgradeAppliedSchemaRequest::UpgradeAppliedSchemaRequest() : 
    m_publishedSchemaArnHasBeenSet(false),
    m_directoryArnHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String UpgradeAppliedSchemaRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_publishedSchemaArnHasBeenSet)
  {
   payload.WithString("PublishedSchemaArn", m_publishedSchemaArn);

  }

  if(m_directoryArnHasBeenSet)
  {
   payload.WithString("DirectoryArn", m_directoryArn);

  }

  if(m_dryRunHasBeenSet)
  {
   payload.WithBool("DryRun", m_dryRun);

  }

  return payload.WriteReadable();
}




