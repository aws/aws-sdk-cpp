/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamesparks/model/Section.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameSparks
{
namespace Model
{

Section::Section() : 
    m_attributesHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false)
{
}

Section::Section(JsonView jsonValue) : 
    m_attributesHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false)
{
  *this = jsonValue;
}

Section& Section::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Attributes"))
  {
    m_attributes = jsonValue.GetObject("Attributes");

    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Size"))
  {
    m_size = jsonValue.GetInteger("Size");

    m_sizeHasBeenSet = true;
  }

  return *this;
}

JsonValue Section::Jsonize() const
{
  JsonValue payload;

  if(m_attributesHasBeenSet)
  {
    if(!m_attributes.View().IsNull())
    {
       payload.WithObject("Attributes", JsonValue(m_attributes.View()));
    }
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_sizeHasBeenSet)
  {
   payload.WithInteger("Size", m_size);

  }

  return payload;
}

} // namespace Model
} // namespace GameSparks
} // namespace Aws
