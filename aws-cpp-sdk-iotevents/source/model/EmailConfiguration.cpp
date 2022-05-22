/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/EmailConfiguration.h>
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

EmailConfiguration::EmailConfiguration() : 
    m_fromHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_recipientsHasBeenSet(false)
{
}

EmailConfiguration::EmailConfiguration(JsonView jsonValue) : 
    m_fromHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_recipientsHasBeenSet(false)
{
  *this = jsonValue;
}

EmailConfiguration& EmailConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("from"))
  {
    m_from = jsonValue.GetString("from");

    m_fromHasBeenSet = true;
  }

  if(jsonValue.ValueExists("content"))
  {
    m_content = jsonValue.GetObject("content");

    m_contentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recipients"))
  {
    m_recipients = jsonValue.GetObject("recipients");

    m_recipientsHasBeenSet = true;
  }

  return *this;
}

JsonValue EmailConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_fromHasBeenSet)
  {
   payload.WithString("from", m_from);

  }

  if(m_contentHasBeenSet)
  {
   payload.WithObject("content", m_content.Jsonize());

  }

  if(m_recipientsHasBeenSet)
  {
   payload.WithObject("recipients", m_recipients.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
