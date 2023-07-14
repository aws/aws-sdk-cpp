/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/OutputFormatOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

OutputFormatOptions::OutputFormatOptions() : 
    m_csvHasBeenSet(false)
{
}

OutputFormatOptions::OutputFormatOptions(JsonView jsonValue) : 
    m_csvHasBeenSet(false)
{
  *this = jsonValue;
}

OutputFormatOptions& OutputFormatOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Csv"))
  {
    m_csv = jsonValue.GetObject("Csv");

    m_csvHasBeenSet = true;
  }

  return *this;
}

JsonValue OutputFormatOptions::Jsonize() const
{
  JsonValue payload;

  if(m_csvHasBeenSet)
  {
   payload.WithObject("Csv", m_csv.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
