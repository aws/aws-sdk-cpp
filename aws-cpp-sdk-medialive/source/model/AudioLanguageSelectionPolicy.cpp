/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/AudioLanguageSelectionPolicy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace AudioLanguageSelectionPolicyMapper
      {

        static const int LOOSE_HASH = HashingUtils::HashString("LOOSE");
        static const int STRICT_HASH = HashingUtils::HashString("STRICT");


        AudioLanguageSelectionPolicy GetAudioLanguageSelectionPolicyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LOOSE_HASH)
          {
            return AudioLanguageSelectionPolicy::LOOSE;
          }
          else if (hashCode == STRICT_HASH)
          {
            return AudioLanguageSelectionPolicy::STRICT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AudioLanguageSelectionPolicy>(hashCode);
          }

          return AudioLanguageSelectionPolicy::NOT_SET;
        }

        Aws::String GetNameForAudioLanguageSelectionPolicy(AudioLanguageSelectionPolicy enumValue)
        {
          switch(enumValue)
          {
          case AudioLanguageSelectionPolicy::LOOSE:
            return "LOOSE";
          case AudioLanguageSelectionPolicy::STRICT:
            return "STRICT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AudioLanguageSelectionPolicyMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
