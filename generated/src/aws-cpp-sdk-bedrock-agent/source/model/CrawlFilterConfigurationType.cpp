/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/CrawlFilterConfigurationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgent
  {
    namespace Model
    {
      namespace CrawlFilterConfigurationTypeMapper
      {

        static const int PATTERN_HASH = HashingUtils::HashString("PATTERN");


        CrawlFilterConfigurationType GetCrawlFilterConfigurationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PATTERN_HASH)
          {
            return CrawlFilterConfigurationType::PATTERN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CrawlFilterConfigurationType>(hashCode);
          }

          return CrawlFilterConfigurationType::NOT_SET;
        }

        Aws::String GetNameForCrawlFilterConfigurationType(CrawlFilterConfigurationType enumValue)
        {
          switch(enumValue)
          {
          case CrawlFilterConfigurationType::NOT_SET:
            return {};
          case CrawlFilterConfigurationType::PATTERN:
            return "PATTERN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CrawlFilterConfigurationTypeMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
