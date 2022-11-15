/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/RefResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

RefResource::RefResource() : 
    m_arnHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_lastUpdatedOnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

RefResource::RefResource(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_lastUpdatedOnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

RefResource& RefResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetString("endTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedOn"))
  {
    m_lastUpdatedOn = jsonValue.GetString("lastUpdatedOn");

    m_lastUpdatedOnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue RefResource::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithString("endTime", m_endTime);

  }

  if(m_lastUpdatedOnHasBeenSet)
  {
   payload.WithString("lastUpdatedOn", m_lastUpdatedOn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("startTime", m_startTime);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
