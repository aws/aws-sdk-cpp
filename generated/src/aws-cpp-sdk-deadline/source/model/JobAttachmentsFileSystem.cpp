/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/JobAttachmentsFileSystem.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace deadline
  {
    namespace Model
    {
      namespace JobAttachmentsFileSystemMapper
      {

        static const int COPIED_HASH = HashingUtils::HashString("COPIED");
        static const int VIRTUAL_HASH = HashingUtils::HashString("VIRTUAL");


        JobAttachmentsFileSystem GetJobAttachmentsFileSystemForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COPIED_HASH)
          {
            return JobAttachmentsFileSystem::COPIED;
          }
          else if (hashCode == VIRTUAL_HASH)
          {
            return JobAttachmentsFileSystem::VIRTUAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobAttachmentsFileSystem>(hashCode);
          }

          return JobAttachmentsFileSystem::NOT_SET;
        }

        Aws::String GetNameForJobAttachmentsFileSystem(JobAttachmentsFileSystem enumValue)
        {
          switch(enumValue)
          {
          case JobAttachmentsFileSystem::NOT_SET:
            return {};
          case JobAttachmentsFileSystem::COPIED:
            return "COPIED";
          case JobAttachmentsFileSystem::VIRTUAL:
            return "VIRTUAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobAttachmentsFileSystemMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
