/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ProtectedQueryOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

ProtectedQueryOutput::ProtectedQueryOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

ProtectedQueryOutput& ProtectedQueryOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3"))
  {
    m_s3 = jsonValue.GetObject("s3");
    m_s3HasBeenSet = true;
  }
  if(jsonValue.ValueExists("memberList"))
  {
    Aws::Utils::Array<JsonView> memberListJsonList = jsonValue.GetArray("memberList");
    for(unsigned memberListIndex = 0; memberListIndex < memberListJsonList.GetLength(); ++memberListIndex)
    {
      m_memberList.push_back(memberListJsonList[memberListIndex].AsObject());
    }
    m_memberListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("distribute"))
  {
    m_distribute = jsonValue.GetObject("distribute");
    m_distributeHasBeenSet = true;
  }
  return *this;
}

JsonValue ProtectedQueryOutput::Jsonize() const
{
  JsonValue payload;

  if(m_s3HasBeenSet)
  {
   payload.WithObject("s3", m_s3.Jsonize());

  }

  if(m_memberListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> memberListJsonList(m_memberList.size());
   for(unsigned memberListIndex = 0; memberListIndex < memberListJsonList.GetLength(); ++memberListIndex)
   {
     memberListJsonList[memberListIndex].AsObject(m_memberList[memberListIndex].Jsonize());
   }
   payload.WithArray("memberList", std::move(memberListJsonList));

  }

  if(m_distributeHasBeenSet)
  {
   payload.WithObject("distribute", m_distribute.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
