/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/worklink/model/WebsiteCaSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkLink
{
namespace Model
{

WebsiteCaSummary::WebsiteCaSummary() : 
    m_websiteCaIdHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_displayNameHasBeenSet(false)
{
}

WebsiteCaSummary::WebsiteCaSummary(JsonView jsonValue) : 
    m_websiteCaIdHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_displayNameHasBeenSet(false)
{
  *this = jsonValue;
}

WebsiteCaSummary& WebsiteCaSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WebsiteCaId"))
  {
    m_websiteCaId = jsonValue.GetString("WebsiteCaId");

    m_websiteCaIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

    m_displayNameHasBeenSet = true;
  }

  return *this;
}

JsonValue WebsiteCaSummary::Jsonize() const
{
  JsonValue payload;

  if(m_websiteCaIdHasBeenSet)
  {
   payload.WithString("WebsiteCaId", m_websiteCaId);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  return payload;
}

} // namespace Model
} // namespace WorkLink
} // namespace Aws
