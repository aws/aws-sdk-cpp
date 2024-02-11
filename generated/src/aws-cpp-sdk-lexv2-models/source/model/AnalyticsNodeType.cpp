/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AnalyticsNodeType.h>
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
      namespace AnalyticsNodeTypeMapper
      {

        static const int Inner_HASH = HashingUtils::HashString("Inner");
        static const int Exit_HASH = HashingUtils::HashString("Exit");


        AnalyticsNodeType GetAnalyticsNodeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Inner_HASH)
          {
            return AnalyticsNodeType::Inner;
          }
          else if (hashCode == Exit_HASH)
          {
            return AnalyticsNodeType::Exit;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalyticsNodeType>(hashCode);
          }

          return AnalyticsNodeType::NOT_SET;
        }

        Aws::String GetNameForAnalyticsNodeType(AnalyticsNodeType enumValue)
        {
          switch(enumValue)
          {
          case AnalyticsNodeType::NOT_SET:
            return {};
          case AnalyticsNodeType::Inner:
            return "Inner";
          case AnalyticsNodeType::Exit:
            return "Exit";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnalyticsNodeTypeMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
