/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AnalyticsModality.h>
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
      namespace AnalyticsModalityMapper
      {

        static const int Speech_HASH = HashingUtils::HashString("Speech");
        static const int Text_HASH = HashingUtils::HashString("Text");
        static const int DTMF_HASH = HashingUtils::HashString("DTMF");
        static const int MultiMode_HASH = HashingUtils::HashString("MultiMode");


        AnalyticsModality GetAnalyticsModalityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Speech_HASH)
          {
            return AnalyticsModality::Speech;
          }
          else if (hashCode == Text_HASH)
          {
            return AnalyticsModality::Text;
          }
          else if (hashCode == DTMF_HASH)
          {
            return AnalyticsModality::DTMF;
          }
          else if (hashCode == MultiMode_HASH)
          {
            return AnalyticsModality::MultiMode;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalyticsModality>(hashCode);
          }

          return AnalyticsModality::NOT_SET;
        }

        Aws::String GetNameForAnalyticsModality(AnalyticsModality enumValue)
        {
          switch(enumValue)
          {
          case AnalyticsModality::NOT_SET:
            return {};
          case AnalyticsModality::Speech:
            return "Speech";
          case AnalyticsModality::Text:
            return "Text";
          case AnalyticsModality::DTMF:
            return "DTMF";
          case AnalyticsModality::MultiMode:
            return "MultiMode";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnalyticsModalityMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
