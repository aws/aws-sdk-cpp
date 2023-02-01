/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/FormStyleConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{

FormStyleConfig::FormStyleConfig() : 
    m_tokenReferenceHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

FormStyleConfig::FormStyleConfig(JsonView jsonValue) : 
    m_tokenReferenceHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

FormStyleConfig& FormStyleConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tokenReference"))
  {
    m_tokenReference = jsonValue.GetString("tokenReference");

    m_tokenReferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue FormStyleConfig::Jsonize() const
{
  JsonValue payload;

  if(m_tokenReferenceHasBeenSet)
  {
   payload.WithString("tokenReference", m_tokenReference);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
