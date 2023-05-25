/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivschat/model/DestinationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ivschat
{
namespace Model
{

DestinationConfiguration::DestinationConfiguration() : 
    m_cloudWatchLogsHasBeenSet(false),
    m_firehoseHasBeenSet(false),
    m_s3HasBeenSet(false)
{
}

DestinationConfiguration::DestinationConfiguration(JsonView jsonValue) : 
    m_cloudWatchLogsHasBeenSet(false),
    m_firehoseHasBeenSet(false),
    m_s3HasBeenSet(false)
{
  *this = jsonValue;
}

DestinationConfiguration& DestinationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cloudWatchLogs"))
  {
    m_cloudWatchLogs = jsonValue.GetObject("cloudWatchLogs");

    m_cloudWatchLogsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("firehose"))
  {
    m_firehose = jsonValue.GetObject("firehose");

    m_firehoseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3"))
  {
    m_s3 = jsonValue.GetObject("s3");

    m_s3HasBeenSet = true;
  }

  return *this;
}

JsonValue DestinationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_cloudWatchLogsHasBeenSet)
  {
   payload.WithObject("cloudWatchLogs", m_cloudWatchLogs.Jsonize());

  }

  if(m_firehoseHasBeenSet)
  {
   payload.WithObject("firehose", m_firehose.Jsonize());

  }

  if(m_s3HasBeenSet)
  {
   payload.WithObject("s3", m_s3.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ivschat
} // namespace Aws
