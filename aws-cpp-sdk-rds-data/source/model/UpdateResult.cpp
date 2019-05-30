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

#include <aws/rds-data/model/UpdateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RDSDataService
{
namespace Model
{

UpdateResult::UpdateResult() : 
    m_generatedFieldsHasBeenSet(false)
{
}

UpdateResult::UpdateResult(JsonView jsonValue) : 
    m_generatedFieldsHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateResult& UpdateResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("generatedFields"))
  {
    Array<JsonView> generatedFieldsJsonList = jsonValue.GetArray("generatedFields");
    for(unsigned generatedFieldsIndex = 0; generatedFieldsIndex < generatedFieldsJsonList.GetLength(); ++generatedFieldsIndex)
    {
      m_generatedFields.push_back(generatedFieldsJsonList[generatedFieldsIndex].AsObject());
    }
    m_generatedFieldsHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateResult::Jsonize() const
{
  JsonValue payload;

  if(m_generatedFieldsHasBeenSet)
  {
   Array<JsonValue> generatedFieldsJsonList(m_generatedFields.size());
   for(unsigned generatedFieldsIndex = 0; generatedFieldsIndex < generatedFieldsJsonList.GetLength(); ++generatedFieldsIndex)
   {
     generatedFieldsJsonList[generatedFieldsIndex].AsObject(m_generatedFields[generatedFieldsIndex].Jsonize());
   }
   payload.WithArray("generatedFields", std::move(generatedFieldsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
