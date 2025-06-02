/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/MatchedRecord.h>
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

MatchedRecord::MatchedRecord(JsonView jsonValue)
{
  *this = jsonValue;
}

MatchedRecord& MatchedRecord::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inputSourceARN"))
  {
    m_inputSourceARN = jsonValue.GetString("inputSourceARN");
    m_inputSourceARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recordId"))
  {
    m_recordId = jsonValue.GetString("recordId");
    m_recordIdHasBeenSet = true;
  }
  return *this;
}

JsonValue MatchedRecord::Jsonize() const
{
  JsonValue payload;

  if(m_inputSourceARNHasBeenSet)
  {
   payload.WithString("inputSourceARN", m_inputSourceARN);

  }

  if(m_recordIdHasBeenSet)
  {
   payload.WithString("recordId", m_recordId);

  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
