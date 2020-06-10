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
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeArtifact
{
namespace Model
{
  enum class PackageFormat
  {
    NOT_SET,
    npm,
    pypi,
    maven
  };

namespace PackageFormatMapper
{
AWS_CODEARTIFACT_API PackageFormat GetPackageFormatForName(const Aws::String& name);

AWS_CODEARTIFACT_API Aws::String GetNameForPackageFormat(PackageFormat value);
} // namespace PackageFormatMapper
} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
