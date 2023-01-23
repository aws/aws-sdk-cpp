/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/BatchAttachObjectResponse.h>
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

BatchAttachObjectResponse::BatchAttachObjectResponse() : 
    m_attachedObjectIdentifierHasBeenSet(false)
{
}

BatchAttachObjectResponse::BatchAttachObjectResponse(JsonView jsonValue) : 
    m_attachedObjectIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

BatchAttachObjectResponse& BatchAttachObjectResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attachedObjectIdentifier"))
  {
    m_attachedObjectIdentifier = jsonValue.GetString("attachedObjectIdentifier");

    m_attachedObjectIdentifierHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchAttachObjectResponse::Jsonize() const
{
  JsonValue payload;

  if(m_attachedObjectIdentifierHasBeenSet)
  {
   payload.WithString("attachedObjectIdentifier", m_attachedObjectIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
