/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/ConnectorStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Transfer
  {
    namespace Model
    {
      namespace ConnectorStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int ERRORED_HASH = HashingUtils::HashString("ERRORED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");


        ConnectorStatus GetConnectorStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ConnectorStatus::ACTIVE;
          }
          else if (hashCode == ERRORED_HASH)
          {
            return ConnectorStatus::ERRORED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return ConnectorStatus::PENDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectorStatus>(hashCode);
          }

          return ConnectorStatus::NOT_SET;
        }

        Aws::String GetNameForConnectorStatus(ConnectorStatus enumValue)
        {
          switch(enumValue)
          {
          case ConnectorStatus::NOT_SET:
            return {};
          case ConnectorStatus::ACTIVE:
            return "ACTIVE";
          case ConnectorStatus::ERRORED:
            return "ERRORED";
          case ConnectorStatus::PENDING:
            return "PENDING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectorStatusMapper
    } // namespace Model
  } // namespace Transfer
} // namespace Aws
