﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/Label.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

Label::Label() : 
    m_nameHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false),
    m_instancesHasBeenSet(false),
    m_parentsHasBeenSet(false)
{
}

Label::Label(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false),
    m_instancesHasBeenSet(false),
    m_parentsHasBeenSet(false)
{
  *this = jsonValue;
}

Label& Label::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Confidence"))
  {
    m_confidence = jsonValue.GetDouble("Confidence");

    m_confidenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Instances"))
  {
    Array<JsonView> instancesJsonList = jsonValue.GetArray("Instances");
    for(unsigned instancesIndex = 0; instancesIndex < instancesJsonList.GetLength(); ++instancesIndex)
    {
      m_instances.push_back(instancesJsonList[instancesIndex].AsObject());
    }
    m_instancesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parents"))
  {
    Array<JsonView> parentsJsonList = jsonValue.GetArray("Parents");
    for(unsigned parentsIndex = 0; parentsIndex < parentsJsonList.GetLength(); ++parentsIndex)
    {
      m_parents.push_back(parentsJsonList[parentsIndex].AsObject());
    }
    m_parentsHasBeenSet = true;
  }

  return *this;
}

JsonValue Label::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_confidenceHasBeenSet)
  {
   payload.WithDouble("Confidence", m_confidence);

  }

  if(m_instancesHasBeenSet)
  {
   Array<JsonValue> instancesJsonList(m_instances.size());
   for(unsigned instancesIndex = 0; instancesIndex < instancesJsonList.GetLength(); ++instancesIndex)
   {
     instancesJsonList[instancesIndex].AsObject(m_instances[instancesIndex].Jsonize());
   }
   payload.WithArray("Instances", std::move(instancesJsonList));

  }

  if(m_parentsHasBeenSet)
  {
   Array<JsonValue> parentsJsonList(m_parents.size());
   for(unsigned parentsIndex = 0; parentsIndex < parentsJsonList.GetLength(); ++parentsIndex)
   {
     parentsJsonList[parentsIndex].AsObject(m_parents[parentsIndex].Jsonize());
   }
   payload.WithArray("Parents", std::move(parentsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
