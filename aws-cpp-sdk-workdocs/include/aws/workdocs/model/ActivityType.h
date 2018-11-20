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
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkDocs
{
namespace Model
{
  enum class ActivityType
  {
    NOT_SET,
    DOCUMENT_CHECKED_IN,
    DOCUMENT_CHECKED_OUT,
    DOCUMENT_RENAMED,
    DOCUMENT_VERSION_UPLOADED,
    DOCUMENT_VERSION_DELETED,
    DOCUMENT_VERSION_VIEWED,
    DOCUMENT_VERSION_DOWNLOADED,
    DOCUMENT_RECYCLED,
    DOCUMENT_RESTORED,
    DOCUMENT_REVERTED,
    DOCUMENT_SHARED,
    DOCUMENT_UNSHARED,
    DOCUMENT_SHARE_PERMISSION_CHANGED,
    DOCUMENT_SHAREABLE_LINK_CREATED,
    DOCUMENT_SHAREABLE_LINK_REMOVED,
    DOCUMENT_SHAREABLE_LINK_PERMISSION_CHANGED,
    DOCUMENT_MOVED,
    DOCUMENT_COMMENT_ADDED,
    DOCUMENT_COMMENT_DELETED,
    DOCUMENT_ANNOTATION_ADDED,
    DOCUMENT_ANNOTATION_DELETED,
    FOLDER_CREATED,
    FOLDER_DELETED,
    FOLDER_RENAMED,
    FOLDER_RECYCLED,
    FOLDER_RESTORED,
    FOLDER_SHARED,
    FOLDER_UNSHARED,
    FOLDER_SHARE_PERMISSION_CHANGED,
    FOLDER_SHAREABLE_LINK_CREATED,
    FOLDER_SHAREABLE_LINK_REMOVED,
    FOLDER_SHAREABLE_LINK_PERMISSION_CHANGED,
    FOLDER_MOVED
  };

namespace ActivityTypeMapper
{
AWS_WORKDOCS_API ActivityType GetActivityTypeForName(const Aws::String& name);

AWS_WORKDOCS_API Aws::String GetNameForActivityType(ActivityType value);
} // namespace ActivityTypeMapper
} // namespace Model
} // namespace WorkDocs
} // namespace Aws
