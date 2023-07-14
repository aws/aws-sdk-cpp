/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/BatchDetachTypedLink.h>
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

BatchDetachTypedLink::BatchDetachTypedLink() : 
    m_typedLinkSpecifierHasBeenSet(false)
{
}

BatchDetachTypedLink::BatchDetachTypedLink(JsonView jsonValue) : 
    m_typedLinkSpecifierHasBeenSet(false)
{
  *this = jsonValue;
}

BatchDetachTypedLink& BatchDetachTypedLink::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TypedLinkSpecifier"))
  {
    m_typedLinkSpecifier = jsonValue.GetObject("TypedLinkSpecifier");

    m_typedLinkSpecifierHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchDetachTypedLink::Jsonize() const
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
