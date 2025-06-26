/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspacesstreams/model/SequenceNumberRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KeyspacesStreams
{
namespace Model
{

SequenceNumberRange::SequenceNumberRange(JsonView jsonValue)
{
  *this = jsonValue;
}

SequenceNumberRange& SequenceNumberRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("startingSequenceNumber"))
  {
    m_startingSequenceNumber = jsonValue.GetString("startingSequenceNumber");
    m_startingSequenceNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endingSequenceNumber"))
  {
    m_endingSequenceNumber = jsonValue.GetString("endingSequenceNumber");
    m_endingSequenceNumberHasBeenSet = true;
  }
  return *this;
}

JsonValue SequenceNumberRange::Jsonize() const
{
  JsonValue payload;

  if(m_startingSequenceNumberHasBeenSet)
  {
   payload.WithString("startingSequenceNumber", m_startingSequenceNumber);

  }

  if(m_endingSequenceNumberHasBeenSet)
  {
   payload.WithString("endingSequenceNumber", m_endingSequenceNumber);

  }

  return payload;
}

} // namespace Model
} // namespace KeyspacesStreams
} // namespace Aws
