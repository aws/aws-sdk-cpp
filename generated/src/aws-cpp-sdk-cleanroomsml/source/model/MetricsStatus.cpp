/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/MetricsStatus.h>
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
      namespace MetricsStatusMapper
      {

        static const int PUBLISH_SUCCEEDED_HASH = HashingUtils::HashString("PUBLISH_SUCCEEDED");
        static const int PUBLISH_FAILED_HASH = HashingUtils::HashString("PUBLISH_FAILED");


        MetricsStatus GetMetricsStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUBLISH_SUCCEEDED_HASH)
          {
            return MetricsStatus::PUBLISH_SUCCEEDED;
          }
          else if (hashCode == PUBLISH_FAILED_HASH)
          {
            return MetricsStatus::PUBLISH_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetricsStatus>(hashCode);
          }

          return MetricsStatus::NOT_SET;
        }

        Aws::String GetNameForMetricsStatus(MetricsStatus enumValue)
        {
          switch(enumValue)
          {
          case MetricsStatus::NOT_SET:
            return {};
          case MetricsStatus::PUBLISH_SUCCEEDED:
            return "PUBLISH_SUCCEEDED";
          case MetricsStatus::PUBLISH_FAILED:
            return "PUBLISH_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MetricsStatusMapper
    } // namespace Model
  } // namespace CleanRoomsML
} // namespace Aws
