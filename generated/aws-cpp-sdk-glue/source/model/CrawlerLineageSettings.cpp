/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CrawlerLineageSettings.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace CrawlerLineageSettingsMapper
      {

        static const int ENABLE_HASH = HashingUtils::HashString("ENABLE");
        static const int DISABLE_HASH = HashingUtils::HashString("DISABLE");


        CrawlerLineageSettings GetCrawlerLineageSettingsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLE_HASH)
          {
            return CrawlerLineageSettings::ENABLE;
          }
          else if (hashCode == DISABLE_HASH)
          {
            return CrawlerLineageSettings::DISABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CrawlerLineageSettings>(hashCode);
          }

          return CrawlerLineageSettings::NOT_SET;
        }

        Aws::String GetNameForCrawlerLineageSettings(CrawlerLineageSettings enumValue)
        {
          switch(enumValue)
          {
          case CrawlerLineageSettings::ENABLE:
            return "ENABLE";
          case CrawlerLineageSettings::DISABLE:
            return "DISABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CrawlerLineageSettingsMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
