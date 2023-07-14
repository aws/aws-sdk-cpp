/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Eac3AtmosDialogueIntelligence.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace Eac3AtmosDialogueIntelligenceMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        Eac3AtmosDialogueIntelligence GetEac3AtmosDialogueIntelligenceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return Eac3AtmosDialogueIntelligence::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return Eac3AtmosDialogueIntelligence::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Eac3AtmosDialogueIntelligence>(hashCode);
          }

          return Eac3AtmosDialogueIntelligence::NOT_SET;
        }

        Aws::String GetNameForEac3AtmosDialogueIntelligence(Eac3AtmosDialogueIntelligence enumValue)
        {
          switch(enumValue)
          {
          case Eac3AtmosDialogueIntelligence::ENABLED:
            return "ENABLED";
          case Eac3AtmosDialogueIntelligence::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Eac3AtmosDialogueIntelligenceMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
