/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/SessionContextAttributes.h>
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

SessionContextAttributes::SessionContextAttributes() : 
    m_creationDateHasBeenSet(false),
    m_mfaAuthenticated(false),
    m_mfaAuthenticatedHasBeenSet(false)
{
}

SessionContextAttributes::SessionContextAttributes(JsonView jsonValue) : 
    m_creationDateHasBeenSet(false),
    m_mfaAuthenticated(false),
    m_mfaAuthenticatedHasBeenSet(false)
{
  *this = jsonValue;
}

SessionContextAttributes& SessionContextAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetString("creationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mfaAuthenticated"))
  {
    m_mfaAuthenticated = jsonValue.GetBool("mfaAuthenticated");

    m_mfaAuthenticatedHasBeenSet = true;
  }

  return *this;
}

JsonValue SessionContextAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_creationDateHasBeenSet)
  {
   payload.WithString("creationDate", m_creationDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_mfaAuthenticatedHasBeenSet)
  {
   payload.WithBool("mfaAuthenticated", m_mfaAuthenticated);

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
