/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/FailedRecord.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

FailedRecord::FailedRecord(JsonView jsonValue)
{
  *this = jsonValue;
}

FailedRecord& FailedRecord::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inputSourceARN"))
  {
    m_inputSourceARN = jsonValue.GetString("inputSourceARN");
    m_inputSourceARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("uniqueId"))
  {
    m_uniqueId = jsonValue.GetString("uniqueId");
    m_uniqueIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue FailedRecord::Jsonize() const
{
  JsonValue payload;

  if(m_inputSourceARNHasBeenSet)
  {
   payload.WithString("inputSourceARN", m_inputSourceARN);

  }

  if(m_uniqueIdHasBeenSet)
  {
   payload.WithString("uniqueId", m_uniqueId);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
