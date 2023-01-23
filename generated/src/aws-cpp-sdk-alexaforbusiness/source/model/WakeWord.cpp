/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/WakeWord.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AlexaForBusiness
  {
    namespace Model
    {
      namespace WakeWordMapper
      {

        static const int ALEXA_HASH = HashingUtils::HashString("ALEXA");
        static const int AMAZON_HASH = HashingUtils::HashString("AMAZON");
        static const int ECHO_HASH = HashingUtils::HashString("ECHO");
        static const int COMPUTER_HASH = HashingUtils::HashString("COMPUTER");


        WakeWord GetWakeWordForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALEXA_HASH)
          {
            return WakeWord::ALEXA;
          }
          else if (hashCode == AMAZON_HASH)
          {
            return WakeWord::AMAZON;
          }
          else if (hashCode == ECHO_HASH)
          {
            return WakeWord::ECHO;
          }
          else if (hashCode == COMPUTER_HASH)
          {
            return WakeWord::COMPUTER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WakeWord>(hashCode);
          }

          return WakeWord::NOT_SET;
        }

        Aws::String GetNameForWakeWord(WakeWord enumValue)
        {
          switch(enumValue)
          {
          case WakeWord::ALEXA:
            return "ALEXA";
          case WakeWord::AMAZON:
            return "AMAZON";
          case WakeWord::ECHO:
            return "ECHO";
          case WakeWord::COMPUTER:
            return "COMPUTER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WakeWordMapper
    } // namespace Model
  } // namespace AlexaForBusiness
} // namespace Aws
