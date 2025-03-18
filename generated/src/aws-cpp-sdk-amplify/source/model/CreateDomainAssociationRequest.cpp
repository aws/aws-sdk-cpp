﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/CreateDomainAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Amplify::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateDomainAssociationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("domainName", m_domainName);

  }

  if(m_enableAutoSubDomainHasBeenSet)
  {
   payload.WithBool("enableAutoSubDomain", m_enableAutoSubDomain);

  }

  if(m_subDomainSettingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subDomainSettingsJsonList(m_subDomainSettings.size());
   for(unsigned subDomainSettingsIndex = 0; subDomainSettingsIndex < subDomainSettingsJsonList.GetLength(); ++subDomainSettingsIndex)
   {
     subDomainSettingsJsonList[subDomainSettingsIndex].AsObject(m_subDomainSettings[subDomainSettingsIndex].Jsonize());
   }
   payload.WithArray("subDomainSettings", std::move(subDomainSettingsJsonList));

  }

  if(m_autoSubDomainCreationPatternsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> autoSubDomainCreationPatternsJsonList(m_autoSubDomainCreationPatterns.size());
   for(unsigned autoSubDomainCreationPatternsIndex = 0; autoSubDomainCreationPatternsIndex < autoSubDomainCreationPatternsJsonList.GetLength(); ++autoSubDomainCreationPatternsIndex)
   {
     autoSubDomainCreationPatternsJsonList[autoSubDomainCreationPatternsIndex].AsString(m_autoSubDomainCreationPatterns[autoSubDomainCreationPatternsIndex]);
   }
   payload.WithArray("autoSubDomainCreationPatterns", std::move(autoSubDomainCreationPatternsJsonList));

  }

  if(m_autoSubDomainIAMRoleHasBeenSet)
  {
   payload.WithString("autoSubDomainIAMRole", m_autoSubDomainIAMRole);

  }

  if(m_certificateSettingsHasBeenSet)
  {
   payload.WithObject("certificateSettings", m_certificateSettings.Jsonize());

  }

  return payload.View().WriteReadable();
}




