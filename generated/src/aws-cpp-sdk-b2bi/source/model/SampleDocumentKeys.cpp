/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/SampleDocumentKeys.h>
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

SampleDocumentKeys::SampleDocumentKeys(JsonView jsonValue)
{
  *this = jsonValue;
}

SampleDocumentKeys& SampleDocumentKeys::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("input"))
  {
    m_input = jsonValue.GetString("input");
    m_inputHasBeenSet = true;
  }
  if(jsonValue.ValueExists("output"))
  {
    m_output = jsonValue.GetString("output");
    m_outputHasBeenSet = true;
  }
  return *this;
}

JsonValue SampleDocumentKeys::Jsonize() const
{
  JsonValue payload;

  if(m_inputHasBeenSet)
  {
   payload.WithString("input", m_input);

  }

  if(m_outputHasBeenSet)
  {
   payload.WithString("output", m_output);

  }

  return payload;
}

} // namespace Model
} // namespace B2BI
} // namespace Aws
