/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/BatchGetCustomDataIdentifierSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

BatchGetCustomDataIdentifierSummary::BatchGetCustomDataIdentifierSummary() : 
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_deleted(false),
    m_deletedHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

BatchGetCustomDataIdentifierSummary::BatchGetCustomDataIdentifierSummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_deleted(false),
    m_deletedHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

BatchGetCustomDataIdentifierSummary& BatchGetCustomDataIdentifierSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deleted"))
  {
    m_deleted = jsonValue.GetBool("deleted");

    m_deletedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchGetCustomDataIdentifierSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_deletedHasBeenSet)
  {
   payload.WithBool("deleted", m_deleted);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
