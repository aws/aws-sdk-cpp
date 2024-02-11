/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/InvokedIntentSample.h>
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

InvokedIntentSample::InvokedIntentSample() : 
    m_intentNameHasBeenSet(false)
{
}

InvokedIntentSample::InvokedIntentSample(JsonView jsonValue) : 
    m_intentNameHasBeenSet(false)
{
  *this = jsonValue;
}

InvokedIntentSample& InvokedIntentSample::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("intentName"))
  {
    m_intentName = jsonValue.GetString("intentName");

    m_intentNameHasBeenSet = true;
  }

  return *this;
}

JsonValue InvokedIntentSample::Jsonize() const
{
  JsonValue payload;

  if(m_intentNameHasBeenSet)
  {
   payload.WithString("intentName", m_intentName);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
