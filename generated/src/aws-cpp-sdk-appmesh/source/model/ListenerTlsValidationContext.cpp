/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/ListenerTlsValidationContext.h>
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

ListenerTlsValidationContext::ListenerTlsValidationContext() : 
    m_subjectAlternativeNamesHasBeenSet(false),
    m_trustHasBeenSet(false)
{
}

ListenerTlsValidationContext::ListenerTlsValidationContext(JsonView jsonValue) : 
    m_subjectAlternativeNamesHasBeenSet(false),
    m_trustHasBeenSet(false)
{
  *this = jsonValue;
}

ListenerTlsValidationContext& ListenerTlsValidationContext::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("subjectAlternativeNames"))
  {
    m_subjectAlternativeNames = jsonValue.GetObject("subjectAlternativeNames");

    m_subjectAlternativeNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("trust"))
  {
    m_trust = jsonValue.GetObject("trust");

    m_trustHasBeenSet = true;
  }

  return *this;
}

JsonValue ListenerTlsValidationContext::Jsonize() const
{
  JsonValue payload;

  if(m_subjectAlternativeNamesHasBeenSet)
  {
   payload.WithObject("subjectAlternativeNames", m_subjectAlternativeNames.Jsonize());

  }

  if(m_trustHasBeenSet)
  {
   payload.WithObject("trust", m_trust.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
