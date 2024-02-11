/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/IngestionDestinationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppFabric
  {
    namespace Model
    {
      namespace IngestionDestinationStatusMapper
      {

        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        IngestionDestinationStatus GetIngestionDestinationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Active_HASH)
          {
            return IngestionDestinationStatus::Active;
          }
          else if (hashCode == Failed_HASH)
          {
            return IngestionDestinationStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IngestionDestinationStatus>(hashCode);
          }

          return IngestionDestinationStatus::NOT_SET;
        }

        Aws::String GetNameForIngestionDestinationStatus(IngestionDestinationStatus enumValue)
        {
          switch(enumValue)
          {
          case IngestionDestinationStatus::NOT_SET:
            return {};
          case IngestionDestinationStatus::Active:
            return "Active";
          case IngestionDestinationStatus::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IngestionDestinationStatusMapper
    } // namespace Model
  } // namespace AppFabric
} // namespace Aws
