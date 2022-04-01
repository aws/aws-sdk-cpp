/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/InputFormatOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

InputFormatOptions::InputFormatOptions() : 
    m_csvHasBeenSet(false)
{
}

InputFormatOptions::InputFormatOptions(JsonView jsonValue) : 
    m_csvHasBeenSet(false)
{
  *this = jsonValue;
}

InputFormatOptions& InputFormatOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Csv"))
  {
    m_csv = jsonValue.GetObject("Csv");

    m_csvHasBeenSet = true;
  }

  return *this;
}

JsonValue InputFormatOptions::Jsonize() const
{
  JsonValue payload;

  if(m_csvHasBeenSet)
  {
   payload.WithObject("Csv", m_csv.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
