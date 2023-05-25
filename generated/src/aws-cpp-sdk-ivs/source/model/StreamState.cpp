/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/StreamState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IVS
  {
    namespace Model
    {
      namespace StreamStateMapper
      {

        static const int LIVE_HASH = HashingUtils::HashString("LIVE");
        static const int OFFLINE_HASH = HashingUtils::HashString("OFFLINE");


        StreamState GetStreamStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LIVE_HASH)
          {
            return StreamState::LIVE;
          }
          else if (hashCode == OFFLINE_HASH)
          {
            return StreamState::OFFLINE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StreamState>(hashCode);
          }

          return StreamState::NOT_SET;
        }

        Aws::String GetNameForStreamState(StreamState enumValue)
        {
          switch(enumValue)
          {
          case StreamState::LIVE:
            return "LIVE";
          case StreamState::OFFLINE:
            return "OFFLINE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StreamStateMapper
    } // namespace Model
  } // namespace IVS
} // namespace Aws
