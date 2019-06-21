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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IAM
{
namespace Model
{
  enum class SortKeyType
  {
    NOT_SET,
    SERVICE_NAMESPACE_ASCENDING,
    SERVICE_NAMESPACE_DESCENDING,
    LAST_AUTHENTICATED_TIME_ASCENDING,
    LAST_AUTHENTICATED_TIME_DESCENDING
  };

namespace SortKeyTypeMapper
{
AWS_IAM_API SortKeyType GetSortKeyTypeForName(const Aws::String& name);

AWS_IAM_API Aws::String GetNameForSortKeyType(SortKeyType value);
} // namespace SortKeyTypeMapper
} // namespace Model
} // namespace IAM
} // namespace Aws
