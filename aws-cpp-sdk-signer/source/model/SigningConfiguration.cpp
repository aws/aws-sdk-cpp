﻿/*
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

#include <aws/signer/model/SigningConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace signer
{
namespace Model
{

SigningConfiguration::SigningConfiguration() : 
    m_encryptionAlgorithmOptionsHasBeenSet(false),
    m_hashAlgorithmOptionsHasBeenSet(false)
{
}

SigningConfiguration::SigningConfiguration(JsonView jsonValue) : 
    m_encryptionAlgorithmOptionsHasBeenSet(false),
    m_hashAlgorithmOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

SigningConfiguration& SigningConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("encryptionAlgorithmOptions"))
  {
    m_encryptionAlgorithmOptions = jsonValue.GetObject("encryptionAlgorithmOptions");

    m_encryptionAlgorithmOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hashAlgorithmOptions"))
  {
    m_hashAlgorithmOptions = jsonValue.GetObject("hashAlgorithmOptions");

    m_hashAlgorithmOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue SigningConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_encryptionAlgorithmOptionsHasBeenSet)
  {
   payload.WithObject("encryptionAlgorithmOptions", m_encryptionAlgorithmOptions.Jsonize());

  }

  if(m_hashAlgorithmOptionsHasBeenSet)
  {
   payload.WithObject("hashAlgorithmOptions", m_hashAlgorithmOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace signer
} // namespace Aws
