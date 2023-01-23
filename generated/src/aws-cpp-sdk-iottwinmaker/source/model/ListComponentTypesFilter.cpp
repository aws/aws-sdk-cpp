/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/ListComponentTypesFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

ListComponentTypesFilter::ListComponentTypesFilter() : 
    m_extendsFromHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_isAbstract(false),
    m_isAbstractHasBeenSet(false)
{
}

ListComponentTypesFilter::ListComponentTypesFilter(JsonView jsonValue) : 
    m_extendsFromHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_isAbstract(false),
    m_isAbstractHasBeenSet(false)
{
  *this = jsonValue;
}

ListComponentTypesFilter& ListComponentTypesFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("extendsFrom"))
  {
    m_extendsFrom = jsonValue.GetString("extendsFrom");

    m_extendsFromHasBeenSet = true;
  }

  if(jsonValue.ValueExists("namespace"))
  {
    m_namespace = jsonValue.GetString("namespace");

    m_namespaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isAbstract"))
  {
    m_isAbstract = jsonValue.GetBool("isAbstract");

    m_isAbstractHasBeenSet = true;
  }

  return *this;
}

JsonValue ListComponentTypesFilter::Jsonize() const
{
  JsonValue payload;

  if(m_extendsFromHasBeenSet)
  {
   payload.WithString("extendsFrom", m_extendsFrom);

  }

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("namespace", m_namespace);

  }

  if(m_isAbstractHasBeenSet)
  {
   payload.WithBool("isAbstract", m_isAbstract);

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
