/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/PromptSearchFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

PromptSearchFilter::PromptSearchFilter() : 
    m_tagFilterHasBeenSet(false)
{
}

PromptSearchFilter::PromptSearchFilter(JsonView jsonValue) : 
    m_tagFilterHasBeenSet(false)
{
  *this = jsonValue;
}

PromptSearchFilter& PromptSearchFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TagFilter"))
  {
    m_tagFilter = jsonValue.GetObject("TagFilter");

    m_tagFilterHasBeenSet = true;
  }

  return *this;
}

JsonValue PromptSearchFilter::Jsonize() const
{
  JsonValue payload;

  if(m_tagFilterHasBeenSet)
  {
   payload.WithObject("TagFilter", m_tagFilter.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
