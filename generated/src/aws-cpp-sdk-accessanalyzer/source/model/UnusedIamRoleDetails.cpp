/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/UnusedIamRoleDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

UnusedIamRoleDetails::UnusedIamRoleDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

UnusedIamRoleDetails& UnusedIamRoleDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lastAccessed"))
  {
    m_lastAccessed = jsonValue.GetString("lastAccessed");
    m_lastAccessedHasBeenSet = true;
  }
  return *this;
}

JsonValue UnusedIamRoleDetails::Jsonize() const
{
  JsonValue payload;

  if(m_lastAccessedHasBeenSet)
  {
   payload.WithString("lastAccessed", m_lastAccessed.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
