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

#include <aws/iotevents/model/TagrisSweepListItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

TagrisSweepListItem::TagrisSweepListItem() : 
    m_tagrisAccountIdHasBeenSet(false),
    m_tagrisAmazonResourceNameHasBeenSet(false),
    m_tagrisInternalIdHasBeenSet(false),
    m_tagrisVersion(0),
    m_tagrisVersionHasBeenSet(false)
{
}

TagrisSweepListItem::TagrisSweepListItem(JsonView jsonValue) : 
    m_tagrisAccountIdHasBeenSet(false),
    m_tagrisAmazonResourceNameHasBeenSet(false),
    m_tagrisInternalIdHasBeenSet(false),
    m_tagrisVersion(0),
    m_tagrisVersionHasBeenSet(false)
{
  *this = jsonValue;
}

TagrisSweepListItem& TagrisSweepListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TagrisAccountId"))
  {
    m_tagrisAccountId = jsonValue.GetString("TagrisAccountId");

    m_tagrisAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TagrisAmazonResourceName"))
  {
    m_tagrisAmazonResourceName = jsonValue.GetString("TagrisAmazonResourceName");

    m_tagrisAmazonResourceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TagrisInternalId"))
  {
    m_tagrisInternalId = jsonValue.GetString("TagrisInternalId");

    m_tagrisInternalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TagrisVersion"))
  {
    m_tagrisVersion = jsonValue.GetInt64("TagrisVersion");

    m_tagrisVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue TagrisSweepListItem::Jsonize() const
{
  JsonValue payload;

  if(m_tagrisAccountIdHasBeenSet)
  {
   payload.WithString("TagrisAccountId", m_tagrisAccountId);

  }

  if(m_tagrisAmazonResourceNameHasBeenSet)
  {
   payload.WithString("TagrisAmazonResourceName", m_tagrisAmazonResourceName);

  }

  if(m_tagrisInternalIdHasBeenSet)
  {
   payload.WithString("TagrisInternalId", m_tagrisInternalId);

  }

  if(m_tagrisVersionHasBeenSet)
  {
   payload.WithInt64("TagrisVersion", m_tagrisVersion);

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
