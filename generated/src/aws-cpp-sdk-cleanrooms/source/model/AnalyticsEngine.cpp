/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/AnalyticsEngine.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRooms
  {
    namespace Model
    {
      namespace AnalyticsEngineMapper
      {

        static const int SPARK_HASH = HashingUtils::HashString("SPARK");
        static const int CLEAN_ROOMS_SQL_HASH = HashingUtils::HashString("CLEAN_ROOMS_SQL");


        AnalyticsEngine GetAnalyticsEngineForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SPARK_HASH)
          {
            return AnalyticsEngine::SPARK;
          }
          else if (hashCode == CLEAN_ROOMS_SQL_HASH)
          {
            return AnalyticsEngine::CLEAN_ROOMS_SQL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalyticsEngine>(hashCode);
          }

          return AnalyticsEngine::NOT_SET;
        }

        Aws::String GetNameForAnalyticsEngine(AnalyticsEngine enumValue)
        {
          switch(enumValue)
          {
          case AnalyticsEngine::NOT_SET:
            return {};
          case AnalyticsEngine::SPARK:
            return "SPARK";
          case AnalyticsEngine::CLEAN_ROOMS_SQL:
            return "CLEAN_ROOMS_SQL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnalyticsEngineMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
