/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/ScraperComponentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PrometheusService
  {
    namespace Model
    {
      namespace ScraperComponentTypeMapper
      {

        static const int SERVICE_DISCOVERY_HASH = HashingUtils::HashString("SERVICE_DISCOVERY");
        static const int COLLECTOR_HASH = HashingUtils::HashString("COLLECTOR");
        static const int EXPORTER_HASH = HashingUtils::HashString("EXPORTER");


        ScraperComponentType GetScraperComponentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SERVICE_DISCOVERY_HASH)
          {
            return ScraperComponentType::SERVICE_DISCOVERY;
          }
          else if (hashCode == COLLECTOR_HASH)
          {
            return ScraperComponentType::COLLECTOR;
          }
          else if (hashCode == EXPORTER_HASH)
          {
            return ScraperComponentType::EXPORTER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScraperComponentType>(hashCode);
          }

          return ScraperComponentType::NOT_SET;
        }

        Aws::String GetNameForScraperComponentType(ScraperComponentType enumValue)
        {
          switch(enumValue)
          {
          case ScraperComponentType::NOT_SET:
            return {};
          case ScraperComponentType::SERVICE_DISCOVERY:
            return "SERVICE_DISCOVERY";
          case ScraperComponentType::COLLECTOR:
            return "COLLECTOR";
          case ScraperComponentType::EXPORTER:
            return "EXPORTER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScraperComponentTypeMapper
    } // namespace Model
  } // namespace PrometheusService
} // namespace Aws
