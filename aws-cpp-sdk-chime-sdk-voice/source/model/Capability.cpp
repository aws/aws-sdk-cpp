/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/Capability.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKVoice
  {
    namespace Model
    {
      namespace CapabilityMapper
      {

        static const int Voice_HASH = HashingUtils::HashString("Voice");
        static const int SMS_HASH = HashingUtils::HashString("SMS");


        Capability GetCapabilityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Voice_HASH)
          {
            return Capability::Voice;
          }
          else if (hashCode == SMS_HASH)
          {
            return Capability::SMS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Capability>(hashCode);
          }

          return Capability::NOT_SET;
        }

        Aws::String GetNameForCapability(Capability enumValue)
        {
          switch(enumValue)
          {
          case Capability::Voice:
            return "Voice";
          case Capability::SMS:
            return "SMS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CapabilityMapper
    } // namespace Model
  } // namespace ChimeSDKVoice
} // namespace Aws
