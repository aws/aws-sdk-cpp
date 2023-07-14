/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2VolumeAttachment.h>
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

AwsEc2VolumeAttachment::AwsEc2VolumeAttachment() : 
    m_attachTimeHasBeenSet(false),
    m_deleteOnTermination(false),
    m_deleteOnTerminationHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

AwsEc2VolumeAttachment::AwsEc2VolumeAttachment(JsonView jsonValue) : 
    m_attachTimeHasBeenSet(false),
    m_deleteOnTermination(false),
    m_deleteOnTerminationHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2VolumeAttachment& AwsEc2VolumeAttachment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttachTime"))
  {
    m_attachTime = jsonValue.GetString("AttachTime");

    m_attachTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeleteOnTermination"))
  {
    m_deleteOnTermination = jsonValue.GetBool("DeleteOnTermination");

    m_deleteOnTerminationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2VolumeAttachment::Jsonize() const
{
  JsonValue payload;

  if(m_attachTimeHasBeenSet)
  {
   payload.WithString("AttachTime", m_attachTime);

  }

  if(m_deleteOnTerminationHasBeenSet)
  {
   payload.WithBool("DeleteOnTermination", m_deleteOnTermination);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
