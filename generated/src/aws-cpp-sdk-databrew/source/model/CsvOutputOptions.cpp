/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/CsvOutputOptions.h>
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

CsvOutputOptions::CsvOutputOptions() : 
    m_delimiterHasBeenSet(false)
{
}

CsvOutputOptions::CsvOutputOptions(JsonView jsonValue) : 
    m_delimiterHasBeenSet(false)
{
  *this = jsonValue;
}

CsvOutputOptions& CsvOutputOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Delimiter"))
  {
    m_delimiter = jsonValue.GetString("Delimiter");

    m_delimiterHasBeenSet = true;
  }

  return *this;
}

JsonValue CsvOutputOptions::Jsonize() const
{
  JsonValue payload;

  if(m_delimiterHasBeenSet)
  {
   payload.WithString("Delimiter", m_delimiter);

  }

  return payload;
}

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
