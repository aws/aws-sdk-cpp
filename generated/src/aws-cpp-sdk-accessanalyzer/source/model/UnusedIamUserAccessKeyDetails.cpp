/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/UnusedIamUserAccessKeyDetails.h>
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

UnusedIamUserAccessKeyDetails::UnusedIamUserAccessKeyDetails() : 
    m_accessKeyIdHasBeenSet(false),
    m_lastAccessedHasBeenSet(false)
{
}

UnusedIamUserAccessKeyDetails::UnusedIamUserAccessKeyDetails(JsonView jsonValue) : 
    m_accessKeyIdHasBeenSet(false),
    m_lastAccessedHasBeenSet(false)
{
  *this = jsonValue;
}

UnusedIamUserAccessKeyDetails& UnusedIamUserAccessKeyDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accessKeyId"))
  {
    m_accessKeyId = jsonValue.GetString("accessKeyId");

    m_accessKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastAccessed"))
  {
    m_lastAccessed = jsonValue.GetString("lastAccessed");

    m_lastAccessedHasBeenSet = true;
  }

  return *this;
}

JsonValue UnusedIamUserAccessKeyDetails::Jsonize() const
{
  JsonValue payload;

  if(m_accessKeyIdHasBeenSet)
  {
   payload.WithString("accessKeyId", m_accessKeyId);

  }

  if(m_lastAccessedHasBeenSet)
  {
   payload.WithString("lastAccessed", m_lastAccessed.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
