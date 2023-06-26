/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/BatchDetachFromIndexResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

BatchDetachFromIndexResponse::BatchDetachFromIndexResponse() : 
    m_detachedObjectIdentifierHasBeenSet(false)
{
}

BatchDetachFromIndexResponse::BatchDetachFromIndexResponse(JsonView jsonValue) : 
    m_detachedObjectIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

BatchDetachFromIndexResponse& BatchDetachFromIndexResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DetachedObjectIdentifier"))
  {
    m_detachedObjectIdentifier = jsonValue.GetString("DetachedObjectIdentifier");

    m_detachedObjectIdentifierHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchDetachFromIndexResponse::Jsonize() const
{
  JsonValue payload;

  if(m_detachedObjectIdentifierHasBeenSet)
  {
   payload.WithString("DetachedObjectIdentifier", m_detachedObjectIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
