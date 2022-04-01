/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/StateExitedEventDetails.h>
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

StateExitedEventDetails::StateExitedEventDetails() : 
    m_nameHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_outputDetailsHasBeenSet(false)
{
}

StateExitedEventDetails::StateExitedEventDetails(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_outputDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

StateExitedEventDetails& StateExitedEventDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

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

JsonValue StateExitedEventDetails::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

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
