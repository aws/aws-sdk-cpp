/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

        static const int attaching_HASH = HashingUtils::HashString("attaching");
        static const int attached_HASH = HashingUtils::HashString("attached");
        static const int detaching_HASH = HashingUtils::HashString("detaching");
        static const int detached_HASH = HashingUtils::HashString("detached");


        AttachmentStatus GetAttachmentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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

            return "";
          }
        }

      } // namespace AttachmentStatusMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
