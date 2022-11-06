/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/OneDriveUsers.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

OneDriveUsers::OneDriveUsers() : 
    m_oneDriveUserListHasBeenSet(false),
    m_oneDriveUserS3PathHasBeenSet(false)
{
}

OneDriveUsers::OneDriveUsers(JsonView jsonValue) : 
    m_oneDriveUserListHasBeenSet(false),
    m_oneDriveUserS3PathHasBeenSet(false)
{
  *this = jsonValue;
}

OneDriveUsers& OneDriveUsers::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OneDriveUserList"))
  {
    Aws::Utils::Array<JsonView> oneDriveUserListJsonList = jsonValue.GetArray("OneDriveUserList");
    for(unsigned oneDriveUserListIndex = 0; oneDriveUserListIndex < oneDriveUserListJsonList.GetLength(); ++oneDriveUserListIndex)
    {
      m_oneDriveUserList.push_back(oneDriveUserListJsonList[oneDriveUserListIndex].AsString());
    }
    m_oneDriveUserListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OneDriveUserS3Path"))
  {
    m_oneDriveUserS3Path = jsonValue.GetObject("OneDriveUserS3Path");

    m_oneDriveUserS3PathHasBeenSet = true;
  }

  return *this;
}

JsonValue OneDriveUsers::Jsonize() const
{
  JsonValue payload;

  if(m_oneDriveUserListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> oneDriveUserListJsonList(m_oneDriveUserList.size());
   for(unsigned oneDriveUserListIndex = 0; oneDriveUserListIndex < oneDriveUserListJsonList.GetLength(); ++oneDriveUserListIndex)
   {
     oneDriveUserListJsonList[oneDriveUserListIndex].AsString(m_oneDriveUserList[oneDriveUserListIndex]);
   }
   payload.WithArray("OneDriveUserList", std::move(oneDriveUserListJsonList));

  }

  if(m_oneDriveUserS3PathHasBeenSet)
  {
   payload.WithObject("OneDriveUserS3Path", m_oneDriveUserS3Path.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
