/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds-data/model/ResultSetOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RDSDataService
{
namespace Model
{

ResultSetOptions::ResultSetOptions() : 
    m_decimalReturnType(DecimalReturnType::NOT_SET),
    m_decimalReturnTypeHasBeenSet(false)
{
}

ResultSetOptions::ResultSetOptions(JsonView jsonValue) : 
    m_decimalReturnType(DecimalReturnType::NOT_SET),
    m_decimalReturnTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ResultSetOptions& ResultSetOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("decimalReturnType"))
  {
    m_decimalReturnType = DecimalReturnTypeMapper::GetDecimalReturnTypeForName(jsonValue.GetString("decimalReturnType"));

    m_decimalReturnTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ResultSetOptions::Jsonize() const
{
  JsonValue payload;

  if(m_decimalReturnTypeHasBeenSet)
  {
   payload.WithString("decimalReturnType", DecimalReturnTypeMapper::GetNameForDecimalReturnType(m_decimalReturnType));
  }

  return payload;
}

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
