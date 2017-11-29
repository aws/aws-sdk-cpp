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
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glacier
{
namespace Model
{
  enum class FileHeaderInfo
  {
    NOT_SET,
    USE,
    IGNORE,
    NONE
  };

namespace FileHeaderInfoMapper
{
AWS_GLACIER_API FileHeaderInfo GetFileHeaderInfoForName(const Aws::String& name);

AWS_GLACIER_API Aws::String GetNameForFileHeaderInfo(FileHeaderInfo value);
} // namespace FileHeaderInfoMapper
} // namespace Model
} // namespace Glacier
} // namespace Aws
