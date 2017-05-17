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
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SES
{
namespace Model
{
  enum class DsnAction
  {
    NOT_SET,
    failed,
    delayed,
    delivered,
    relayed,
    expanded
  };

namespace DsnActionMapper
{
AWS_SES_API DsnAction GetDsnActionForName(const Aws::String& name);

AWS_SES_API Aws::String GetNameForDsnAction(DsnAction value);
} // namespace DsnActionMapper
} // namespace Model
} // namespace SES
} // namespace Aws
