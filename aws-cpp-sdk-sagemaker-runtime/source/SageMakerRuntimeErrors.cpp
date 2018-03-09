﻿/*
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

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker-runtime/SageMakerRuntimeErrors.h>

using namespace Aws::Client;
using namespace Aws::SageMakerRuntime;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMakerRuntime
{
namespace SageMakerRuntimeErrorMapper
{

static const int MODEL_HASH = HashingUtils::HashString("ModelError");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == MODEL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SageMakerRuntimeErrors::MODEL), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SageMakerRuntimeErrorMapper
} // namespace SageMakerRuntime
} // namespace Aws
