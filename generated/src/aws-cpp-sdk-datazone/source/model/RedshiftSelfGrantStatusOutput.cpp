/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/RedshiftSelfGrantStatusOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

RedshiftSelfGrantStatusOutput::RedshiftSelfGrantStatusOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

RedshiftSelfGrantStatusOutput& RedshiftSelfGrantStatusOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("selfGrantStatusDetails"))
  {
    Aws::Utils::Array<JsonView> selfGrantStatusDetailsJsonList = jsonValue.GetArray("selfGrantStatusDetails");
    for(unsigned selfGrantStatusDetailsIndex = 0; selfGrantStatusDetailsIndex < selfGrantStatusDetailsJsonList.GetLength(); ++selfGrantStatusDetailsIndex)
    {
      m_selfGrantStatusDetails.push_back(selfGrantStatusDetailsJsonList[selfGrantStatusDetailsIndex].AsObject());
    }
    m_selfGrantStatusDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue RedshiftSelfGrantStatusOutput::Jsonize() const
{
  JsonValue payload;

  if(m_selfGrantStatusDetailsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> selfGrantStatusDetailsJsonList(m_selfGrantStatusDetails.size());
   for(unsigned selfGrantStatusDetailsIndex = 0; selfGrantStatusDetailsIndex < selfGrantStatusDetailsJsonList.GetLength(); ++selfGrantStatusDetailsIndex)
   {
     selfGrantStatusDetailsJsonList[selfGrantStatusDetailsIndex].AsObject(m_selfGrantStatusDetails[selfGrantStatusDetailsIndex].Jsonize());
   }
   payload.WithArray("selfGrantStatusDetails", std::move(selfGrantStatusDetailsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
