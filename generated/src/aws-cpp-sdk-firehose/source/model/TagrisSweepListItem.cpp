/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/TagrisSweepListItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
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
} // namespace Firehose
} // namespace Aws
