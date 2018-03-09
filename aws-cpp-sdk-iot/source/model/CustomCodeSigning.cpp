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

#include <aws/iot/model/CustomCodeSigning.h>
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

CustomCodeSigning::CustomCodeSigning() : 
    m_signatureHasBeenSet(false),
    m_certificateChainHasBeenSet(false),
    m_hashAlgorithmHasBeenSet(false),
    m_signatureAlgorithmHasBeenSet(false)
{
}

CustomCodeSigning::CustomCodeSigning(const JsonValue& jsonValue) : 
    m_signatureHasBeenSet(false),
    m_certificateChainHasBeenSet(false),
    m_hashAlgorithmHasBeenSet(false),
    m_signatureAlgorithmHasBeenSet(false)
{
  *this = jsonValue;
}

CustomCodeSigning& CustomCodeSigning::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("signature"))
  {
    m_signature = jsonValue.GetObject("signature");

    m_signatureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("certificateChain"))
  {
    m_certificateChain = jsonValue.GetObject("certificateChain");

    m_certificateChainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hashAlgorithm"))
  {
    m_hashAlgorithm = jsonValue.GetString("hashAlgorithm");

    m_hashAlgorithmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("signatureAlgorithm"))
  {
    m_signatureAlgorithm = jsonValue.GetString("signatureAlgorithm");

    m_signatureAlgorithmHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomCodeSigning::Jsonize() const
{
  JsonValue payload;

  if(m_signatureHasBeenSet)
  {
   payload.WithObject("signature", m_signature.Jsonize());

  }

  if(m_certificateChainHasBeenSet)
  {
   payload.WithObject("certificateChain", m_certificateChain.Jsonize());

  }

  if(m_hashAlgorithmHasBeenSet)
  {
   payload.WithString("hashAlgorithm", m_hashAlgorithm);

  }

  if(m_signatureAlgorithmHasBeenSet)
  {
   payload.WithString("signatureAlgorithm", m_signatureAlgorithm);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
