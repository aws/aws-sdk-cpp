/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/MergeHunk.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

MergeHunk::MergeHunk() : 
    m_isConflict(false),
    m_isConflictHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_baseHasBeenSet(false)
{
}

MergeHunk::MergeHunk(JsonView jsonValue) : 
    m_isConflict(false),
    m_isConflictHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_baseHasBeenSet(false)
{
  *this = jsonValue;
}

MergeHunk& MergeHunk::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("isConflict"))
  {
    m_isConflict = jsonValue.GetBool("isConflict");

    m_isConflictHasBeenSet = true;
  }

  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetObject("source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetObject("destination");

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("base"))
  {
    m_base = jsonValue.GetObject("base");

    m_baseHasBeenSet = true;
  }

  return *this;
}

JsonValue MergeHunk::Jsonize() const
{
  JsonValue payload;

  if(m_isConflictHasBeenSet)
  {
   payload.WithBool("isConflict", m_isConflict);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("source", m_source.Jsonize());

  }

  if(m_destinationHasBeenSet)
  {
   payload.WithObject("destination", m_destination.Jsonize());

  }

  if(m_baseHasBeenSet)
  {
   payload.WithObject("base", m_base.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
