/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/AuditSuppression.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

AuditSuppression::AuditSuppression() : 
    m_checkNameHasBeenSet(false),
    m_resourceIdentifierHasBeenSet(false),
    m_expirationDateHasBeenSet(false),
    m_suppressIndefinitely(false),
    m_suppressIndefinitelyHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

AuditSuppression::AuditSuppression(JsonView jsonValue) : 
    m_checkNameHasBeenSet(false),
    m_resourceIdentifierHasBeenSet(false),
    m_expirationDateHasBeenSet(false),
    m_suppressIndefinitely(false),
    m_suppressIndefinitelyHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

AuditSuppression& AuditSuppression::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("checkName"))
  {
    m_checkName = jsonValue.GetString("checkName");

    m_checkNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceIdentifier"))
  {
    m_resourceIdentifier = jsonValue.GetObject("resourceIdentifier");

    m_resourceIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("expirationDate"))
  {
    m_expirationDate = jsonValue.GetDouble("expirationDate");

    m_expirationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("suppressIndefinitely"))
  {
    m_suppressIndefinitely = jsonValue.GetBool("suppressIndefinitely");

    m_suppressIndefinitelyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue AuditSuppression::Jsonize() const
{
  JsonValue payload;

  if(m_checkNameHasBeenSet)
  {
   payload.WithString("checkName", m_checkName);

  }

  if(m_resourceIdentifierHasBeenSet)
  {
   payload.WithObject("resourceIdentifier", m_resourceIdentifier.Jsonize());

  }

  if(m_expirationDateHasBeenSet)
  {
   payload.WithDouble("expirationDate", m_expirationDate.SecondsWithMSPrecision());
  }

  if(m_suppressIndefinitelyHasBeenSet)
  {
   payload.WithBool("suppressIndefinitely", m_suppressIndefinitely);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
