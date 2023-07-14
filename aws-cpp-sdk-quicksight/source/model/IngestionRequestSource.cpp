/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/IngestionRequestSource.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace IngestionRequestSourceMapper
      {

        static const int MANUAL_HASH = HashingUtils::HashString("MANUAL");
        static const int SCHEDULED_HASH = HashingUtils::HashString("SCHEDULED");


        IngestionRequestSource GetIngestionRequestSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MANUAL_HASH)
          {
            return IngestionRequestSource::MANUAL;
          }
          else if (hashCode == SCHEDULED_HASH)
          {
            return IngestionRequestSource::SCHEDULED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IngestionRequestSource>(hashCode);
          }

          return IngestionRequestSource::NOT_SET;
        }

        Aws::String GetNameForIngestionRequestSource(IngestionRequestSource enumValue)
        {
          switch(enumValue)
          {
          case IngestionRequestSource::MANUAL:
            return "MANUAL";
          case IngestionRequestSource::SCHEDULED:
            return "SCHEDULED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IngestionRequestSourceMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
