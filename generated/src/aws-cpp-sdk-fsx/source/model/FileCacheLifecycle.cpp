/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/FileCacheLifecycle.h>
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
      namespace FileCacheLifecycleMapper
      {

        static constexpr uint32_t AVAILABLE_HASH = ConstExprHashingUtils::HashString("AVAILABLE");
        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        FileCacheLifecycle GetFileCacheLifecycleForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return FileCacheLifecycle::AVAILABLE;
          }
          else if (hashCode == CREATING_HASH)
          {
            return FileCacheLifecycle::CREATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return FileCacheLifecycle::DELETING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return FileCacheLifecycle::UPDATING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return FileCacheLifecycle::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FileCacheLifecycle>(hashCode);
          }

          return FileCacheLifecycle::NOT_SET;
        }

        Aws::String GetNameForFileCacheLifecycle(FileCacheLifecycle enumValue)
        {
          switch(enumValue)
          {
          case FileCacheLifecycle::NOT_SET:
            return {};
          case FileCacheLifecycle::AVAILABLE:
            return "AVAILABLE";
          case FileCacheLifecycle::CREATING:
            return "CREATING";
          case FileCacheLifecycle::DELETING:
            return "DELETING";
          case FileCacheLifecycle::UPDATING:
            return "UPDATING";
          case FileCacheLifecycle::FAILED:
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

      } // namespace FileCacheLifecycleMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
