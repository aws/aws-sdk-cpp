/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/Record.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
{
namespace Model
{

Record::Record() : 
    m_dataHasBeenSet(false)
{
}

Record::Record(JsonView jsonValue) : 
    m_dataHasBeenSet(false)
{
  *this = jsonValue;
}

Record& Record::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Data"))
  {
    m_data = HashingUtils::Base64Decode(jsonValue.GetString("Data"));
    m_dataHasBeenSet = true;
  }

  return *this;
}

JsonValue Record::Jsonize() const
{
  JsonValue payload;

  if(m_dataHasBeenSet)
  {
   payload.WithString("Data", HashingUtils::Base64Encode(m_data));
  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
