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

#include <aws/serverlessrepo/model/CreateApplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServerlessApplicationRepository::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateApplicationRequest::CreateApplicationRequest() : 
    m_authorHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_homePageUrlHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_licenseBodyHasBeenSet(false),
    m_licenseUrlHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_readmeBodyHasBeenSet(false),
    m_readmeUrlHasBeenSet(false),
    m_semanticVersionHasBeenSet(false),
    m_sourceCodeUrlHasBeenSet(false),
    m_spdxLicenseIdHasBeenSet(false),
    m_templateBodyHasBeenSet(false),
    m_templateUrlHasBeenSet(false)
{
}

Aws::String CreateApplicationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_authorHasBeenSet)
  {
   payload.WithString("author", m_author);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_homePageUrlHasBeenSet)
  {
   payload.WithString("homePageUrl", m_homePageUrl);

  }

  if(m_labelsHasBeenSet)
  {
   Array<JsonValue> labelsJsonList(m_labels.size());
   for(unsigned labelsIndex = 0; labelsIndex < labelsJsonList.GetLength(); ++labelsIndex)
   {
     labelsJsonList[labelsIndex].AsString(m_labels[labelsIndex]);
   }
   payload.WithArray("labels", std::move(labelsJsonList));

  }

  if(m_licenseBodyHasBeenSet)
  {
   payload.WithString("licenseBody", m_licenseBody);

  }

  if(m_licenseUrlHasBeenSet)
  {
   payload.WithString("licenseUrl", m_licenseUrl);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_readmeBodyHasBeenSet)
  {
   payload.WithString("readmeBody", m_readmeBody);

  }

  if(m_readmeUrlHasBeenSet)
  {
   payload.WithString("readmeUrl", m_readmeUrl);

  }

  if(m_semanticVersionHasBeenSet)
  {
   payload.WithString("semanticVersion", m_semanticVersion);

  }

  if(m_sourceCodeUrlHasBeenSet)
  {
   payload.WithString("sourceCodeUrl", m_sourceCodeUrl);

  }

  if(m_spdxLicenseIdHasBeenSet)
  {
   payload.WithString("spdxLicenseId", m_spdxLicenseId);

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




