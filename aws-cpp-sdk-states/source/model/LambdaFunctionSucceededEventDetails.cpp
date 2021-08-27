/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/LambdaFunctionSucceededEventDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace Model
{

LambdaFunctionSucceededEventDetails::LambdaFunctionSucceededEventDetails() : 
    m_outputHasBeenSet(false),
    m_outputDetailsHasBeenSet(false)
{
}

LambdaFunctionSucceededEventDetails::LambdaFunctionSucceededEventDetails(JsonView jsonValue) : 
    m_outputHasBeenSet(false),
    m_outputDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

LambdaFunctionSucceededEventDetails& LambdaFunctionSucceededEventDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("output"))
  {
    m_output = jsonValue.GetString("output");

    m_outputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputDetails"))
  {
    m_outputDetails = jsonValue.GetObject("outputDetails");

    m_outputDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue LambdaFunctionSucceededEventDetails::Jsonize() const
{
  JsonValue payload;

  if(m_outputHasBeenSet)
  {
   payload.WithString("output", m_output);

  }

  if(m_outputDetailsHasBeenSet)
  {
   payload.WithObject("outputDetails", m_outputDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
