/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/TraceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppRunner
{
namespace Model
{

TraceConfiguration::TraceConfiguration() : 
    m_vendor(TracingVendor::NOT_SET),
    m_vendorHasBeenSet(false)
{
}

TraceConfiguration::TraceConfiguration(JsonView jsonValue) : 
    m_vendor(TracingVendor::NOT_SET),
    m_vendorHasBeenSet(false)
{
  *this = jsonValue;
}

TraceConfiguration& TraceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Vendor"))
  {
    m_vendor = TracingVendorMapper::GetTracingVendorForName(jsonValue.GetString("Vendor"));

    m_vendorHasBeenSet = true;
  }

  return *this;
}

JsonValue TraceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_vendorHasBeenSet)
  {
   payload.WithString("Vendor", TracingVendorMapper::GetNameForTracingVendor(m_vendor));
  }

  return payload;
}

} // namespace Model
} // namespace AppRunner
} // namespace Aws
