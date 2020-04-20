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
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Synthetics
{
namespace Model
{
  enum class CanaryState
  {
    NOT_SET,
    CREATING,
    READY,
    STARTING,
    RUNNING,
    UPDATING,
    STOPPING,
    STOPPED,
    ERROR_,
    DELETING
  };

namespace CanaryStateMapper
{
AWS_SYNTHETICS_API CanaryState GetCanaryStateForName(const Aws::String& name);

AWS_SYNTHETICS_API Aws::String GetNameForCanaryState(CanaryState value);
} // namespace CanaryStateMapper
} // namespace Model
} // namespace Synthetics
} // namespace Aws
