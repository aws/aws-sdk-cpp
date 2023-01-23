/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/LayoutSections.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

LayoutSections::LayoutSections() : 
    m_sectionsHasBeenSet(false)
{
}

LayoutSections::LayoutSections(JsonView jsonValue) : 
    m_sectionsHasBeenSet(false)
{
  *this = jsonValue;
}

LayoutSections& LayoutSections::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sections"))
  {
    Aws::Utils::Array<JsonView> sectionsJsonList = jsonValue.GetArray("sections");
    for(unsigned sectionsIndex = 0; sectionsIndex < sectionsJsonList.GetLength(); ++sectionsIndex)
    {
      m_sections.push_back(sectionsJsonList[sectionsIndex].AsObject());
    }
    m_sectionsHasBeenSet = true;
  }

  return *this;
}

JsonValue LayoutSections::Jsonize() const
{
  JsonValue payload;

  if(m_sectionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sectionsJsonList(m_sections.size());
   for(unsigned sectionsIndex = 0; sectionsIndex < sectionsJsonList.GetLength(); ++sectionsIndex)
   {
     sectionsJsonList[sectionsIndex].AsObject(m_sections[sectionsIndex].Jsonize());
   }
   payload.WithArray("sections", std::move(sectionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
