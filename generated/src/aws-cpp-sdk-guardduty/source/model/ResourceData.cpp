/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/ResourceData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

ResourceData::ResourceData(JsonView jsonValue)
{
  *this = jsonValue;
}

ResourceData& ResourceData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3Bucket"))
  {
    m_s3Bucket = jsonValue.GetObject("s3Bucket");
    m_s3BucketHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ec2Instance"))
  {
    m_ec2Instance = jsonValue.GetObject("ec2Instance");
    m_ec2InstanceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("accessKey"))
  {
    m_accessKey = jsonValue.GetObject("accessKey");
    m_accessKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ec2NetworkInterface"))
  {
    m_ec2NetworkInterface = jsonValue.GetObject("ec2NetworkInterface");
    m_ec2NetworkInterfaceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("s3Object"))
  {
    m_s3Object = jsonValue.GetObject("s3Object");
    m_s3ObjectHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eksCluster"))
  {
    m_eksCluster = jsonValue.GetObject("eksCluster");
    m_eksClusterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kubernetesWorkload"))
  {
    m_kubernetesWorkload = jsonValue.GetObject("kubernetesWorkload");
    m_kubernetesWorkloadHasBeenSet = true;
  }
  if(jsonValue.ValueExists("container"))
  {
    m_container = jsonValue.GetObject("container");
    m_containerHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceData::Jsonize() const
{
  JsonValue payload;

  if(m_s3BucketHasBeenSet)
  {
   payload.WithObject("s3Bucket", m_s3Bucket.Jsonize());

  }

  if(m_ec2InstanceHasBeenSet)
  {
   payload.WithObject("ec2Instance", m_ec2Instance.Jsonize());

  }

  if(m_accessKeyHasBeenSet)
  {
   payload.WithObject("accessKey", m_accessKey.Jsonize());

  }

  if(m_ec2NetworkInterfaceHasBeenSet)
  {
   payload.WithObject("ec2NetworkInterface", m_ec2NetworkInterface.Jsonize());

  }

  if(m_s3ObjectHasBeenSet)
  {
   payload.WithObject("s3Object", m_s3Object.Jsonize());

  }

  if(m_eksClusterHasBeenSet)
  {
   payload.WithObject("eksCluster", m_eksCluster.Jsonize());

  }

  if(m_kubernetesWorkloadHasBeenSet)
  {
   payload.WithObject("kubernetesWorkload", m_kubernetesWorkload.Jsonize());

  }

  if(m_containerHasBeenSet)
  {
   payload.WithObject("container", m_container.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
