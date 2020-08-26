/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/SourceFieldProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

SourceFieldProperties::SourceFieldProperties() : 
    m_isRetrievable(false),
    m_isRetrievableHasBeenSet(false),
    m_isQueryable(false),
    m_isQueryableHasBeenSet(false)
{
}

SourceFieldProperties::SourceFieldProperties(JsonView jsonValue) : 
    m_isRetrievable(false),
    m_isRetrievableHasBeenSet(false),
    m_isQueryable(false),
    m_isQueryableHasBeenSet(false)
{
  *this = jsonValue;
}

SourceFieldProperties& SourceFieldProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("isRetrievable"))
  {
    m_isRetrievable = jsonValue.GetBool("isRetrievable");

    m_isRetrievableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isQueryable"))
  {
    m_isQueryable = jsonValue.GetBool("isQueryable");

    m_isQueryableHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceFieldProperties::Jsonize() const
{
  JsonValue payload;

  if(m_isRetrievableHasBeenSet)
  {
   payload.WithBool("isRetrievable", m_isRetrievable);

  }

  if(m_isQueryableHasBeenSet)
  {
   payload.WithBool("isQueryable", m_isQueryable);

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
