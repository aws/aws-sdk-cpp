/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/DirectPutSourceConfiguration.h>
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

DirectPutSourceConfiguration::DirectPutSourceConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

DirectPutSourceConfiguration& DirectPutSourceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ThroughputHintInMBs"))
  {
    m_throughputHintInMBs = jsonValue.GetInteger("ThroughputHintInMBs");
    m_throughputHintInMBsHasBeenSet = true;
  }
  return *this;
}

JsonValue DirectPutSourceConfiguration::Jsonize() const
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
