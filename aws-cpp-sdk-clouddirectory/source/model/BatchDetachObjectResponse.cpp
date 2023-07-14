/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/BatchDetachObjectResponse.h>
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

BatchDetachObjectResponse::BatchDetachObjectResponse() : 
    m_detachedObjectIdentifierHasBeenSet(false)
{
}

BatchDetachObjectResponse::BatchDetachObjectResponse(JsonView jsonValue) : 
    m_detachedObjectIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

BatchDetachObjectResponse& BatchDetachObjectResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("detachedObjectIdentifier"))
  {
    m_detachedObjectIdentifier = jsonValue.GetString("detachedObjectIdentifier");

    m_detachedObjectIdentifierHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchDetachObjectResponse::Jsonize() const
{
  JsonValue payload;

  if(m_detachedObjectIdentifierHasBeenSet)
  {
   payload.WithString("detachedObjectIdentifier", m_detachedObjectIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
