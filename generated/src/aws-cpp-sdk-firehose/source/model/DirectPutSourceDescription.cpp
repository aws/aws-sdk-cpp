/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/DirectPutSourceDescription.h>
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

DirectPutSourceDescription::DirectPutSourceDescription(JsonView jsonValue)
{
  *this = jsonValue;
}

DirectPutSourceDescription& DirectPutSourceDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ThroughputHintInMBs"))
  {
    m_throughputHintInMBs = jsonValue.GetInteger("ThroughputHintInMBs");
    m_throughputHintInMBsHasBeenSet = true;
  }
  return *this;
}

JsonValue DirectPutSourceDescription::Jsonize() const
{
  JsonValue payload;

  if(m_throughputHintInMBsHasBeenSet)
  {
   payload.WithInteger("ThroughputHintInMBs", m_throughputHintInMBs);

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
