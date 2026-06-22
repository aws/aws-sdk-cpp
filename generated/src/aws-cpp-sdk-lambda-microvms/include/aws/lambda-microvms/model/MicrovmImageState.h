/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>

namespace Aws {
namespace LambdaMicrovms {
namespace Model {
enum class MicrovmImageState {
  NOT_SET,
  CREATING,
  CREATED,
  CREATE_FAILED,
  UPDATING,
  UPDATED,
  UPDATE_FAILED,
  DELETING,
  DELETE_FAILED,
  DELETED
};

namespace MicrovmImageStateMapper {
AWS_LAMBDAMICROVMS_API MicrovmImageState GetMicrovmImageStateForName(const Aws::String& name);

AWS_LAMBDAMICROVMS_API Aws::String GetNameForMicrovmImageState(MicrovmImageState value);
}  // namespace MicrovmImageStateMapper
}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
