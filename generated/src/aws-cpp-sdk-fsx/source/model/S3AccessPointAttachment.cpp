/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/S3AccessPointAttachment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

S3AccessPointAttachment::S3AccessPointAttachment(JsonView jsonValue)
{
  *this = jsonValue;
}

S3AccessPointAttachment& S3AccessPointAttachment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Lifecycle"))
  {
    m_lifecycle = S3AccessPointAttachmentLifecycleMapper::GetS3AccessPointAttachmentLifecycleForName(jsonValue.GetString("Lifecycle"));
    m_lifecycleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LifecycleTransitionReason"))
  {
    m_lifecycleTransitionReason = jsonValue.GetObject("LifecycleTransitionReason");
    m_lifecycleTransitionReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = S3AccessPointAttachmentTypeMapper::GetS3AccessPointAttachmentTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OpenZFSConfiguration"))
  {
    m_openZFSConfiguration = jsonValue.GetObject("OpenZFSConfiguration");
    m_openZFSConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3AccessPoint"))
  {
    m_s3AccessPoint = jsonValue.GetObject("S3AccessPoint");
    m_s3AccessPointHasBeenSet = true;
  }
  return *this;
}

JsonValue S3AccessPointAttachment::Jsonize() const
{
  JsonValue payload;

  if(m_lifecycleHasBeenSet)
  {
   payload.WithString("Lifecycle", S3AccessPointAttachmentLifecycleMapper::GetNameForS3AccessPointAttachmentLifecycle(m_lifecycle));
  }

  if(m_lifecycleTransitionReasonHasBeenSet)
  {
   payload.WithObject("LifecycleTransitionReason", m_lifecycleTransitionReason.Jsonize());

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", S3AccessPointAttachmentTypeMapper::GetNameForS3AccessPointAttachmentType(m_type));
  }

  if(m_openZFSConfigurationHasBeenSet)
  {
   payload.WithObject("OpenZFSConfiguration", m_openZFSConfiguration.Jsonize());

  }

  if(m_s3AccessPointHasBeenSet)
  {
   payload.WithObject("S3AccessPoint", m_s3AccessPoint.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
