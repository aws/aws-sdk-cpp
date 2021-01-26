/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/StartSigningJobParameter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

StartSigningJobParameter::StartSigningJobParameter() : 
    m_signingProfileParameterHasBeenSet(false),
    m_signingProfileNameHasBeenSet(false),
    m_destinationHasBeenSet(false)
{
}

StartSigningJobParameter::StartSigningJobParameter(JsonView jsonValue) : 
    m_signingProfileParameterHasBeenSet(false),
    m_signingProfileNameHasBeenSet(false),
    m_destinationHasBeenSet(false)
{
  *this = jsonValue;
}

StartSigningJobParameter& StartSigningJobParameter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("signingProfileParameter"))
  {
    m_signingProfileParameter = jsonValue.GetObject("signingProfileParameter");

    m_signingProfileParameterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("signingProfileName"))
  {
    m_signingProfileName = jsonValue.GetString("signingProfileName");

    m_signingProfileNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetObject("destination");

    m_destinationHasBeenSet = true;
  }

  return *this;
}

JsonValue StartSigningJobParameter::Jsonize() const
{
  JsonValue payload;

  if(m_signingProfileParameterHasBeenSet)
  {
   payload.WithObject("signingProfileParameter", m_signingProfileParameter.Jsonize());

  }

  if(m_signingProfileNameHasBeenSet)
  {
   payload.WithString("signingProfileName", m_signingProfileName);

  }

  if(m_destinationHasBeenSet)
  {
   payload.WithObject("destination", m_destination.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
