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

#include <aws/rekognition/model/Warning.h>
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

Warning::Warning() : 
    m_errorCodeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_sectionsHasBeenSet(false)
{
}

Warning::Warning(JsonView jsonValue) : 
    m_errorCodeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_sectionsHasBeenSet(false)
{
  *this = jsonValue;
}

Warning& Warning::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = jsonValue.GetString("ErrorCode");

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Sections"))
  {
    Array<JsonView> sectionsJsonList = jsonValue.GetArray("Sections");
    for(unsigned sectionsIndex = 0; sectionsIndex < sectionsJsonList.GetLength(); ++sectionsIndex)
    {
      m_sections.push_back(sectionsJsonList[sectionsIndex].AsObject());
    }
    m_sectionsHasBeenSet = true;
  }

  return *this;
}

JsonValue Warning::Jsonize() const
{
  JsonValue payload;

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", m_errorCode);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_sectionsHasBeenSet)
  {
   Array<JsonValue> sectionsJsonList(m_sections.size());
   for(unsigned sectionsIndex = 0; sectionsIndex < sectionsJsonList.GetLength(); ++sectionsIndex)
   {
     sectionsJsonList[sectionsIndex].AsObject(m_sections[sectionsIndex].Jsonize());
   }
   payload.WithArray("Sections", std::move(sectionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
