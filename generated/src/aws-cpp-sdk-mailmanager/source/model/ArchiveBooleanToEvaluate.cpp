/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/ArchiveBooleanToEvaluate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

ArchiveBooleanToEvaluate::ArchiveBooleanToEvaluate() : 
    m_attribute(ArchiveBooleanEmailAttribute::NOT_SET),
    m_attributeHasBeenSet(false)
{
}

ArchiveBooleanToEvaluate::ArchiveBooleanToEvaluate(JsonView jsonValue)
  : ArchiveBooleanToEvaluate()
{
  *this = jsonValue;
}

ArchiveBooleanToEvaluate& ArchiveBooleanToEvaluate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Attribute"))
  {
    m_attribute = ArchiveBooleanEmailAttributeMapper::GetArchiveBooleanEmailAttributeForName(jsonValue.GetString("Attribute"));

    m_attributeHasBeenSet = true;
  }

  return *this;
}

JsonValue ArchiveBooleanToEvaluate::Jsonize() const
{
  JsonValue payload;

  if(m_attributeHasBeenSet)
  {
   payload.WithString("Attribute", ArchiveBooleanEmailAttributeMapper::GetNameForArchiveBooleanEmailAttribute(m_attribute));
  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
