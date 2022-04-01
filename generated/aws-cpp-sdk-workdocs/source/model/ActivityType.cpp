/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/ActivityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkDocs
  {
    namespace Model
    {
      namespace ActivityTypeMapper
      {

        static const int DOCUMENT_CHECKED_IN_HASH = HashingUtils::HashString("DOCUMENT_CHECKED_IN");
        static const int DOCUMENT_CHECKED_OUT_HASH = HashingUtils::HashString("DOCUMENT_CHECKED_OUT");
        static const int DOCUMENT_RENAMED_HASH = HashingUtils::HashString("DOCUMENT_RENAMED");
        static const int DOCUMENT_VERSION_UPLOADED_HASH = HashingUtils::HashString("DOCUMENT_VERSION_UPLOADED");
        static const int DOCUMENT_VERSION_DELETED_HASH = HashingUtils::HashString("DOCUMENT_VERSION_DELETED");
        static const int DOCUMENT_VERSION_VIEWED_HASH = HashingUtils::HashString("DOCUMENT_VERSION_VIEWED");
        static const int DOCUMENT_VERSION_DOWNLOADED_HASH = HashingUtils::HashString("DOCUMENT_VERSION_DOWNLOADED");
        static const int DOCUMENT_RECYCLED_HASH = HashingUtils::HashString("DOCUMENT_RECYCLED");
        static const int DOCUMENT_RESTORED_HASH = HashingUtils::HashString("DOCUMENT_RESTORED");
        static const int DOCUMENT_REVERTED_HASH = HashingUtils::HashString("DOCUMENT_REVERTED");
        static const int DOCUMENT_SHARED_HASH = HashingUtils::HashString("DOCUMENT_SHARED");
        static const int DOCUMENT_UNSHARED_HASH = HashingUtils::HashString("DOCUMENT_UNSHARED");
        static const int DOCUMENT_SHARE_PERMISSION_CHANGED_HASH = HashingUtils::HashString("DOCUMENT_SHARE_PERMISSION_CHANGED");
        static const int DOCUMENT_SHAREABLE_LINK_CREATED_HASH = HashingUtils::HashString("DOCUMENT_SHAREABLE_LINK_CREATED");
        static const int DOCUMENT_SHAREABLE_LINK_REMOVED_HASH = HashingUtils::HashString("DOCUMENT_SHAREABLE_LINK_REMOVED");
        static const int DOCUMENT_SHAREABLE_LINK_PERMISSION_CHANGED_HASH = HashingUtils::HashString("DOCUMENT_SHAREABLE_LINK_PERMISSION_CHANGED");
        static const int DOCUMENT_MOVED_HASH = HashingUtils::HashString("DOCUMENT_MOVED");
        static const int DOCUMENT_COMMENT_ADDED_HASH = HashingUtils::HashString("DOCUMENT_COMMENT_ADDED");
        static const int DOCUMENT_COMMENT_DELETED_HASH = HashingUtils::HashString("DOCUMENT_COMMENT_DELETED");
        static const int DOCUMENT_ANNOTATION_ADDED_HASH = HashingUtils::HashString("DOCUMENT_ANNOTATION_ADDED");
        static const int DOCUMENT_ANNOTATION_DELETED_HASH = HashingUtils::HashString("DOCUMENT_ANNOTATION_DELETED");
        static const int FOLDER_CREATED_HASH = HashingUtils::HashString("FOLDER_CREATED");
        static const int FOLDER_DELETED_HASH = HashingUtils::HashString("FOLDER_DELETED");
        static const int FOLDER_RENAMED_HASH = HashingUtils::HashString("FOLDER_RENAMED");
        static const int FOLDER_RECYCLED_HASH = HashingUtils::HashString("FOLDER_RECYCLED");
        static const int FOLDER_RESTORED_HASH = HashingUtils::HashString("FOLDER_RESTORED");
        static const int FOLDER_SHARED_HASH = HashingUtils::HashString("FOLDER_SHARED");
        static const int FOLDER_UNSHARED_HASH = HashingUtils::HashString("FOLDER_UNSHARED");
        static const int FOLDER_SHARE_PERMISSION_CHANGED_HASH = HashingUtils::HashString("FOLDER_SHARE_PERMISSION_CHANGED");
        static const int FOLDER_SHAREABLE_LINK_CREATED_HASH = HashingUtils::HashString("FOLDER_SHAREABLE_LINK_CREATED");
        static const int FOLDER_SHAREABLE_LINK_REMOVED_HASH = HashingUtils::HashString("FOLDER_SHAREABLE_LINK_REMOVED");
        static const int FOLDER_SHAREABLE_LINK_PERMISSION_CHANGED_HASH = HashingUtils::HashString("FOLDER_SHAREABLE_LINK_PERMISSION_CHANGED");
        static const int FOLDER_MOVED_HASH = HashingUtils::HashString("FOLDER_MOVED");


        ActivityType GetActivityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DOCUMENT_CHECKED_IN_HASH)
          {
            return ActivityType::DOCUMENT_CHECKED_IN;
          }
          else if (hashCode == DOCUMENT_CHECKED_OUT_HASH)
          {
            return ActivityType::DOCUMENT_CHECKED_OUT;
          }
          else if (hashCode == DOCUMENT_RENAMED_HASH)
          {
            return ActivityType::DOCUMENT_RENAMED;
          }
          else if (hashCode == DOCUMENT_VERSION_UPLOADED_HASH)
          {
            return ActivityType::DOCUMENT_VERSION_UPLOADED;
          }
          else if (hashCode == DOCUMENT_VERSION_DELETED_HASH)
          {
            return ActivityType::DOCUMENT_VERSION_DELETED;
          }
          else if (hashCode == DOCUMENT_VERSION_VIEWED_HASH)
          {
            return ActivityType::DOCUMENT_VERSION_VIEWED;
          }
          else if (hashCode == DOCUMENT_VERSION_DOWNLOADED_HASH)
          {
            return ActivityType::DOCUMENT_VERSION_DOWNLOADED;
          }
          else if (hashCode == DOCUMENT_RECYCLED_HASH)
          {
            return ActivityType::DOCUMENT_RECYCLED;
          }
          else if (hashCode == DOCUMENT_RESTORED_HASH)
          {
            return ActivityType::DOCUMENT_RESTORED;
          }
          else if (hashCode == DOCUMENT_REVERTED_HASH)
          {
            return ActivityType::DOCUMENT_REVERTED;
          }
          else if (hashCode == DOCUMENT_SHARED_HASH)
          {
            return ActivityType::DOCUMENT_SHARED;
          }
          else if (hashCode == DOCUMENT_UNSHARED_HASH)
          {
            return ActivityType::DOCUMENT_UNSHARED;
          }
          else if (hashCode == DOCUMENT_SHARE_PERMISSION_CHANGED_HASH)
          {
            return ActivityType::DOCUMENT_SHARE_PERMISSION_CHANGED;
          }
          else if (hashCode == DOCUMENT_SHAREABLE_LINK_CREATED_HASH)
          {
            return ActivityType::DOCUMENT_SHAREABLE_LINK_CREATED;
          }
          else if (hashCode == DOCUMENT_SHAREABLE_LINK_REMOVED_HASH)
          {
            return ActivityType::DOCUMENT_SHAREABLE_LINK_REMOVED;
          }
          else if (hashCode == DOCUMENT_SHAREABLE_LINK_PERMISSION_CHANGED_HASH)
          {
            return ActivityType::DOCUMENT_SHAREABLE_LINK_PERMISSION_CHANGED;
          }
          else if (hashCode == DOCUMENT_MOVED_HASH)
          {
            return ActivityType::DOCUMENT_MOVED;
          }
          else if (hashCode == DOCUMENT_COMMENT_ADDED_HASH)
          {
            return ActivityType::DOCUMENT_COMMENT_ADDED;
          }
          else if (hashCode == DOCUMENT_COMMENT_DELETED_HASH)
          {
            return ActivityType::DOCUMENT_COMMENT_DELETED;
          }
          else if (hashCode == DOCUMENT_ANNOTATION_ADDED_HASH)
          {
            return ActivityType::DOCUMENT_ANNOTATION_ADDED;
          }
          else if (hashCode == DOCUMENT_ANNOTATION_DELETED_HASH)
          {
            return ActivityType::DOCUMENT_ANNOTATION_DELETED;
          }
          else if (hashCode == FOLDER_CREATED_HASH)
          {
            return ActivityType::FOLDER_CREATED;
          }
          else if (hashCode == FOLDER_DELETED_HASH)
          {
            return ActivityType::FOLDER_DELETED;
          }
          else if (hashCode == FOLDER_RENAMED_HASH)
          {
            return ActivityType::FOLDER_RENAMED;
          }
          else if (hashCode == FOLDER_RECYCLED_HASH)
          {
            return ActivityType::FOLDER_RECYCLED;
          }
          else if (hashCode == FOLDER_RESTORED_HASH)
          {
            return ActivityType::FOLDER_RESTORED;
          }
          else if (hashCode == FOLDER_SHARED_HASH)
          {
            return ActivityType::FOLDER_SHARED;
          }
          else if (hashCode == FOLDER_UNSHARED_HASH)
          {
            return ActivityType::FOLDER_UNSHARED;
          }
          else if (hashCode == FOLDER_SHARE_PERMISSION_CHANGED_HASH)
          {
            return ActivityType::FOLDER_SHARE_PERMISSION_CHANGED;
          }
          else if (hashCode == FOLDER_SHAREABLE_LINK_CREATED_HASH)
          {
            return ActivityType::FOLDER_SHAREABLE_LINK_CREATED;
          }
          else if (hashCode == FOLDER_SHAREABLE_LINK_REMOVED_HASH)
          {
            return ActivityType::FOLDER_SHAREABLE_LINK_REMOVED;
          }
          else if (hashCode == FOLDER_SHAREABLE_LINK_PERMISSION_CHANGED_HASH)
          {
            return ActivityType::FOLDER_SHAREABLE_LINK_PERMISSION_CHANGED;
          }
          else if (hashCode == FOLDER_MOVED_HASH)
          {
            return ActivityType::FOLDER_MOVED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActivityType>(hashCode);
          }

          return ActivityType::NOT_SET;
        }

        Aws::String GetNameForActivityType(ActivityType enumValue)
        {
          switch(enumValue)
          {
          case ActivityType::DOCUMENT_CHECKED_IN:
            return "DOCUMENT_CHECKED_IN";
          case ActivityType::DOCUMENT_CHECKED_OUT:
            return "DOCUMENT_CHECKED_OUT";
          case ActivityType::DOCUMENT_RENAMED:
            return "DOCUMENT_RENAMED";
          case ActivityType::DOCUMENT_VERSION_UPLOADED:
            return "DOCUMENT_VERSION_UPLOADED";
          case ActivityType::DOCUMENT_VERSION_DELETED:
            return "DOCUMENT_VERSION_DELETED";
          case ActivityType::DOCUMENT_VERSION_VIEWED:
            return "DOCUMENT_VERSION_VIEWED";
          case ActivityType::DOCUMENT_VERSION_DOWNLOADED:
            return "DOCUMENT_VERSION_DOWNLOADED";
          case ActivityType::DOCUMENT_RECYCLED:
            return "DOCUMENT_RECYCLED";
          case ActivityType::DOCUMENT_RESTORED:
            return "DOCUMENT_RESTORED";
          case ActivityType::DOCUMENT_REVERTED:
            return "DOCUMENT_REVERTED";
          case ActivityType::DOCUMENT_SHARED:
            return "DOCUMENT_SHARED";
          case ActivityType::DOCUMENT_UNSHARED:
            return "DOCUMENT_UNSHARED";
          case ActivityType::DOCUMENT_SHARE_PERMISSION_CHANGED:
            return "DOCUMENT_SHARE_PERMISSION_CHANGED";
          case ActivityType::DOCUMENT_SHAREABLE_LINK_CREATED:
            return "DOCUMENT_SHAREABLE_LINK_CREATED";
          case ActivityType::DOCUMENT_SHAREABLE_LINK_REMOVED:
            return "DOCUMENT_SHAREABLE_LINK_REMOVED";
          case ActivityType::DOCUMENT_SHAREABLE_LINK_PERMISSION_CHANGED:
            return "DOCUMENT_SHAREABLE_LINK_PERMISSION_CHANGED";
          case ActivityType::DOCUMENT_MOVED:
            return "DOCUMENT_MOVED";
          case ActivityType::DOCUMENT_COMMENT_ADDED:
            return "DOCUMENT_COMMENT_ADDED";
          case ActivityType::DOCUMENT_COMMENT_DELETED:
            return "DOCUMENT_COMMENT_DELETED";
          case ActivityType::DOCUMENT_ANNOTATION_ADDED:
            return "DOCUMENT_ANNOTATION_ADDED";
          case ActivityType::DOCUMENT_ANNOTATION_DELETED:
            return "DOCUMENT_ANNOTATION_DELETED";
          case ActivityType::FOLDER_CREATED:
            return "FOLDER_CREATED";
          case ActivityType::FOLDER_DELETED:
            return "FOLDER_DELETED";
          case ActivityType::FOLDER_RENAMED:
            return "FOLDER_RENAMED";
          case ActivityType::FOLDER_RECYCLED:
            return "FOLDER_RECYCLED";
          case ActivityType::FOLDER_RESTORED:
            return "FOLDER_RESTORED";
          case ActivityType::FOLDER_SHARED:
            return "FOLDER_SHARED";
          case ActivityType::FOLDER_UNSHARED:
            return "FOLDER_UNSHARED";
          case ActivityType::FOLDER_SHARE_PERMISSION_CHANGED:
            return "FOLDER_SHARE_PERMISSION_CHANGED";
          case ActivityType::FOLDER_SHAREABLE_LINK_CREATED:
            return "FOLDER_SHAREABLE_LINK_CREATED";
          case ActivityType::FOLDER_SHAREABLE_LINK_REMOVED:
            return "FOLDER_SHAREABLE_LINK_REMOVED";
          case ActivityType::FOLDER_SHAREABLE_LINK_PERMISSION_CHANGED:
            return "FOLDER_SHAREABLE_LINK_PERMISSION_CHANGED";
          case ActivityType::FOLDER_MOVED:
            return "FOLDER_MOVED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActivityTypeMapper
    } // namespace Model
  } // namespace WorkDocs
} // namespace Aws
