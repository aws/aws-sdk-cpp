/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ActionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace ActionTypeMapper
      {

        static const int PUBLISH_HASH = HashingUtils::HashString("PUBLISH");
        static const int SUBSCRIBE_HASH = HashingUtils::HashString("SUBSCRIBE");
        static const int RECEIVE_HASH = HashingUtils::HashString("RECEIVE");
        static const int CONNECT_HASH = HashingUtils::HashString("CONNECT");


        ActionType GetActionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUBLISH_HASH)
          {
            return ActionType::PUBLISH;
          }
          else if (hashCode == SUBSCRIBE_HASH)
          {
            return ActionType::SUBSCRIBE;
          }
          else if (hashCode == RECEIVE_HASH)
          {
            return ActionType::RECEIVE;
          }
          else if (hashCode == CONNECT_HASH)
          {
            return ActionType::CONNECT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionType>(hashCode);
          }

          return ActionType::NOT_SET;
        }

        Aws::String GetNameForActionType(ActionType enumValue)
        {
          switch(enumValue)
          {
          case ActionType::PUBLISH:
            return "PUBLISH";
          case ActionType::SUBSCRIBE:
            return "SUBSCRIBE";
          case ActionType::RECEIVE:
            return "RECEIVE";
          case ActionType::CONNECT:
            return "CONNECT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActionTypeMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
