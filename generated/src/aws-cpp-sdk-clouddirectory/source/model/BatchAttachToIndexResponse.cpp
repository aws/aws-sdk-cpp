/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/BatchAttachToIndexResponse.h>
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

BatchAttachToIndexResponse::BatchAttachToIndexResponse() : 
    m_attachedObjectIdentifierHasBeenSet(false)
{
}

BatchAttachToIndexResponse::BatchAttachToIndexResponse(JsonView jsonValue) : 
    m_attachedObjectIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

BatchAttachToIndexResponse& BatchAttachToIndexResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttachedObjectIdentifier"))
  {
    m_attachedObjectIdentifier = jsonValue.GetString("AttachedObjectIdentifier");

    m_attachedObjectIdentifierHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchAttachToIndexResponse::Jsonize() const
{
  JsonValue payload;

  if(m_attachedObjectIdentifierHasBeenSet)
  {
   payload.WithString("AttachedObjectIdentifier", m_attachedObjectIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
