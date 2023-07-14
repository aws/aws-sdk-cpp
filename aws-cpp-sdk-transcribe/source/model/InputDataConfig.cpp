/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/InputDataConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

InputDataConfig::InputDataConfig() : 
    m_s3UriHasBeenSet(false),
    m_tuningDataS3UriHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false)
{
}

InputDataConfig::InputDataConfig(JsonView jsonValue) : 
    m_s3UriHasBeenSet(false),
    m_tuningDataS3UriHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

InputDataConfig& InputDataConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Uri"))
  {
    m_s3Uri = jsonValue.GetString("S3Uri");

    m_s3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TuningDataS3Uri"))
  {
    m_tuningDataS3Uri = jsonValue.GetString("TuningDataS3Uri");

    m_tuningDataS3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataAccessRoleArn"))
  {
    m_dataAccessRoleArn = jsonValue.GetString("DataAccessRoleArn");

    m_dataAccessRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue InputDataConfig::Jsonize() const
{
  JsonValue payload;

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("S3Uri", m_s3Uri);

  }

  if(m_tuningDataS3UriHasBeenSet)
  {
   payload.WithString("TuningDataS3Uri", m_tuningDataS3Uri);

  }

  if(m_dataAccessRoleArnHasBeenSet)
  {
   payload.WithString("DataAccessRoleArn", m_dataAccessRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
