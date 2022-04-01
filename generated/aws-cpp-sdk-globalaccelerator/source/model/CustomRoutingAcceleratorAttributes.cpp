/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/CustomRoutingAcceleratorAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{

CustomRoutingAcceleratorAttributes::CustomRoutingAcceleratorAttributes() : 
    m_flowLogsEnabled(false),
    m_flowLogsEnabledHasBeenSet(false),
    m_flowLogsS3BucketHasBeenSet(false),
    m_flowLogsS3PrefixHasBeenSet(false)
{
}

CustomRoutingAcceleratorAttributes::CustomRoutingAcceleratorAttributes(JsonView jsonValue) : 
    m_flowLogsEnabled(false),
    m_flowLogsEnabledHasBeenSet(false),
    m_flowLogsS3BucketHasBeenSet(false),
    m_flowLogsS3PrefixHasBeenSet(false)
{
  *this = jsonValue;
}

CustomRoutingAcceleratorAttributes& CustomRoutingAcceleratorAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FlowLogsEnabled"))
  {
    m_flowLogsEnabled = jsonValue.GetBool("FlowLogsEnabled");

    m_flowLogsEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FlowLogsS3Bucket"))
  {
    m_flowLogsS3Bucket = jsonValue.GetString("FlowLogsS3Bucket");

    m_flowLogsS3BucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FlowLogsS3Prefix"))
  {
    m_flowLogsS3Prefix = jsonValue.GetString("FlowLogsS3Prefix");

    m_flowLogsS3PrefixHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomRoutingAcceleratorAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_flowLogsEnabledHasBeenSet)
  {
   payload.WithBool("FlowLogsEnabled", m_flowLogsEnabled);

  }

  if(m_flowLogsS3BucketHasBeenSet)
  {
   payload.WithString("FlowLogsS3Bucket", m_flowLogsS3Bucket);

  }

  if(m_flowLogsS3PrefixHasBeenSet)
  {
   payload.WithString("FlowLogsS3Prefix", m_flowLogsS3Prefix);

  }

  return payload;
}

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
