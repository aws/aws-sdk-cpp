/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/AlexaSkillStatus.h>
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
      namespace AlexaSkillStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");


        AlexaSkillStatus GetAlexaSkillStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return AlexaSkillStatus::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return AlexaSkillStatus::INACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AlexaSkillStatus>(hashCode);
          }

          return AlexaSkillStatus::NOT_SET;
        }

        Aws::String GetNameForAlexaSkillStatus(AlexaSkillStatus enumValue)
        {
          switch(enumValue)
          {
          case AlexaSkillStatus::ACTIVE:
            return "ACTIVE";
          case AlexaSkillStatus::INACTIVE:
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

      } // namespace AlexaSkillStatusMapper
    } // namespace Model
  } // namespace ChimeSDKVoice
} // namespace Aws
