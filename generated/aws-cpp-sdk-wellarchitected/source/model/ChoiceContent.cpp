/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ChoiceContent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

ChoiceContent::ChoiceContent() : 
    m_displayTextHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

ChoiceContent::ChoiceContent(JsonView jsonValue) : 
    m_displayTextHasBeenSet(false),
    m_urlHasBeenSet(false)
{
  *this = jsonValue;
}

ChoiceContent& ChoiceContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DisplayText"))
  {
    m_displayText = jsonValue.GetString("DisplayText");

    m_displayTextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Url"))
  {
    m_url = jsonValue.GetString("Url");

    m_urlHasBeenSet = true;
  }

  return *this;
}

JsonValue ChoiceContent::Jsonize() const
{
  JsonValue payload;

  if(m_displayTextHasBeenSet)
  {
   payload.WithString("DisplayText", m_displayText);

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("Url", m_url);

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
