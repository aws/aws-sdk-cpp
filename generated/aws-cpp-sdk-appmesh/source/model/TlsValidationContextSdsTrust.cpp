/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/TlsValidationContextSdsTrust.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

TlsValidationContextSdsTrust::TlsValidationContextSdsTrust() : 
    m_secretNameHasBeenSet(false)
{
}

TlsValidationContextSdsTrust::TlsValidationContextSdsTrust(JsonView jsonValue) : 
    m_secretNameHasBeenSet(false)
{
  *this = jsonValue;
}

TlsValidationContextSdsTrust& TlsValidationContextSdsTrust::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("secretName"))
  {
    m_secretName = jsonValue.GetString("secretName");

    m_secretNameHasBeenSet = true;
  }

  return *this;
}

JsonValue TlsValidationContextSdsTrust::Jsonize() const
{
  JsonValue payload;

  if(m_secretNameHasBeenSet)
  {
   payload.WithString("secretName", m_secretName);

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
