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
  enum class ResourceType
  {
    NOT_SET,
    AWS_IAM_Role,
    AWS_KMS_Key,
    AWS_Lambda_Function,
    AWS_Lambda_LayerVersion,
    AWS_S3_Bucket,
    AWS_SQS_Queue
  };

namespace ResourceTypeMapper
{
AWS_ACCESSANALYZER_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_ACCESSANALYZER_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
