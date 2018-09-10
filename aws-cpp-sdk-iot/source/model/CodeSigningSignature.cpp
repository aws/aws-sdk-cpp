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

#include <aws/iot/model/CodeSigningSignature.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

CodeSigningSignature::CodeSigningSignature() : 
    m_inlineDocumentHasBeenSet(false)
{
}

CodeSigningSignature::CodeSigningSignature(JsonView jsonValue) : 
    m_inlineDocumentHasBeenSet(false)
{
  *this = jsonValue;
}

CodeSigningSignature& CodeSigningSignature::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inlineDocument"))
  {
    m_inlineDocument = HashingUtils::Base64Decode(jsonValue.GetString("inlineDocument"));
    m_inlineDocumentHasBeenSet = true;
  }

  return *this;
}

JsonValue CodeSigningSignature::Jsonize() const
{
  JsonValue payload;

  if(m_inlineDocumentHasBeenSet)
  {
   payload.WithString("inlineDocument", HashingUtils::Base64Encode(m_inlineDocument));
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
