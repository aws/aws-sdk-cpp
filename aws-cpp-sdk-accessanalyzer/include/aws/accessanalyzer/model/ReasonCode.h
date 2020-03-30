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
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{
  enum class ReasonCode
  {
    NOT_SET,
    AWS_SERVICE_ACCESS_DISABLED,
    DELEGATED_ADMINISTRATOR_DEREGISTERED,
    ORGANIZATION_DELETED,
    SERVICE_LINKED_ROLE_CREATION_FAILED
  };

namespace ReasonCodeMapper
{
AWS_ACCESSANALYZER_API ReasonCode GetReasonCodeForName(const Aws::String& name);

AWS_ACCESSANALYZER_API Aws::String GetNameForReasonCode(ReasonCode value);
} // namespace ReasonCodeMapper
} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
