/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker-runtime/SageMakerRuntimeErrors.h>
#include <aws/sagemaker-runtime/model/ModelError.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::SageMakerRuntime;
using namespace Aws::SageMakerRuntime::Model;

namespace Aws
{
namespace SageMakerRuntime
{
template<> AWS_SAGEMAKERRUNTIME_API ModelError SageMakerRuntimeError::GetModeledError()
{
  assert(this->GetErrorType() == SageMakerRuntimeErrors::MODEL);
  return ModelError(this->GetJsonPayload().View());
}

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
