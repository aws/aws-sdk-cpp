/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/ManualEvidence.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AuditManager
{
namespace Model
{

ManualEvidence::ManualEvidence() : 
    m_s3ResourcePathHasBeenSet(false)
{
}

ManualEvidence::ManualEvidence(JsonView jsonValue) : 
    m_s3ResourcePathHasBeenSet(false)
{
  *this = jsonValue;
}

ManualEvidence& ManualEvidence::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3ResourcePath"))
  {
    m_s3ResourcePath = jsonValue.GetString("s3ResourcePath");

    m_s3ResourcePathHasBeenSet = true;
  }

  return *this;
}

JsonValue ManualEvidence::Jsonize() const
{
  JsonValue payload;

  if(m_s3ResourcePathHasBeenSet)
  {
   payload.WithString("s3ResourcePath", m_s3ResourcePath);

  }

  return payload;
}

} // namespace Model
} // namespace AuditManager
} // namespace Aws
