/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/ArchiveStringToEvaluate.h>
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

ArchiveStringToEvaluate::ArchiveStringToEvaluate(JsonView jsonValue)
{
  *this = jsonValue;
}

ArchiveStringToEvaluate& ArchiveStringToEvaluate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Attribute"))
  {
    m_attribute = ArchiveStringEmailAttributeMapper::GetArchiveStringEmailAttributeForName(jsonValue.GetString("Attribute"));
    m_attributeHasBeenSet = true;
  }
  return *this;
}

JsonValue ArchiveStringToEvaluate::Jsonize() const
{
  JsonValue payload;

  if(m_attributeHasBeenSet)
  {
   payload.WithString("Attribute", ArchiveStringEmailAttributeMapper::GetNameForArchiveStringEmailAttribute(m_attribute));
  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
