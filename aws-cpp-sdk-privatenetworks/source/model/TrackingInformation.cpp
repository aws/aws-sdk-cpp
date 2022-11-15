/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/TrackingInformation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PrivateNetworks
{
namespace Model
{

TrackingInformation::TrackingInformation() : 
    m_trackingNumberHasBeenSet(false)
{
}

TrackingInformation::TrackingInformation(JsonView jsonValue) : 
    m_trackingNumberHasBeenSet(false)
{
  *this = jsonValue;
}

TrackingInformation& TrackingInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("trackingNumber"))
  {
    m_trackingNumber = jsonValue.GetString("trackingNumber");

    m_trackingNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue TrackingInformation::Jsonize() const
{
  JsonValue payload;

  if(m_trackingNumberHasBeenSet)
  {
   payload.WithString("trackingNumber", m_trackingNumber);

  }

  return payload;
}

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
