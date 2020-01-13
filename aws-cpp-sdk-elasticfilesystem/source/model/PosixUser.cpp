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

#include <aws/elasticfilesystem/model/PosixUser.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EFS
{
namespace Model
{

PosixUser::PosixUser() : 
    m_uid(0),
    m_uidHasBeenSet(false),
    m_gid(0),
    m_gidHasBeenSet(false),
    m_secondaryGidsHasBeenSet(false)
{
}

PosixUser::PosixUser(JsonView jsonValue) : 
    m_uid(0),
    m_uidHasBeenSet(false),
    m_gid(0),
    m_gidHasBeenSet(false),
    m_secondaryGidsHasBeenSet(false)
{
  *this = jsonValue;
}

PosixUser& PosixUser::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Uid"))
  {
    m_uid = jsonValue.GetInt64("Uid");

    m_uidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Gid"))
  {
    m_gid = jsonValue.GetInt64("Gid");

    m_gidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecondaryGids"))
  {
    Array<JsonView> secondaryGidsJsonList = jsonValue.GetArray("SecondaryGids");
    for(unsigned secondaryGidsIndex = 0; secondaryGidsIndex < secondaryGidsJsonList.GetLength(); ++secondaryGidsIndex)
    {
      m_secondaryGids.push_back(secondaryGidsJsonList[secondaryGidsIndex].AsInt64());
    }
    m_secondaryGidsHasBeenSet = true;
  }

  return *this;
}

JsonValue PosixUser::Jsonize() const
{
  JsonValue payload;

  if(m_uidHasBeenSet)
  {
   payload.WithInt64("Uid", m_uid);

  }

  if(m_gidHasBeenSet)
  {
   payload.WithInt64("Gid", m_gid);

  }

  if(m_secondaryGidsHasBeenSet)
  {
   Array<JsonValue> secondaryGidsJsonList(m_secondaryGids.size());
   for(unsigned secondaryGidsIndex = 0; secondaryGidsIndex < secondaryGidsJsonList.GetLength(); ++secondaryGidsIndex)
   {
     secondaryGidsJsonList[secondaryGidsIndex].AsInt64(m_secondaryGids[secondaryGidsIndex]);
   }
   payload.WithArray("SecondaryGids", std::move(secondaryGidsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EFS
} // namespace Aws
