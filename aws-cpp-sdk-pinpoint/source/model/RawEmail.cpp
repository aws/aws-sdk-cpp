/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/RawEmail.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

RawEmail::RawEmail() : 
    m_dataHasBeenSet(false)
{
}

RawEmail::RawEmail(JsonView jsonValue) : 
    m_dataHasBeenSet(false)
{
  *this = jsonValue;
}

RawEmail& RawEmail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Data"))
  {
    m_data = HashingUtils::Base64Decode(jsonValue.GetString("Data"));
    m_dataHasBeenSet = true;
  }

  return *this;
}

JsonValue RawEmail::Jsonize() const
{
  JsonValue payload;

  if(m_dataHasBeenSet)
  {
   payload.WithString("Data", HashingUtils::Base64Encode(m_data));
  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
