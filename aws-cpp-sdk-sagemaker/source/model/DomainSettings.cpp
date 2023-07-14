﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DomainSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

DomainSettings::DomainSettings() : 
    m_securityGroupIdsHasBeenSet(false),
    m_rStudioServerProDomainSettingsHasBeenSet(false)
{
}

DomainSettings::DomainSettings(JsonView jsonValue) : 
    m_securityGroupIdsHasBeenSet(false),
    m_rStudioServerProDomainSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

DomainSettings& DomainSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SecurityGroupIds"))
  {
    Array<JsonView> securityGroupIdsJsonList = jsonValue.GetArray("SecurityGroupIds");
    for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
    {
      m_securityGroupIds.push_back(securityGroupIdsJsonList[securityGroupIdsIndex].AsString());
    }
    m_securityGroupIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RStudioServerProDomainSettings"))
  {
    m_rStudioServerProDomainSettings = jsonValue.GetObject("RStudioServerProDomainSettings");

    m_rStudioServerProDomainSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainSettings::Jsonize() const
{
  JsonValue payload;

  if(m_securityGroupIdsHasBeenSet)
  {
   Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
   for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
   {
     securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
   }
   payload.WithArray("SecurityGroupIds", std::move(securityGroupIdsJsonList));

  }

  if(m_rStudioServerProDomainSettingsHasBeenSet)
  {
   payload.WithObject("RStudioServerProDomainSettings", m_rStudioServerProDomainSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
