/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/ShareAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

ShareAttributes::ShareAttributes() : 
    m_shareIdentifierHasBeenSet(false),
    m_weightFactor(0.0),
    m_weightFactorHasBeenSet(false)
{
}

ShareAttributes::ShareAttributes(JsonView jsonValue) : 
    m_shareIdentifierHasBeenSet(false),
    m_weightFactor(0.0),
    m_weightFactorHasBeenSet(false)
{
  *this = jsonValue;
}

ShareAttributes& ShareAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("shareIdentifier"))
  {
    m_shareIdentifier = jsonValue.GetString("shareIdentifier");

    m_shareIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("weightFactor"))
  {
    m_weightFactor = jsonValue.GetDouble("weightFactor");

    m_weightFactorHasBeenSet = true;
  }

  return *this;
}

JsonValue ShareAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_shareIdentifierHasBeenSet)
  {
   payload.WithString("shareIdentifier", m_shareIdentifier);

  }

  if(m_weightFactorHasBeenSet)
  {
   payload.WithDouble("weightFactor", m_weightFactor);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
