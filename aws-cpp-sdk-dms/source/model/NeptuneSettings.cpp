/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/dms/model/NeptuneSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

NeptuneSettings::NeptuneSettings() : 
    m_serviceAccessRoleArnHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false),
    m_s3BucketFolderHasBeenSet(false),
    m_errorRetryDuration(0),
    m_errorRetryDurationHasBeenSet(false),
    m_maxFileSize(0),
    m_maxFileSizeHasBeenSet(false),
    m_maxRetryCount(0),
    m_maxRetryCountHasBeenSet(false),
    m_iamAuthEnabled(false),
    m_iamAuthEnabledHasBeenSet(false)
{
}

NeptuneSettings::NeptuneSettings(JsonView jsonValue) : 
    m_serviceAccessRoleArnHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false),
    m_s3BucketFolderHasBeenSet(false),
    m_errorRetryDuration(0),
    m_errorRetryDurationHasBeenSet(false),
    m_maxFileSize(0),
    m_maxFileSizeHasBeenSet(false),
    m_maxRetryCount(0),
    m_maxRetryCountHasBeenSet(false),
    m_iamAuthEnabled(false),
    m_iamAuthEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

NeptuneSettings& NeptuneSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServiceAccessRoleArn"))
  {
    m_serviceAccessRoleArn = jsonValue.GetString("ServiceAccessRoleArn");

    m_serviceAccessRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3BucketName"))
  {
    m_s3BucketName = jsonValue.GetString("S3BucketName");

    m_s3BucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3BucketFolder"))
  {
    m_s3BucketFolder = jsonValue.GetString("S3BucketFolder");

    m_s3BucketFolderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorRetryDuration"))
  {
    m_errorRetryDuration = jsonValue.GetInteger("ErrorRetryDuration");

    m_errorRetryDurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxFileSize"))
  {
    m_maxFileSize = jsonValue.GetInteger("MaxFileSize");

    m_maxFileSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxRetryCount"))
  {
    m_maxRetryCount = jsonValue.GetInteger("MaxRetryCount");

    m_maxRetryCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IamAuthEnabled"))
  {
    m_iamAuthEnabled = jsonValue.GetBool("IamAuthEnabled");

    m_iamAuthEnabledHasBeenSet = true;
  }

  return *this;
}

JsonValue NeptuneSettings::Jsonize() const
{
  JsonValue payload;

  if(m_serviceAccessRoleArnHasBeenSet)
  {
   payload.WithString("ServiceAccessRoleArn", m_serviceAccessRoleArn);

  }

  if(m_s3BucketNameHasBeenSet)
  {
   payload.WithString("S3BucketName", m_s3BucketName);

  }

  if(m_s3BucketFolderHasBeenSet)
  {
   payload.WithString("S3BucketFolder", m_s3BucketFolder);

  }

  if(m_errorRetryDurationHasBeenSet)
  {
   payload.WithInteger("ErrorRetryDuration", m_errorRetryDuration);

  }

  if(m_maxFileSizeHasBeenSet)
  {
   payload.WithInteger("MaxFileSize", m_maxFileSize);

  }

  if(m_maxRetryCountHasBeenSet)
  {
   payload.WithInteger("MaxRetryCount", m_maxRetryCount);

  }

  if(m_iamAuthEnabledHasBeenSet)
  {
   payload.WithBool("IamAuthEnabled", m_iamAuthEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
