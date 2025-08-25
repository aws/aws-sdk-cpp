/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-security/model/FindingIdentifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruSecurity
{
namespace Model
{

FindingIdentifier::FindingIdentifier(JsonView jsonValue)
{
  *this = jsonValue;
}

FindingIdentifier& FindingIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scanName"))
  {
    m_scanName = jsonValue.GetString("scanName");
    m_scanNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("findingId"))
  {
    m_findingId = jsonValue.GetString("findingId");
    m_findingIdHasBeenSet = true;
  }
  return *this;
}

JsonValue FindingIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_scanNameHasBeenSet)
  {
   payload.WithString("scanName", m_scanName);

  }

  if(m_findingIdHasBeenSet)
  {
   payload.WithString("findingId", m_findingId);

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
