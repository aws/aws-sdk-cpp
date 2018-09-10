/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
