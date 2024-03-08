/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/SharedAudienceMetrics.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRoomsML
  {
    namespace Model
    {
      namespace SharedAudienceMetricsMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        SharedAudienceMetrics GetSharedAudienceMetricsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return SharedAudienceMetrics::ALL;
          }
          else if (hashCode == NONE_HASH)
          {
            return SharedAudienceMetrics::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SharedAudienceMetrics>(hashCode);
          }

          return SharedAudienceMetrics::NOT_SET;
        }

        Aws::String GetNameForSharedAudienceMetrics(SharedAudienceMetrics enumValue)
        {
          switch(enumValue)
          {
          case SharedAudienceMetrics::NOT_SET:
            return {};
          case SharedAudienceMetrics::ALL:
            return "ALL";
          case SharedAudienceMetrics::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SharedAudienceMetricsMapper
    } // namespace Model
  } // namespace CleanRoomsML
} // namespace Aws
