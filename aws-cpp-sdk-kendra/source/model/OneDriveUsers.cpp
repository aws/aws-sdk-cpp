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
    Array<JsonView> oneDriveUserListJsonList = jsonValue.GetArray("OneDriveUserList");
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
   Array<JsonValue> oneDriveUserListJsonList(m_oneDriveUserList.size());
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
