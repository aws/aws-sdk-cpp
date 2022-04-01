﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/CreateAssessmentFrameworkControlSet.h>
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

CreateAssessmentFrameworkControlSet::CreateAssessmentFrameworkControlSet() : 
    m_nameHasBeenSet(false),
    m_controlsHasBeenSet(false)
{
}

CreateAssessmentFrameworkControlSet::CreateAssessmentFrameworkControlSet(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_controlsHasBeenSet(false)
{
  *this = jsonValue;
}

CreateAssessmentFrameworkControlSet& CreateAssessmentFrameworkControlSet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("controls"))
  {
    Array<JsonView> controlsJsonList = jsonValue.GetArray("controls");
    for(unsigned controlsIndex = 0; controlsIndex < controlsJsonList.GetLength(); ++controlsIndex)
    {
      m_controls.push_back(controlsJsonList[controlsIndex].AsObject());
    }
    m_controlsHasBeenSet = true;
  }

  return *this;
}

JsonValue CreateAssessmentFrameworkControlSet::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_controlsHasBeenSet)
  {
   Array<JsonValue> controlsJsonList(m_controls.size());
   for(unsigned controlsIndex = 0; controlsIndex < controlsJsonList.GetLength(); ++controlsIndex)
   {
     controlsJsonList[controlsIndex].AsObject(m_controls[controlsIndex].Jsonize());
   }
   payload.WithArray("controls", std::move(controlsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AuditManager
} // namespace Aws
