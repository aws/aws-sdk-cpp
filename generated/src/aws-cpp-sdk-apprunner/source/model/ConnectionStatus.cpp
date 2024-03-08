/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/ConnectionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppRunner
  {
    namespace Model
    {
      namespace ConnectionStatusMapper
      {

        static const int PENDING_HANDSHAKE_HASH = HashingUtils::HashString("PENDING_HANDSHAKE");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        ConnectionStatus GetConnectionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HANDSHAKE_HASH)
          {
            return ConnectionStatus::PENDING_HANDSHAKE;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return ConnectionStatus::AVAILABLE;
          }
          else if (hashCode == ERROR__HASH)
          {
            return ConnectionStatus::ERROR_;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ConnectionStatus::DELETED;
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
          case ConnectionStatus::PENDING_HANDSHAKE:
            return "PENDING_HANDSHAKE";
          case ConnectionStatus::AVAILABLE:
            return "AVAILABLE";
          case ConnectionStatus::ERROR_:
            return "ERROR";
          case ConnectionStatus::DELETED:
            return "DELETED";
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
  } // namespace AppRunner
} // namespace Aws
