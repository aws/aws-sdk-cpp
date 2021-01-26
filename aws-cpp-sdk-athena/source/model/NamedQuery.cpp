/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/NamedQuery.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

NamedQuery::NamedQuery() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_namedQueryIdHasBeenSet(false),
    m_workGroupHasBeenSet(false)
{
}

NamedQuery::NamedQuery(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_namedQueryIdHasBeenSet(false),
    m_workGroupHasBeenSet(false)
{
  *this = jsonValue;
}

NamedQuery& NamedQuery::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Database"))
  {
    m_database = jsonValue.GetString("Database");

    m_databaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueryString"))
  {
    m_queryString = jsonValue.GetString("QueryString");

    m_queryStringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NamedQueryId"))
  {
    m_namedQueryId = jsonValue.GetString("NamedQueryId");

    m_namedQueryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkGroup"))
  {
    m_workGroup = jsonValue.GetString("WorkGroup");

    m_workGroupHasBeenSet = true;
  }

  return *this;
}

JsonValue NamedQuery::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_databaseHasBeenSet)
  {
   payload.WithString("Database", m_database);

  }

  if(m_queryStringHasBeenSet)
  {
   payload.WithString("QueryString", m_queryString);

  }

  if(m_namedQueryIdHasBeenSet)
  {
   payload.WithString("NamedQueryId", m_namedQueryId);

  }

  if(m_workGroupHasBeenSet)
  {
   payload.WithString("WorkGroup", m_workGroup);

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
