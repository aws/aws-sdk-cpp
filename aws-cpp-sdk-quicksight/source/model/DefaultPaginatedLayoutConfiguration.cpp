/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DefaultPaginatedLayoutConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

DefaultPaginatedLayoutConfiguration::DefaultPaginatedLayoutConfiguration() : 
    m_sectionBasedHasBeenSet(false)
{
}

DefaultPaginatedLayoutConfiguration::DefaultPaginatedLayoutConfiguration(JsonView jsonValue) : 
    m_sectionBasedHasBeenSet(false)
{
  *this = jsonValue;
}

DefaultPaginatedLayoutConfiguration& DefaultPaginatedLayoutConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SectionBased"))
  {
    m_sectionBased = jsonValue.GetObject("SectionBased");

    m_sectionBasedHasBeenSet = true;
  }

  return *this;
}

JsonValue DefaultPaginatedLayoutConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_sectionBasedHasBeenSet)
  {
   payload.WithObject("SectionBased", m_sectionBased.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
