/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/PartitionSpec.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
{
namespace Model
{

PartitionSpec::PartitionSpec(JsonView jsonValue)
{
  *this = jsonValue;
}

PartitionSpec& PartitionSpec::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Identity"))
  {
    Aws::Utils::Array<JsonView> identityJsonList = jsonValue.GetArray("Identity");
    for(unsigned identityIndex = 0; identityIndex < identityJsonList.GetLength(); ++identityIndex)
    {
      m_identity.push_back(identityJsonList[identityIndex].AsObject());
    }
    m_identityHasBeenSet = true;
  }
  return *this;
}

JsonValue PartitionSpec::Jsonize() const
{
  JsonValue payload;

  if(m_identityHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> identityJsonList(m_identity.size());
   for(unsigned identityIndex = 0; identityIndex < identityJsonList.GetLength(); ++identityIndex)
   {
     identityJsonList[identityIndex].AsObject(m_identity[identityIndex].Jsonize());
   }
   payload.WithArray("Identity", std::move(identityJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
