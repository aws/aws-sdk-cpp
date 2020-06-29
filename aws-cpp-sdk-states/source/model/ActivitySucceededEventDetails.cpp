/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/ActivitySucceededEventDetails.h>
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

ActivitySucceededEventDetails::ActivitySucceededEventDetails() : 
    m_outputHasBeenSet(false)
{
}

ActivitySucceededEventDetails::ActivitySucceededEventDetails(JsonView jsonValue) : 
    m_outputHasBeenSet(false)
{
  *this = jsonValue;
}

ActivitySucceededEventDetails& ActivitySucceededEventDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("output"))
  {
    m_output = jsonValue.GetString("output");

    m_outputHasBeenSet = true;
  }

  return *this;
}

JsonValue ActivitySucceededEventDetails::Jsonize() const
{
  JsonValue payload;

  if(m_outputHasBeenSet)
  {
   payload.WithString("output", m_output);

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
