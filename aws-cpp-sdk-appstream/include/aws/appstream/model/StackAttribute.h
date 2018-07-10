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
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppStream
{
namespace Model
{
  enum class StackAttribute
  {
    NOT_SET,
    STORAGE_CONNECTORS,
    STORAGE_CONNECTOR_HOMEFOLDERS,
    STORAGE_CONNECTOR_GOOGLE_DRIVE,
    STORAGE_CONNECTOR_ONE_DRIVE,
    REDIRECT_URL,
    FEEDBACK_URL,
    THEME_NAME,
    USER_SETTINGS
  };

namespace StackAttributeMapper
{
AWS_APPSTREAM_API StackAttribute GetStackAttributeForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForStackAttribute(StackAttribute value);
} // namespace StackAttributeMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
