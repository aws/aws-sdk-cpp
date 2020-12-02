/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/ListProfileObjectTypeTemplateItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

ListProfileObjectTypeTemplateItem::ListProfileObjectTypeTemplateItem() : 
    m_templateIdHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_sourceObjectHasBeenSet(false)
{
}

ListProfileObjectTypeTemplateItem::ListProfileObjectTypeTemplateItem(JsonView jsonValue) : 
    m_templateIdHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_sourceObjectHasBeenSet(false)
{
  *this = jsonValue;
}

ListProfileObjectTypeTemplateItem& ListProfileObjectTypeTemplateItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TemplateId"))
  {
    m_templateId = jsonValue.GetString("TemplateId");

    m_templateIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceName"))
  {
    m_sourceName = jsonValue.GetString("SourceName");

    m_sourceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceObject"))
  {
    m_sourceObject = jsonValue.GetString("SourceObject");

    m_sourceObjectHasBeenSet = true;
  }

  return *this;
}

JsonValue ListProfileObjectTypeTemplateItem::Jsonize() const
{
  JsonValue payload;

  if(m_templateIdHasBeenSet)
  {
   payload.WithString("TemplateId", m_templateId);

  }

  if(m_sourceNameHasBeenSet)
  {
   payload.WithString("SourceName", m_sourceName);

  }

  if(m_sourceObjectHasBeenSet)
  {
   payload.WithString("SourceObject", m_sourceObject);

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
