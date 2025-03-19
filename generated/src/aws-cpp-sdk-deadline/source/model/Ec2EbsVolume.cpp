/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/Ec2EbsVolume.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

Ec2EbsVolume::Ec2EbsVolume(JsonView jsonValue)
{
  *this = jsonValue;
}

Ec2EbsVolume& Ec2EbsVolume::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sizeGiB"))
  {
    m_sizeGiB = jsonValue.GetInteger("sizeGiB");
    m_sizeGiBHasBeenSet = true;
  }
  if(jsonValue.ValueExists("iops"))
  {
    m_iops = jsonValue.GetInteger("iops");
    m_iopsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("throughputMiB"))
  {
    m_throughputMiB = jsonValue.GetInteger("throughputMiB");
    m_throughputMiBHasBeenSet = true;
  }
  return *this;
}

JsonValue Ec2EbsVolume::Jsonize() const
{
  JsonValue payload;

  if(m_sizeGiBHasBeenSet)
  {
   payload.WithInteger("sizeGiB", m_sizeGiB);

  }

  if(m_iopsHasBeenSet)
  {
   payload.WithInteger("iops", m_iops);

  }

  if(m_throughputMiBHasBeenSet)
  {
   payload.WithInteger("throughputMiB", m_throughputMiB);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
