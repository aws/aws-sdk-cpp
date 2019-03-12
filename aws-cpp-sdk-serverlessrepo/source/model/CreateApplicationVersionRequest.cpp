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

#include <aws/serverlessrepo/model/CreateApplicationVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServerlessApplicationRepository::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateApplicationVersionRequest::CreateApplicationVersionRequest() : 
    m_applicationIdHasBeenSet(false),
    m_semanticVersionHasBeenSet(false),
    m_sourceCodeArchiveUrlHasBeenSet(false),
    m_sourceCodeUrlHasBeenSet(false),
    m_templateBodyHasBeenSet(false),
    m_templateUrlHasBeenSet(false)
{
}

Aws::String CreateApplicationVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceCodeArchiveUrlHasBeenSet)
  {
   payload.WithString("sourceCodeArchiveUrl", m_sourceCodeArchiveUrl);

  }

  if(m_sourceCodeUrlHasBeenSet)
  {
   payload.WithString("sourceCodeUrl", m_sourceCodeUrl);

  }

  if(m_templateBodyHasBeenSet)
  {
   payload.WithString("templateBody", m_templateBody);

  }

  if(m_templateUrlHasBeenSet)
  {
   payload.WithString("templateUrl", m_templateUrl);

  }

  return payload.View().WriteReadable();
}




