/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/BusinessCallingSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

BusinessCallingSettings::BusinessCallingSettings() : 
    m_cdrBucketHasBeenSet(false)
{
}

BusinessCallingSettings::BusinessCallingSettings(JsonView jsonValue) : 
    m_cdrBucketHasBeenSet(false)
{
  *this = jsonValue;
}

BusinessCallingSettings& BusinessCallingSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CdrBucket"))
  {
    m_cdrBucket = jsonValue.GetString("CdrBucket");

    m_cdrBucketHasBeenSet = true;
  }

  return *this;
}

JsonValue BusinessCallingSettings::Jsonize() const
{
  JsonValue payload;

  if(m_cdrBucketHasBeenSet)
  {
   payload.WithString("CdrBucket", m_cdrBucket);

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
