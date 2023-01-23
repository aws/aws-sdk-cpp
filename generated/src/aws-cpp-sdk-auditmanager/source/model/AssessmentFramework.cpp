/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/AssessmentFramework.h>
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

AssessmentFramework::AssessmentFramework() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_controlSetsHasBeenSet(false)
{
}

AssessmentFramework::AssessmentFramework(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_controlSetsHasBeenSet(false)
{
  *this = jsonValue;
}

AssessmentFramework& AssessmentFramework::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metadata"))
  {
    m_metadata = jsonValue.GetObject("metadata");

    m_metadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("controlSets"))
  {
    Aws::Utils::Array<JsonView> controlSetsJsonList = jsonValue.GetArray("controlSets");
    for(unsigned controlSetsIndex = 0; controlSetsIndex < controlSetsJsonList.GetLength(); ++controlSetsIndex)
    {
      m_controlSets.push_back(controlSetsJsonList[controlSetsIndex].AsObject());
    }
    m_controlSetsHasBeenSet = true;
  }

  return *this;
}

JsonValue AssessmentFramework::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_metadataHasBeenSet)
  {
   payload.WithObject("metadata", m_metadata.Jsonize());

  }

  if(m_controlSetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> controlSetsJsonList(m_controlSets.size());
   for(unsigned controlSetsIndex = 0; controlSetsIndex < controlSetsJsonList.GetLength(); ++controlSetsIndex)
   {
     controlSetsJsonList[controlSetsIndex].AsObject(m_controlSets[controlSetsIndex].Jsonize());
   }
   payload.WithArray("controlSets", std::move(controlSetsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AuditManager
} // namespace Aws
