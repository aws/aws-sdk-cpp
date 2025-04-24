/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/HandlerBehavior.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppSync
  {
    namespace Model
    {
      namespace HandlerBehaviorMapper
      {

        static const int CODE_HASH = HashingUtils::HashString("CODE");
        static const int DIRECT_HASH = HashingUtils::HashString("DIRECT");


        HandlerBehavior GetHandlerBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CODE_HASH)
          {
            return HandlerBehavior::CODE;
          }
          else if (hashCode == DIRECT_HASH)
          {
            return HandlerBehavior::DIRECT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HandlerBehavior>(hashCode);
          }

          return HandlerBehavior::NOT_SET;
        }

        Aws::String GetNameForHandlerBehavior(HandlerBehavior enumValue)
        {
          switch(enumValue)
          {
          case HandlerBehavior::NOT_SET:
            return {};
          case HandlerBehavior::CODE:
            return "CODE";
          case HandlerBehavior::DIRECT:
            return "DIRECT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HandlerBehaviorMapper
    } // namespace Model
  } // namespace AppSync
} // namespace Aws
