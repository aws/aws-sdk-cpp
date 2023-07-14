/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
