/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BuiltInIntentSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

BuiltInIntentSummary::BuiltInIntentSummary() : 
    m_intentSignatureHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

BuiltInIntentSummary::BuiltInIntentSummary(JsonView jsonValue) : 
    m_intentSignatureHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

BuiltInIntentSummary& BuiltInIntentSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("intentSignature"))
  {
    m_intentSignature = jsonValue.GetString("intentSignature");

    m_intentSignatureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue BuiltInIntentSummary::Jsonize() const
{
  JsonValue payload;

  if(m_intentSignatureHasBeenSet)
  {
   payload.WithString("intentSignature", m_intentSignature);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
