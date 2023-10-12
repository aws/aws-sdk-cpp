/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/ApiDestinationState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EventBridge
  {
    namespace Model
    {
      namespace ApiDestinationStateMapper
      {

        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t INACTIVE_HASH = ConstExprHashingUtils::HashString("INACTIVE");


        ApiDestinationState GetApiDestinationStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ApiDestinationState::NOT_SET:
            return {};
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
  } // namespace EventBridge
} // namespace Aws
