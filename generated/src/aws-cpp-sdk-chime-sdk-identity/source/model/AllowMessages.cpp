/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-identity/model/AllowMessages.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKIdentity
  {
    namespace Model
    {
      namespace AllowMessagesMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        AllowMessages GetAllowMessagesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return AllowMessages::ALL;
          }
          else if (hashCode == NONE_HASH)
          {
            return AllowMessages::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AllowMessages>(hashCode);
          }

          return AllowMessages::NOT_SET;
        }

        Aws::String GetNameForAllowMessages(AllowMessages enumValue)
        {
          switch(enumValue)
          {
          case AllowMessages::NOT_SET:
            return {};
          case AllowMessages::ALL:
            return "ALL";
          case AllowMessages::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AllowMessagesMapper
    } // namespace Model
  } // namespace ChimeSDKIdentity
} // namespace Aws
