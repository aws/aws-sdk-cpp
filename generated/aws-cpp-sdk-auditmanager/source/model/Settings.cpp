﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/Settings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AuditManager
{
namespace Model
{

Settings::Settings() : 
    m_isAwsOrgEnabled(false),
    m_isAwsOrgEnabledHasBeenSet(false),
    m_snsTopicHasBeenSet(false),
    m_defaultAssessmentReportsDestinationHasBeenSet(false),
    m_defaultProcessOwnersHasBeenSet(false),
    m_kmsKeyHasBeenSet(false)
{
}

Settings::Settings(JsonView jsonValue) : 
    m_isAwsOrgEnabled(false),
    m_isAwsOrgEnabledHasBeenSet(false),
    m_snsTopicHasBeenSet(false),
    m_defaultAssessmentReportsDestinationHasBeenSet(false),
    m_defaultProcessOwnersHasBeenSet(false),
    m_kmsKeyHasBeenSet(false)
{
  *this = jsonValue;
}

Settings& Settings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("isAwsOrgEnabled"))
  {
    m_isAwsOrgEnabled = jsonValue.GetBool("isAwsOrgEnabled");

    m_isAwsOrgEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("snsTopic"))
  {
    m_snsTopic = jsonValue.GetString("snsTopic");

    m_snsTopicHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultAssessmentReportsDestination"))
  {
    m_defaultAssessmentReportsDestination = jsonValue.GetObject("defaultAssessmentReportsDestination");

    m_defaultAssessmentReportsDestinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultProcessOwners"))
  {
    Array<JsonView> defaultProcessOwnersJsonList = jsonValue.GetArray("defaultProcessOwners");
    for(unsigned defaultProcessOwnersIndex = 0; defaultProcessOwnersIndex < defaultProcessOwnersJsonList.GetLength(); ++defaultProcessOwnersIndex)
    {
      m_defaultProcessOwners.push_back(defaultProcessOwnersJsonList[defaultProcessOwnersIndex].AsObject());
    }
    m_defaultProcessOwnersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kmsKey"))
  {
    m_kmsKey = jsonValue.GetString("kmsKey");

    m_kmsKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue Settings::Jsonize() const
{
  JsonValue payload;

  if(m_isAwsOrgEnabledHasBeenSet)
  {
   payload.WithBool("isAwsOrgEnabled", m_isAwsOrgEnabled);

  }

  if(m_snsTopicHasBeenSet)
  {
   payload.WithString("snsTopic", m_snsTopic);

  }

  if(m_defaultAssessmentReportsDestinationHasBeenSet)
  {
   payload.WithObject("defaultAssessmentReportsDestination", m_defaultAssessmentReportsDestination.Jsonize());

  }

  if(m_defaultProcessOwnersHasBeenSet)
  {
   Array<JsonValue> defaultProcessOwnersJsonList(m_defaultProcessOwners.size());
   for(unsigned defaultProcessOwnersIndex = 0; defaultProcessOwnersIndex < defaultProcessOwnersJsonList.GetLength(); ++defaultProcessOwnersIndex)
   {
     defaultProcessOwnersJsonList[defaultProcessOwnersIndex].AsObject(m_defaultProcessOwners[defaultProcessOwnersIndex].Jsonize());
   }
   payload.WithArray("defaultProcessOwners", std::move(defaultProcessOwnersJsonList));

  }

  if(m_kmsKeyHasBeenSet)
  {
   payload.WithString("kmsKey", m_kmsKey);

  }

  return payload;
}

} // namespace Model
} // namespace AuditManager
} // namespace Aws
