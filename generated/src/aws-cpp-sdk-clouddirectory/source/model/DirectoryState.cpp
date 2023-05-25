/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/DirectoryState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudDirectory
  {
    namespace Model
    {
      namespace DirectoryStateMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        DirectoryState GetDirectoryStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return DirectoryState::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return DirectoryState::DISABLED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return DirectoryState::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DirectoryState>(hashCode);
          }

          return DirectoryState::NOT_SET;
        }

        Aws::String GetNameForDirectoryState(DirectoryState enumValue)
        {
          switch(enumValue)
          {
          case DirectoryState::ENABLED:
            return "ENABLED";
          case DirectoryState::DISABLED:
            return "DISABLED";
          case DirectoryState::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DirectoryStateMapper
    } // namespace Model
  } // namespace CloudDirectory
} // namespace Aws
