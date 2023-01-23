/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/ServiceMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

ServiceMetadata::ServiceMetadata() : 
    m_userDetailsHasBeenSet(false)
{
}

ServiceMetadata::ServiceMetadata(JsonView jsonValue) : 
    m_userDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceMetadata& ServiceMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UserDetails"))
  {
    m_userDetails = jsonValue.GetObject("UserDetails");

    m_userDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_userDetailsHasBeenSet)
  {
   payload.WithObject("UserDetails", m_userDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
