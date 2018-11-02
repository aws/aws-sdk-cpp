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
