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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class TransformStatusType
  {
    NOT_SET,
    NOT_READY,
    READY,
    DELETING
  };

namespace TransformStatusTypeMapper
{
AWS_GLUE_API TransformStatusType GetTransformStatusTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForTransformStatusType(TransformStatusType value);
} // namespace TransformStatusTypeMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
