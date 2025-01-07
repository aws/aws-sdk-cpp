﻿/**
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

ResourceData::ResourceData() : 
    m_s3BucketHasBeenSet(false),
    m_ec2InstanceHasBeenSet(false),
    m_accessKeyHasBeenSet(false),
    m_ec2NetworkInterfaceHasBeenSet(false),
    m_s3ObjectHasBeenSet(false)
{
}

ResourceData::ResourceData(JsonView jsonValue)
  : ResourceData()
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

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
