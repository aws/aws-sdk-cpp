/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/X12Details.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace B2BI
{
namespace Model
{

X12Details::X12Details(JsonView jsonValue)
{
  *this = jsonValue;
}

X12Details& X12Details::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("transactionSet"))
  {
    m_transactionSet = X12TransactionSetMapper::GetX12TransactionSetForName(jsonValue.GetString("transactionSet"));
    m_transactionSetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("version"))
  {
    m_version = X12VersionMapper::GetX12VersionForName(jsonValue.GetString("version"));
    m_versionHasBeenSet = true;
  }
  return *this;
}

JsonValue X12Details::Jsonize() const
{
  JsonValue payload;

  if(m_transactionSetHasBeenSet)
  {
   payload.WithString("transactionSet", X12TransactionSetMapper::GetNameForX12TransactionSet(m_transactionSet));
  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", X12VersionMapper::GetNameForX12Version(m_version));
  }

  return payload;
}

} // namespace Model
} // namespace B2BI
} // namespace Aws
