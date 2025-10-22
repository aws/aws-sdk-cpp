/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AllowedUserAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace AllowedUserActionMapper
      {

        static const int CALL_HASH = HashingUtils::HashString("CALL");
        static const int DISCARD_HASH = HashingUtils::HashString("DISCARD");


        AllowedUserAction GetAllowedUserActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CALL_HASH)
          {
            return AllowedUserAction::CALL;
          }
          else if (hashCode == DISCARD_HASH)
          {
            return AllowedUserAction::DISCARD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AllowedUserAction>(hashCode);
          }

          return AllowedUserAction::NOT_SET;
        }

        Aws::String GetNameForAllowedUserAction(AllowedUserAction enumValue)
        {
          switch(enumValue)
          {
          case AllowedUserAction::NOT_SET:
            return {};
          case AllowedUserAction::CALL:
            return "CALL";
          case AllowedUserAction::DISCARD:
            return "DISCARD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AllowedUserActionMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
