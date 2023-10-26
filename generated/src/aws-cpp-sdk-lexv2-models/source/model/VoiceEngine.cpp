/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/VoiceEngine.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelsV2
  {
    namespace Model
    {
      namespace VoiceEngineMapper
      {

        static const int standard_HASH = HashingUtils::HashString("standard");
        static const int neural_HASH = HashingUtils::HashString("neural");


        VoiceEngine GetVoiceEngineForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == standard_HASH)
          {
            return VoiceEngine::standard;
          }
          else if (hashCode == neural_HASH)
          {
            return VoiceEngine::neural;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VoiceEngine>(hashCode);
          }

          return VoiceEngine::NOT_SET;
        }

        Aws::String GetNameForVoiceEngine(VoiceEngine enumValue)
        {
          switch(enumValue)
          {
          case VoiceEngine::NOT_SET:
            return {};
          case VoiceEngine::standard:
            return "standard";
          case VoiceEngine::neural:
            return "neural";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VoiceEngineMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
