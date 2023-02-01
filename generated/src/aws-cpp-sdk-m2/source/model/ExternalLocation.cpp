/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/ExternalLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

ExternalLocation::ExternalLocation() : 
    m_s3LocationHasBeenSet(false)
{
}

ExternalLocation::ExternalLocation(JsonView jsonValue) : 
    m_s3LocationHasBeenSet(false)
{
  *this = jsonValue;
}

ExternalLocation& ExternalLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3Location"))
  {
    m_s3Location = jsonValue.GetString("s3Location");

    m_s3LocationHasBeenSet = true;
  }

  return *this;
}

JsonValue ExternalLocation::Jsonize() const
{
  JsonValue payload;

  if(m_s3LocationHasBeenSet)
  {
   payload.WithString("s3Location", m_s3Location);

  }

  return payload;
}

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
