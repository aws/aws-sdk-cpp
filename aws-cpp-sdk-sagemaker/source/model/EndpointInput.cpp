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

#include <aws/sagemaker/model/EndpointInput.h>
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

EndpointInput::EndpointInput() : 
    m_endpointNameHasBeenSet(false),
    m_localPathHasBeenSet(false),
    m_s3InputMode(ProcessingS3InputMode::NOT_SET),
    m_s3InputModeHasBeenSet(false),
    m_s3DataDistributionType(ProcessingS3DataDistributionType::NOT_SET),
    m_s3DataDistributionTypeHasBeenSet(false)
{
}

EndpointInput::EndpointInput(JsonView jsonValue) : 
    m_endpointNameHasBeenSet(false),
    m_localPathHasBeenSet(false),
    m_s3InputMode(ProcessingS3InputMode::NOT_SET),
    m_s3InputModeHasBeenSet(false),
    m_s3DataDistributionType(ProcessingS3DataDistributionType::NOT_SET),
    m_s3DataDistributionTypeHasBeenSet(false)
{
  *this = jsonValue;
}

EndpointInput& EndpointInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EndpointName"))
  {
    m_endpointName = jsonValue.GetString("EndpointName");

    m_endpointNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LocalPath"))
  {
    m_localPath = jsonValue.GetString("LocalPath");

    m_localPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3InputMode"))
  {
    m_s3InputMode = ProcessingS3InputModeMapper::GetProcessingS3InputModeForName(jsonValue.GetString("S3InputMode"));

    m_s3InputModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3DataDistributionType"))
  {
    m_s3DataDistributionType = ProcessingS3DataDistributionTypeMapper::GetProcessingS3DataDistributionTypeForName(jsonValue.GetString("S3DataDistributionType"));

    m_s3DataDistributionTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue EndpointInput::Jsonize() const
{
  JsonValue payload;

  if(m_endpointNameHasBeenSet)
  {
   payload.WithString("EndpointName", m_endpointName);

  }

  if(m_localPathHasBeenSet)
  {
   payload.WithString("LocalPath", m_localPath);

  }

  if(m_s3InputModeHasBeenSet)
  {
   payload.WithString("S3InputMode", ProcessingS3InputModeMapper::GetNameForProcessingS3InputMode(m_s3InputMode));
  }

  if(m_s3DataDistributionTypeHasBeenSet)
  {
   payload.WithString("S3DataDistributionType", ProcessingS3DataDistributionTypeMapper::GetNameForProcessingS3DataDistributionType(m_s3DataDistributionType));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
