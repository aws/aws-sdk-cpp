/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SearchContactsTimeRangeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace SearchContactsTimeRangeTypeMapper
      {

        static const int INITIATION_TIMESTAMP_HASH = HashingUtils::HashString("INITIATION_TIMESTAMP");
        static const int SCHEDULED_TIMESTAMP_HASH = HashingUtils::HashString("SCHEDULED_TIMESTAMP");
        static const int CONNECTED_TO_AGENT_TIMESTAMP_HASH = HashingUtils::HashString("CONNECTED_TO_AGENT_TIMESTAMP");
        static const int DISCONNECT_TIMESTAMP_HASH = HashingUtils::HashString("DISCONNECT_TIMESTAMP");


        SearchContactsTimeRangeType GetSearchContactsTimeRangeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INITIATION_TIMESTAMP_HASH)
          {
            return SearchContactsTimeRangeType::INITIATION_TIMESTAMP;
          }
          else if (hashCode == SCHEDULED_TIMESTAMP_HASH)
          {
            return SearchContactsTimeRangeType::SCHEDULED_TIMESTAMP;
          }
          else if (hashCode == CONNECTED_TO_AGENT_TIMESTAMP_HASH)
          {
            return SearchContactsTimeRangeType::CONNECTED_TO_AGENT_TIMESTAMP;
          }
          else if (hashCode == DISCONNECT_TIMESTAMP_HASH)
          {
            return SearchContactsTimeRangeType::DISCONNECT_TIMESTAMP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SearchContactsTimeRangeType>(hashCode);
          }

          return SearchContactsTimeRangeType::NOT_SET;
        }

        Aws::String GetNameForSearchContactsTimeRangeType(SearchContactsTimeRangeType enumValue)
        {
          switch(enumValue)
          {
          case SearchContactsTimeRangeType::NOT_SET:
            return {};
          case SearchContactsTimeRangeType::INITIATION_TIMESTAMP:
            return "INITIATION_TIMESTAMP";
          case SearchContactsTimeRangeType::SCHEDULED_TIMESTAMP:
            return "SCHEDULED_TIMESTAMP";
          case SearchContactsTimeRangeType::CONNECTED_TO_AGENT_TIMESTAMP:
            return "CONNECTED_TO_AGENT_TIMESTAMP";
          case SearchContactsTimeRangeType::DISCONNECT_TIMESTAMP:
            return "DISCONNECT_TIMESTAMP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SearchContactsTimeRangeTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
