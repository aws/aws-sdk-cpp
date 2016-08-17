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
#include <aws/support/model/Communication.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Support
{
namespace Model
{

Communication::Communication() : 
    m_caseIdHasBeenSet(false),
    m_bodyHasBeenSet(false),
    m_submittedByHasBeenSet(false),
    m_timeCreatedHasBeenSet(false),
    m_attachmentSetHasBeenSet(false)
{
}

Communication::Communication(const JsonValue& jsonValue) : 
    m_caseIdHasBeenSet(false),
    m_bodyHasBeenSet(false),
    m_submittedByHasBeenSet(false),
    m_timeCreatedHasBeenSet(false),
    m_attachmentSetHasBeenSet(false)
{
  *this = jsonValue;
}

Communication& Communication::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("caseId"))
  {
    m_caseId = jsonValue.GetString("caseId");

    m_caseIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("body"))
  {
    m_body = jsonValue.GetString("body");

    m_bodyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("submittedBy"))
  {
    m_submittedBy = jsonValue.GetString("submittedBy");

    m_submittedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeCreated"))
  {
    m_timeCreated = jsonValue.GetString("timeCreated");

    m_timeCreatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("attachmentSet"))
  {
    Array<JsonValue> attachmentSetJsonList = jsonValue.GetArray("attachmentSet");
    for(unsigned attachmentSetIndex = 0; attachmentSetIndex < attachmentSetJsonList.GetLength(); ++attachmentSetIndex)
    {
      m_attachmentSet.push_back(attachmentSetJsonList[attachmentSetIndex].AsObject());
    }
    m_attachmentSetHasBeenSet = true;
  }

  return *this;
}

JsonValue Communication::Jsonize() const
{
  JsonValue payload;

  if(m_caseIdHasBeenSet)
  {
   payload.WithString("caseId", m_caseId);

  }

  if(m_bodyHasBeenSet)
  {
   payload.WithString("body", m_body);

  }

  if(m_submittedByHasBeenSet)
  {
   payload.WithString("submittedBy", m_submittedBy);

  }

  if(m_timeCreatedHasBeenSet)
  {
   payload.WithString("timeCreated", m_timeCreated);

  }

  if(m_attachmentSetHasBeenSet)
  {
   Array<JsonValue> attachmentSetJsonList(m_attachmentSet.size());
   for(unsigned attachmentSetIndex = 0; attachmentSetIndex < attachmentSetJsonList.GetLength(); ++attachmentSetIndex)
   {
     attachmentSetJsonList[attachmentSetIndex].AsObject(m_attachmentSet[attachmentSetIndex].Jsonize());
   }
   payload.WithArray("attachmentSet", std::move(attachmentSetJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Support
} // namespace Aws