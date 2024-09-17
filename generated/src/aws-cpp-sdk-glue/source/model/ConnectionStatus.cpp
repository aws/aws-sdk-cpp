/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ConnectionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace ConnectionStatusMapper
      {

        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ConnectionStatus GetConnectionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READY_HASH)
          {
            return ConnectionStatus::READY;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return ConnectionStatus::IN_PROGRESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ConnectionStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectionStatus>(hashCode);
          }

          return ConnectionStatus::NOT_SET;
        }

        Aws::String GetNameForConnectionStatus(ConnectionStatus enumValue)
        {
          switch(enumValue)
          {
          case ConnectionStatus::NOT_SET:
            return {};
          case ConnectionStatus::READY:
            return "READY";
          case ConnectionStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ConnectionStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectionStatusMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
