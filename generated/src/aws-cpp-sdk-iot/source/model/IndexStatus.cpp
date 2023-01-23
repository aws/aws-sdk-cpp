/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/IndexStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace IndexStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int BUILDING_HASH = HashingUtils::HashString("BUILDING");
        static const int REBUILDING_HASH = HashingUtils::HashString("REBUILDING");


        IndexStatus GetIndexStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return IndexStatus::ACTIVE;
          }
          else if (hashCode == BUILDING_HASH)
          {
            return IndexStatus::BUILDING;
          }
          else if (hashCode == REBUILDING_HASH)
          {
            return IndexStatus::REBUILDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IndexStatus>(hashCode);
          }

          return IndexStatus::NOT_SET;
        }

        Aws::String GetNameForIndexStatus(IndexStatus enumValue)
        {
          switch(enumValue)
          {
          case IndexStatus::ACTIVE:
            return "ACTIVE";
          case IndexStatus::BUILDING:
            return "BUILDING";
          case IndexStatus::REBUILDING:
            return "REBUILDING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IndexStatusMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
