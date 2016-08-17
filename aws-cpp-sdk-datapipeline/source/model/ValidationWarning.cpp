/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/datapipeline/model/ValidationWarning.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataPipeline
{
namespace Model
{

ValidationWarning::ValidationWarning() : 
    m_idHasBeenSet(false),
    m_warningsHasBeenSet(false)
{
}

ValidationWarning::ValidationWarning(const JsonValue& jsonValue) : 
    m_idHasBeenSet(false),
    m_warningsHasBeenSet(false)
{
  *this = jsonValue;
}

ValidationWarning& ValidationWarning::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("warnings"))
  {
    Array<JsonValue> warningsJsonList = jsonValue.GetArray("warnings");
    for(unsigned warningsIndex = 0; warningsIndex < warningsJsonList.GetLength(); ++warningsIndex)
    {
      m_warnings.push_back(warningsJsonList[warningsIndex].AsString());
    }
    m_warningsHasBeenSet = true;
  }

  return *this;
}

JsonValue ValidationWarning::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_warningsHasBeenSet)
  {
   Array<JsonValue> warningsJsonList(m_warnings.size());
   for(unsigned warningsIndex = 0; warningsIndex < warningsJsonList.GetLength(); ++warningsIndex)
   {
     warningsJsonList[warningsIndex].AsString(m_warnings[warningsIndex]);
   }
   payload.WithArray("warnings", std::move(warningsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DataPipeline
} // namespace Aws