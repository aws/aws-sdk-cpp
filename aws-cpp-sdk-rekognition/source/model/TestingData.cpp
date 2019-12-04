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

#include <aws/rekognition/model/TestingData.h>
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

TestingData::TestingData() : 
    m_assetsHasBeenSet(false),
    m_autoCreate(false),
    m_autoCreateHasBeenSet(false)
{
}

TestingData::TestingData(JsonView jsonValue) : 
    m_assetsHasBeenSet(false),
    m_autoCreate(false),
    m_autoCreateHasBeenSet(false)
{
  *this = jsonValue;
}

TestingData& TestingData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Assets"))
  {
    Array<JsonView> assetsJsonList = jsonValue.GetArray("Assets");
    for(unsigned assetsIndex = 0; assetsIndex < assetsJsonList.GetLength(); ++assetsIndex)
    {
      m_assets.push_back(assetsJsonList[assetsIndex].AsObject());
    }
    m_assetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoCreate"))
  {
    m_autoCreate = jsonValue.GetBool("AutoCreate");

    m_autoCreateHasBeenSet = true;
  }

  return *this;
}

JsonValue TestingData::Jsonize() const
{
  JsonValue payload;

  if(m_assetsHasBeenSet)
  {
   Array<JsonValue> assetsJsonList(m_assets.size());
   for(unsigned assetsIndex = 0; assetsIndex < assetsJsonList.GetLength(); ++assetsIndex)
   {
     assetsJsonList[assetsIndex].AsObject(m_assets[assetsIndex].Jsonize());
   }
   payload.WithArray("Assets", std::move(assetsJsonList));

  }

  if(m_autoCreateHasBeenSet)
  {
   payload.WithBool("AutoCreate", m_autoCreate);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
