/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/CreateProjectProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateProjectProfileRequest::CreateProjectProfileRequest() : 
    m_descriptionHasBeenSet(false),
    m_domainIdentifierHasBeenSet(false),
    m_domainUnitIdentifierHasBeenSet(false),
    m_environmentConfigurationsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String CreateProjectProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_domainUnitIdentifierHasBeenSet)
  {
   payload.WithString("domainUnitIdentifier", m_domainUnitIdentifier);

  }

  if(m_environmentConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> environmentConfigurationsJsonList(m_environmentConfigurations.size());
   for(unsigned environmentConfigurationsIndex = 0; environmentConfigurationsIndex < environmentConfigurationsJsonList.GetLength(); ++environmentConfigurationsIndex)
   {
     environmentConfigurationsJsonList[environmentConfigurationsIndex].AsObject(m_environmentConfigurations[environmentConfigurationsIndex].Jsonize());
   }
   payload.WithArray("environmentConfigurations", std::move(environmentConfigurationsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", StatusMapper::GetNameForStatus(m_status));
  }

  return payload.View().WriteReadable();
}




