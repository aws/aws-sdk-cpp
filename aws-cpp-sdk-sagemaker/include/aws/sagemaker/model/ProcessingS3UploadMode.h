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

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class ProcessingS3UploadMode
  {
    NOT_SET,
    Continuous,
    EndOfJob
  };

namespace ProcessingS3UploadModeMapper
{
AWS_SAGEMAKER_API ProcessingS3UploadMode GetProcessingS3UploadModeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForProcessingS3UploadMode(ProcessingS3UploadMode value);
} // namespace ProcessingS3UploadModeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
