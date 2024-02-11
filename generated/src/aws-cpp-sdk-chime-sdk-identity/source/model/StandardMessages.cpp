/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-identity/model/StandardMessages.h>
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
      namespace StandardMessagesMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int MENTIONS_HASH = HashingUtils::HashString("MENTIONS");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        StandardMessages GetStandardMessagesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return StandardMessages::AUTO;
          }
          else if (hashCode == ALL_HASH)
          {
            return StandardMessages::ALL;
          }
          else if (hashCode == MENTIONS_HASH)
          {
            return StandardMessages::MENTIONS;
          }
          else if (hashCode == NONE_HASH)
          {
            return StandardMessages::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StandardMessages>(hashCode);
          }

          return StandardMessages::NOT_SET;
        }

        Aws::String GetNameForStandardMessages(StandardMessages enumValue)
        {
          switch(enumValue)
          {
          case StandardMessages::NOT_SET:
            return {};
          case StandardMessages::AUTO:
            return "AUTO";
          case StandardMessages::ALL:
            return "ALL";
          case StandardMessages::MENTIONS:
            return "MENTIONS";
          case StandardMessages::NONE:
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

      } // namespace StandardMessagesMapper
    } // namespace Model
  } // namespace ChimeSDKIdentity
} // namespace Aws
