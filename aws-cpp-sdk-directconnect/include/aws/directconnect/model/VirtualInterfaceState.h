﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{
  enum class VirtualInterfaceState
  {
    NOT_SET,
    confirming,
    verifying,
    pending,
    available,
    down,
    deleting,
    deleted,
    rejected
  };

namespace VirtualInterfaceStateMapper
{
AWS_DIRECTCONNECT_API VirtualInterfaceState GetVirtualInterfaceStateForName(const Aws::String& name);

AWS_DIRECTCONNECT_API Aws::String GetNameForVirtualInterfaceState(VirtualInterfaceState value);
} // namespace VirtualInterfaceStateMapper
} // namespace Model
} // namespace DirectConnect
} // namespace Aws
