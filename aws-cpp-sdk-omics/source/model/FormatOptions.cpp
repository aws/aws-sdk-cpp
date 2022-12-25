/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/FormatOptions.h>
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

FormatOptions::FormatOptions() : 
    m_tsvOptionsHasBeenSet(false),
    m_vcfOptionsHasBeenSet(false)
{
}

FormatOptions::FormatOptions(JsonView jsonValue) : 
    m_tsvOptionsHasBeenSet(false),
    m_vcfOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

FormatOptions& FormatOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tsvOptions"))
  {
    m_tsvOptions = jsonValue.GetObject("tsvOptions");

    m_tsvOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vcfOptions"))
  {
    m_vcfOptions = jsonValue.GetObject("vcfOptions");

    m_vcfOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue FormatOptions::Jsonize() const
{
  JsonValue payload;

  if(m_tsvOptionsHasBeenSet)
  {
   payload.WithObject("tsvOptions", m_tsvOptions.Jsonize());

  }

  if(m_vcfOptionsHasBeenSet)
  {
   payload.WithObject("vcfOptions", m_vcfOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
