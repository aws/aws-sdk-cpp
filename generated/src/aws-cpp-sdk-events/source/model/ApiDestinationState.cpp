/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/events/model/ApiDestinationState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchEvents
  {
    namespace Model
    {
      namespace ApiDestinationStateMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");


        ApiDestinationState GetApiDestinationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ApiDestinationState::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return ApiDestinationState::INACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApiDestinationState>(hashCode);
          }

          return ApiDestinationState::NOT_SET;
        }

        Aws::String GetNameForApiDestinationState(ApiDestinationState enumValue)
        {
          switch(enumValue)
          {
          case ApiDestinationState::ACTIVE:
            return "ACTIVE";
          case ApiDestinationState::INACTIVE:
            return "INACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApiDestinationStateMapper
    } // namespace Model
  } // namespace CloudWatchEvents
} // namespace Aws
