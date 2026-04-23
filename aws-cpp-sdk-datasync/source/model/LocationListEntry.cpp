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

#include <aws/datasync/model/LocationListEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

LocationListEntry::LocationListEntry() : 
    m_locationArnHasBeenSet(false),
    m_locationUriHasBeenSet(false)
{
}

LocationListEntry::LocationListEntry(JsonView jsonValue) : 
    m_locationArnHasBeenSet(false),
    m_locationUriHasBeenSet(false)
{
  *this = jsonValue;
}

LocationListEntry& LocationListEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LocationArn"))
  {
    m_locationArn = jsonValue.GetString("LocationArn");

    m_locationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LocationUri"))
  {
    m_locationUri = jsonValue.GetString("LocationUri");

    m_locationUriHasBeenSet = true;
  }

  return *this;
}

JsonValue LocationListEntry::Jsonize() const
{
  JsonValue payload;

  if(m_locationArnHasBeenSet)
  {
   payload.WithString("LocationArn", m_locationArn);

  }

  if(m_locationUriHasBeenSet)
  {
   payload.WithString("LocationUri", m_locationUri);

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
