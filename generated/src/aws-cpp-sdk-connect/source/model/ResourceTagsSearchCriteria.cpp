/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ResourceTagsSearchCriteria.h>
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

ResourceTagsSearchCriteria::ResourceTagsSearchCriteria() : 
    m_tagSearchConditionHasBeenSet(false)
{
}

ResourceTagsSearchCriteria::ResourceTagsSearchCriteria(JsonView jsonValue) : 
    m_tagSearchConditionHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceTagsSearchCriteria& ResourceTagsSearchCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TagSearchCondition"))
  {
    m_tagSearchCondition = jsonValue.GetObject("TagSearchCondition");

    m_tagSearchConditionHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceTagsSearchCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_tagSearchConditionHasBeenSet)
  {
   payload.WithObject("TagSearchCondition", m_tagSearchCondition.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
