/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    USER_SETTINGS,
    EMBED_HOST_DOMAINS,
    IAM_ROLE_ARN,
    ACCESS_ENDPOINTS
  };

namespace StackAttributeMapper
{
AWS_APPSTREAM_API StackAttribute GetStackAttributeForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForStackAttribute(StackAttribute value);
} // namespace StackAttributeMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
