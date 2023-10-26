/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AnalyticsUtteranceAttributeName.h>
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
      namespace AnalyticsUtteranceAttributeNameMapper
      {

        static const int LastUsedIntent_HASH = HashingUtils::HashString("LastUsedIntent");


        AnalyticsUtteranceAttributeName GetAnalyticsUtteranceAttributeNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LastUsedIntent_HASH)
          {
            return AnalyticsUtteranceAttributeName::LastUsedIntent;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalyticsUtteranceAttributeName>(hashCode);
          }

          return AnalyticsUtteranceAttributeName::NOT_SET;
        }

        Aws::String GetNameForAnalyticsUtteranceAttributeName(AnalyticsUtteranceAttributeName enumValue)
        {
          switch(enumValue)
          {
          case AnalyticsUtteranceAttributeName::NOT_SET:
            return {};
          case AnalyticsUtteranceAttributeName::LastUsedIntent:
            return "LastUsedIntent";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnalyticsUtteranceAttributeNameMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
