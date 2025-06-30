/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/X12ControlNumbers.h>
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

X12ControlNumbers::X12ControlNumbers(JsonView jsonValue)
{
  *this = jsonValue;
}

X12ControlNumbers& X12ControlNumbers::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("startingInterchangeControlNumber"))
  {
    m_startingInterchangeControlNumber = jsonValue.GetInteger("startingInterchangeControlNumber");
    m_startingInterchangeControlNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startingFunctionalGroupControlNumber"))
  {
    m_startingFunctionalGroupControlNumber = jsonValue.GetInteger("startingFunctionalGroupControlNumber");
    m_startingFunctionalGroupControlNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startingTransactionSetControlNumber"))
  {
    m_startingTransactionSetControlNumber = jsonValue.GetInteger("startingTransactionSetControlNumber");
    m_startingTransactionSetControlNumberHasBeenSet = true;
  }
  return *this;
}

JsonValue X12ControlNumbers::Jsonize() const
{
  JsonValue payload;

  if(m_startingInterchangeControlNumberHasBeenSet)
  {
   payload.WithInteger("startingInterchangeControlNumber", m_startingInterchangeControlNumber);

  }

  if(m_startingFunctionalGroupControlNumberHasBeenSet)
  {
   payload.WithInteger("startingFunctionalGroupControlNumber", m_startingFunctionalGroupControlNumber);

  }

  if(m_startingTransactionSetControlNumberHasBeenSet)
  {
   payload.WithInteger("startingTransactionSetControlNumber", m_startingTransactionSetControlNumber);

  }

  return payload;
}

} // namespace Model
} // namespace B2BI
} // namespace Aws
