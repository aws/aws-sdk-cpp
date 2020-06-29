/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/ElasticsearchBufferingHints.h>
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

ElasticsearchBufferingHints::ElasticsearchBufferingHints() : 
    m_intervalInSeconds(0),
    m_intervalInSecondsHasBeenSet(false),
    m_sizeInMBs(0),
    m_sizeInMBsHasBeenSet(false)
{
}

ElasticsearchBufferingHints::ElasticsearchBufferingHints(JsonView jsonValue) : 
    m_intervalInSeconds(0),
    m_intervalInSecondsHasBeenSet(false),
    m_sizeInMBs(0),
    m_sizeInMBsHasBeenSet(false)
{
  *this = jsonValue;
}

ElasticsearchBufferingHints& ElasticsearchBufferingHints::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IntervalInSeconds"))
  {
    m_intervalInSeconds = jsonValue.GetInteger("IntervalInSeconds");

    m_intervalInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SizeInMBs"))
  {
    m_sizeInMBs = jsonValue.GetInteger("SizeInMBs");

    m_sizeInMBsHasBeenSet = true;
  }

  return *this;
}

JsonValue ElasticsearchBufferingHints::Jsonize() const
{
  JsonValue payload;

  if(m_intervalInSecondsHasBeenSet)
  {
   payload.WithInteger("IntervalInSeconds", m_intervalInSeconds);

  }

  if(m_sizeInMBsHasBeenSet)
  {
   payload.WithInteger("SizeInMBs", m_sizeInMBs);

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
