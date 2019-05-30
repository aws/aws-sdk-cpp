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
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTEvents
{
namespace Model
{
  enum class InputStatus
  {
    NOT_SET,
    CREATING,
    UPDATING,
    ACTIVE,
    DELETING
  };

namespace InputStatusMapper
{
AWS_IOTEVENTS_API InputStatus GetInputStatusForName(const Aws::String& name);

AWS_IOTEVENTS_API Aws::String GetNameForInputStatus(InputStatus value);
} // namespace InputStatusMapper
} // namespace Model
} // namespace IoTEvents
} // namespace Aws
