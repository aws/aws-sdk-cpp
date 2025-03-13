/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AdditionalEmailRecipients.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

AdditionalEmailRecipients::AdditionalEmailRecipients(JsonView jsonValue)
{
  *this = jsonValue;
}

AdditionalEmailRecipients& AdditionalEmailRecipients::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ToList"))
  {
    Aws::Utils::Array<JsonView> toListJsonList = jsonValue.GetArray("ToList");
    for(unsigned toListIndex = 0; toListIndex < toListJsonList.GetLength(); ++toListIndex)
    {
      m_toList.push_back(toListJsonList[toListIndex].AsObject());
    }
    m_toListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CcList"))
  {
    Aws::Utils::Array<JsonView> ccListJsonList = jsonValue.GetArray("CcList");
    for(unsigned ccListIndex = 0; ccListIndex < ccListJsonList.GetLength(); ++ccListIndex)
    {
      m_ccList.push_back(ccListJsonList[ccListIndex].AsObject());
    }
    m_ccListHasBeenSet = true;
  }
  return *this;
}

JsonValue AdditionalEmailRecipients::Jsonize() const
{
  JsonValue payload;

  if(m_toListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> toListJsonList(m_toList.size());
   for(unsigned toListIndex = 0; toListIndex < toListJsonList.GetLength(); ++toListIndex)
   {
     toListJsonList[toListIndex].AsObject(m_toList[toListIndex].Jsonize());
   }
   payload.WithArray("ToList", std::move(toListJsonList));

  }

  if(m_ccListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ccListJsonList(m_ccList.size());
   for(unsigned ccListIndex = 0; ccListIndex < ccListJsonList.GetLength(); ++ccListIndex)
   {
     ccListJsonList[ccListIndex].AsObject(m_ccList[ccListIndex].Jsonize());
   }
   payload.WithArray("CcList", std::move(ccListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
