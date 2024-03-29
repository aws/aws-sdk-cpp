﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/BGPPeerState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectConnect
  {
    namespace Model
    {
      namespace BGPPeerStateMapper
      {

        static const int verifying_HASH = HashingUtils::HashString("verifying");
        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int available_HASH = HashingUtils::HashString("available");
        static const int deleting_HASH = HashingUtils::HashString("deleting");
        static const int deleted_HASH = HashingUtils::HashString("deleted");


        BGPPeerState GetBGPPeerStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == verifying_HASH)
          {
            return BGPPeerState::verifying;
          }
          else if (hashCode == pending_HASH)
          {
            return BGPPeerState::pending;
          }
          else if (hashCode == available_HASH)
          {
            return BGPPeerState::available;
          }
          else if (hashCode == deleting_HASH)
          {
            return BGPPeerState::deleting;
          }
          else if (hashCode == deleted_HASH)
          {
            return BGPPeerState::deleted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BGPPeerState>(hashCode);
          }

          return BGPPeerState::NOT_SET;
        }

        Aws::String GetNameForBGPPeerState(BGPPeerState enumValue)
        {
          switch(enumValue)
          {
          case BGPPeerState::NOT_SET:
            return {};
          case BGPPeerState::verifying:
            return "verifying";
          case BGPPeerState::pending:
            return "pending";
          case BGPPeerState::available:
            return "available";
          case BGPPeerState::deleting:
            return "deleting";
          case BGPPeerState::deleted:
            return "deleted";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BGPPeerStateMapper
    } // namespace Model
  } // namespace DirectConnect
} // namespace Aws
