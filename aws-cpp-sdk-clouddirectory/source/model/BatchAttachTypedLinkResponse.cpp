/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/BatchAttachTypedLinkResponse.h>
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

BatchAttachTypedLinkResponse::BatchAttachTypedLinkResponse() : 
    m_typedLinkSpecifierHasBeenSet(false)
{
}

BatchAttachTypedLinkResponse::BatchAttachTypedLinkResponse(JsonView jsonValue) : 
    m_typedLinkSpecifierHasBeenSet(false)
{
  *this = jsonValue;
}

BatchAttachTypedLinkResponse& BatchAttachTypedLinkResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TypedLinkSpecifier"))
  {
    m_typedLinkSpecifier = jsonValue.GetObject("TypedLinkSpecifier");

    m_typedLinkSpecifierHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchAttachTypedLinkResponse::Jsonize() const
{
  JsonValue payload;

  if(m_typedLinkSpecifierHasBeenSet)
  {
   payload.WithObject("TypedLinkSpecifier", m_typedLinkSpecifier.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
