﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/CloudWatchLogsDestinationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

CloudWatchLogsDestinationConfig::CloudWatchLogsDestinationConfig() : 
    m_logGroupHasBeenSet(false)
{
}

CloudWatchLogsDestinationConfig::CloudWatchLogsDestinationConfig(JsonView jsonValue) : 
    m_logGroupHasBeenSet(false)
{
  *this = jsonValue;
}

CloudWatchLogsDestinationConfig& CloudWatchLogsDestinationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("logGroup"))
  {
    m_logGroup = jsonValue.GetString("logGroup");

    m_logGroupHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudWatchLogsDestinationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_logGroupHasBeenSet)
  {
   payload.WithString("logGroup", m_logGroup);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
