/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/ArchiveState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MailManager
  {
    namespace Model
    {
      namespace ArchiveStateMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int PENDING_DELETION_HASH = HashingUtils::HashString("PENDING_DELETION");


        ArchiveState GetArchiveStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ArchiveState::ACTIVE;
          }
          else if (hashCode == PENDING_DELETION_HASH)
          {
            return ArchiveState::PENDING_DELETION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ArchiveState>(hashCode);
          }

          return ArchiveState::NOT_SET;
        }

        Aws::String GetNameForArchiveState(ArchiveState enumValue)
        {
          switch(enumValue)
          {
          case ArchiveState::NOT_SET:
            return {};
          case ArchiveState::ACTIVE:
            return "ACTIVE";
          case ArchiveState::PENDING_DELETION:
            return "PENDING_DELETION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ArchiveStateMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
