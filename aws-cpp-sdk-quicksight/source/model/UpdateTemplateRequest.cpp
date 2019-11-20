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

#include <aws/quicksight/model/UpdateTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateTemplateRequest::UpdateTemplateRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_sourceEntityHasBeenSet(false),
    m_versionDescriptionHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

Aws::String UpdateTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceEntityHasBeenSet)
  {
   payload.WithObject("SourceEntity", m_sourceEntity.Jsonize());

  }

  if(m_versionDescriptionHasBeenSet)
  {
   payload.WithString("VersionDescription", m_versionDescription);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload.View().WriteReadable();
}




