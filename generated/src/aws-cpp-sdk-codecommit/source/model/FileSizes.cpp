/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/FileSizes.h>
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

FileSizes::FileSizes() : 
    m_source(0),
    m_sourceHasBeenSet(false),
    m_destination(0),
    m_destinationHasBeenSet(false),
    m_base(0),
    m_baseHasBeenSet(false)
{
}

FileSizes::FileSizes(JsonView jsonValue) : 
    m_source(0),
    m_sourceHasBeenSet(false),
    m_destination(0),
    m_destinationHasBeenSet(false),
    m_base(0),
    m_baseHasBeenSet(false)
{
  *this = jsonValue;
}

FileSizes& FileSizes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetInt64("source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetInt64("destination");

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("base"))
  {
    m_base = jsonValue.GetInt64("base");

    m_baseHasBeenSet = true;
  }

  return *this;
}

JsonValue FileSizes::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithInt64("source", m_source);

  }

  if(m_destinationHasBeenSet)
  {
   payload.WithInt64("destination", m_destination);

  }

  if(m_baseHasBeenSet)
  {
   payload.WithInt64("base", m_base);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
