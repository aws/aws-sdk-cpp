/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/MetadataFormSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

MetadataFormSummary::MetadataFormSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

MetadataFormSummary& MetadataFormSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("formName"))
  {
    m_formName = jsonValue.GetString("formName");
    m_formNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("typeName"))
  {
    m_typeName = jsonValue.GetString("typeName");
    m_typeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("typeRevision"))
  {
    m_typeRevision = jsonValue.GetString("typeRevision");
    m_typeRevisionHasBeenSet = true;
  }
  return *this;
}

JsonValue MetadataFormSummary::Jsonize() const
{
  JsonValue payload;

  if(m_formNameHasBeenSet)
  {
   payload.WithString("formName", m_formName);

  }

  if(m_typeNameHasBeenSet)
  {
   payload.WithString("typeName", m_typeName);

  }

  if(m_typeRevisionHasBeenSet)
  {
   payload.WithString("typeRevision", m_typeRevision);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
