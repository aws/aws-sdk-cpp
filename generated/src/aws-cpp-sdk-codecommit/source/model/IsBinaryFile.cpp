/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/IsBinaryFile.h>
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

IsBinaryFile::IsBinaryFile() : 
    m_source(false),
    m_sourceHasBeenSet(false),
    m_destination(false),
    m_destinationHasBeenSet(false),
    m_base(false),
    m_baseHasBeenSet(false)
{
}

IsBinaryFile::IsBinaryFile(JsonView jsonValue) : 
    m_source(false),
    m_sourceHasBeenSet(false),
    m_destination(false),
    m_destinationHasBeenSet(false),
    m_base(false),
    m_baseHasBeenSet(false)
{
  *this = jsonValue;
}

IsBinaryFile& IsBinaryFile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetBool("source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetBool("destination");

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("base"))
  {
    m_base = jsonValue.GetBool("base");

    m_baseHasBeenSet = true;
  }

  return *this;
}

JsonValue IsBinaryFile::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithBool("source", m_source);

  }

  if(m_destinationHasBeenSet)
  {
   payload.WithBool("destination", m_destination);

  }

  if(m_baseHasBeenSet)
  {
   payload.WithBool("base", m_base);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
