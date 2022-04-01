/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/LinkState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkManager
  {
    namespace Model
    {
      namespace LinkStateMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");


        LinkState GetLinkStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return LinkState::PENDING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return LinkState::AVAILABLE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return LinkState::DELETING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return LinkState::UPDATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LinkState>(hashCode);
          }

          return LinkState::NOT_SET;
        }

        Aws::String GetNameForLinkState(LinkState enumValue)
        {
          switch(enumValue)
          {
          case LinkState::PENDING:
            return "PENDING";
          case LinkState::AVAILABLE:
            return "AVAILABLE";
          case LinkState::DELETING:
            return "DELETING";
          case LinkState::UPDATING:
            return "UPDATING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LinkStateMapper
    } // namespace Model
  } // namespace NetworkManager
} // namespace Aws
