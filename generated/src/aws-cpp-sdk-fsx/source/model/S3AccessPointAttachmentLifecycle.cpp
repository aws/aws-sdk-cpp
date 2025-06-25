/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/S3AccessPointAttachmentLifecycle.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace S3AccessPointAttachmentLifecycleMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        S3AccessPointAttachmentLifecycle GetS3AccessPointAttachmentLifecycleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return S3AccessPointAttachmentLifecycle::AVAILABLE;
          }
          else if (hashCode == CREATING_HASH)
          {
            return S3AccessPointAttachmentLifecycle::CREATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return S3AccessPointAttachmentLifecycle::DELETING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return S3AccessPointAttachmentLifecycle::UPDATING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return S3AccessPointAttachmentLifecycle::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3AccessPointAttachmentLifecycle>(hashCode);
          }

          return S3AccessPointAttachmentLifecycle::NOT_SET;
        }

        Aws::String GetNameForS3AccessPointAttachmentLifecycle(S3AccessPointAttachmentLifecycle enumValue)
        {
          switch(enumValue)
          {
          case S3AccessPointAttachmentLifecycle::NOT_SET:
            return {};
          case S3AccessPointAttachmentLifecycle::AVAILABLE:
            return "AVAILABLE";
          case S3AccessPointAttachmentLifecycle::CREATING:
            return "CREATING";
          case S3AccessPointAttachmentLifecycle::DELETING:
            return "DELETING";
          case S3AccessPointAttachmentLifecycle::UPDATING:
            return "UPDATING";
          case S3AccessPointAttachmentLifecycle::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace S3AccessPointAttachmentLifecycleMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
