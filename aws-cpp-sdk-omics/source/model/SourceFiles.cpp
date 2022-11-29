/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/SourceFiles.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Omics
{
namespace Model
{

SourceFiles::SourceFiles() : 
    m_source1HasBeenSet(false),
    m_source2HasBeenSet(false)
{
}

SourceFiles::SourceFiles(JsonView jsonValue) : 
    m_source1HasBeenSet(false),
    m_source2HasBeenSet(false)
{
  *this = jsonValue;
}

SourceFiles& SourceFiles::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("source1"))
  {
    m_source1 = jsonValue.GetString("source1");

    m_source1HasBeenSet = true;
  }

  if(jsonValue.ValueExists("source2"))
  {
    m_source2 = jsonValue.GetString("source2");

    m_source2HasBeenSet = true;
  }

  return *this;
}

JsonValue SourceFiles::Jsonize() const
{
  JsonValue payload;

  if(m_source1HasBeenSet)
  {
   payload.WithString("source1", m_source1);

  }

  if(m_source2HasBeenSet)
  {
   payload.WithString("source2", m_source2);

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
