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
    m_s3ResourcePathHasBeenSet(false),
    m_textResponseHasBeenSet(false),
    m_evidenceFileNameHasBeenSet(false)
{
}

ManualEvidence::ManualEvidence(JsonView jsonValue) : 
    m_s3ResourcePathHasBeenSet(false),
    m_textResponseHasBeenSet(false),
    m_evidenceFileNameHasBeenSet(false)
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

  if(jsonValue.ValueExists("textResponse"))
  {
    m_textResponse = jsonValue.GetString("textResponse");

    m_textResponseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("evidenceFileName"))
  {
    m_evidenceFileName = jsonValue.GetString("evidenceFileName");

    m_evidenceFileNameHasBeenSet = true;
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

  if(m_textResponseHasBeenSet)
  {
   payload.WithString("textResponse", m_textResponse);

  }

  if(m_evidenceFileNameHasBeenSet)
  {
   payload.WithString("evidenceFileName", m_evidenceFileName);

  }

  return payload;
}

} // namespace Model
} // namespace AuditManager
} // namespace Aws
