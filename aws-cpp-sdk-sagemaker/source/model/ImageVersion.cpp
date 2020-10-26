/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ImageVersion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

ImageVersion::ImageVersion() : 
    m_creationTimeHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_imageArnHasBeenSet(false),
    m_imageVersionArnHasBeenSet(false),
    m_imageVersionStatus(ImageVersionStatus::NOT_SET),
    m_imageVersionStatusHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false)
{
}

ImageVersion::ImageVersion(JsonView jsonValue) : 
    m_creationTimeHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_imageArnHasBeenSet(false),
    m_imageVersionArnHasBeenSet(false),
    m_imageVersionStatus(ImageVersionStatus::NOT_SET),
    m_imageVersionStatusHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false)
{
  *this = jsonValue;
}

ImageVersion& ImageVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageArn"))
  {
    m_imageArn = jsonValue.GetString("ImageArn");

    m_imageArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageVersionArn"))
  {
    m_imageVersionArn = jsonValue.GetString("ImageVersionArn");

    m_imageVersionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageVersionStatus"))
  {
    m_imageVersionStatus = ImageVersionStatusMapper::GetImageVersionStatusForName(jsonValue.GetString("ImageVersionStatus"));

    m_imageVersionStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetInteger("Version");

    m_versionHasBeenSet = true;
  }

  return *this;
}

JsonValue ImageVersion::Jsonize() const
{
  JsonValue payload;

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  if(m_imageArnHasBeenSet)
  {
   payload.WithString("ImageArn", m_imageArn);

  }

  if(m_imageVersionArnHasBeenSet)
  {
   payload.WithString("ImageVersionArn", m_imageVersionArn);

  }

  if(m_imageVersionStatusHasBeenSet)
  {
   payload.WithString("ImageVersionStatus", ImageVersionStatusMapper::GetNameForImageVersionStatus(m_imageVersionStatus));
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_versionHasBeenSet)
  {
   payload.WithInteger("Version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
