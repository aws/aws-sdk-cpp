/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SortableFieldName.h>
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
      namespace SortableFieldNameMapper
      {

        static const int INITIATION_TIMESTAMP_HASH = HashingUtils::HashString("INITIATION_TIMESTAMP");
        static const int SCHEDULED_TIMESTAMP_HASH = HashingUtils::HashString("SCHEDULED_TIMESTAMP");
        static const int CONNECTED_TO_AGENT_TIMESTAMP_HASH = HashingUtils::HashString("CONNECTED_TO_AGENT_TIMESTAMP");
        static const int DISCONNECT_TIMESTAMP_HASH = HashingUtils::HashString("DISCONNECT_TIMESTAMP");
        static const int INITIATION_METHOD_HASH = HashingUtils::HashString("INITIATION_METHOD");
        static const int CHANNEL_HASH = HashingUtils::HashString("CHANNEL");


        SortableFieldName GetSortableFieldNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INITIATION_TIMESTAMP_HASH)
          {
            return SortableFieldName::INITIATION_TIMESTAMP;
          }
          else if (hashCode == SCHEDULED_TIMESTAMP_HASH)
          {
            return SortableFieldName::SCHEDULED_TIMESTAMP;
          }
          else if (hashCode == CONNECTED_TO_AGENT_TIMESTAMP_HASH)
          {
            return SortableFieldName::CONNECTED_TO_AGENT_TIMESTAMP;
          }
          else if (hashCode == DISCONNECT_TIMESTAMP_HASH)
          {
            return SortableFieldName::DISCONNECT_TIMESTAMP;
          }
          else if (hashCode == INITIATION_METHOD_HASH)
          {
            return SortableFieldName::INITIATION_METHOD;
          }
          else if (hashCode == CHANNEL_HASH)
          {
            return SortableFieldName::CHANNEL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SortableFieldName>(hashCode);
          }

          return SortableFieldName::NOT_SET;
        }

        Aws::String GetNameForSortableFieldName(SortableFieldName enumValue)
        {
          switch(enumValue)
          {
          case SortableFieldName::NOT_SET:
            return {};
          case SortableFieldName::INITIATION_TIMESTAMP:
            return "INITIATION_TIMESTAMP";
          case SortableFieldName::SCHEDULED_TIMESTAMP:
            return "SCHEDULED_TIMESTAMP";
          case SortableFieldName::CONNECTED_TO_AGENT_TIMESTAMP:
            return "CONNECTED_TO_AGENT_TIMESTAMP";
          case SortableFieldName::DISCONNECT_TIMESTAMP:
            return "DISCONNECT_TIMESTAMP";
          case SortableFieldName::INITIATION_METHOD:
            return "INITIATION_METHOD";
          case SortableFieldName::CHANNEL:
            return "CHANNEL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SortableFieldNameMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
