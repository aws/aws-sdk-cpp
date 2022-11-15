/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsTaskVolumeDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEcsTaskVolumeDetails::AwsEcsTaskVolumeDetails() : 
    m_nameHasBeenSet(false),
    m_hostHasBeenSet(false)
{
}

AwsEcsTaskVolumeDetails::AwsEcsTaskVolumeDetails(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_hostHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsTaskVolumeDetails& AwsEcsTaskVolumeDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Host"))
  {
    m_host = jsonValue.GetObject("Host");

    m_hostHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsTaskVolumeDetails::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_hostHasBeenSet)
  {
   payload.WithObject("Host", m_host.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
