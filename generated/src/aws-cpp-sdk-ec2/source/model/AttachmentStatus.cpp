/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AttachmentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace AttachmentStatusMapper
      {

        static constexpr uint32_t attaching_HASH = ConstExprHashingUtils::HashString("attaching");
        static constexpr uint32_t attached_HASH = ConstExprHashingUtils::HashString("attached");
        static constexpr uint32_t detaching_HASH = ConstExprHashingUtils::HashString("detaching");
        static constexpr uint32_t detached_HASH = ConstExprHashingUtils::HashString("detached");


        AttachmentStatus GetAttachmentStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == attaching_HASH)
          {
            return AttachmentStatus::attaching;
          }
          else if (hashCode == attached_HASH)
          {
            return AttachmentStatus::attached;
          }
          else if (hashCode == detaching_HASH)
          {
            return AttachmentStatus::detaching;
          }
          else if (hashCode == detached_HASH)
          {
            return AttachmentStatus::detached;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AttachmentStatus>(hashCode);
          }

          return AttachmentStatus::NOT_SET;
        }

        Aws::String GetNameForAttachmentStatus(AttachmentStatus enumValue)
        {
          switch(enumValue)
          {
          case AttachmentStatus::NOT_SET:
            return {};
          case AttachmentStatus::attaching:
            return "attaching";
          case AttachmentStatus::attached:
            return "attached";
          case AttachmentStatus::detaching:
            return "detaching";
          case AttachmentStatus::detached:
            return "detached";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AttachmentStatusMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
