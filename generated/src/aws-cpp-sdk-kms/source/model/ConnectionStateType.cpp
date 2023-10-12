/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/ConnectionStateType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KMS
  {
    namespace Model
    {
      namespace ConnectionStateTypeMapper
      {

        static constexpr uint32_t CONNECTED_HASH = ConstExprHashingUtils::HashString("CONNECTED");
        static constexpr uint32_t CONNECTING_HASH = ConstExprHashingUtils::HashString("CONNECTING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t DISCONNECTED_HASH = ConstExprHashingUtils::HashString("DISCONNECTED");
        static constexpr uint32_t DISCONNECTING_HASH = ConstExprHashingUtils::HashString("DISCONNECTING");


        ConnectionStateType GetConnectionStateTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONNECTED_HASH)
          {
            return ConnectionStateType::CONNECTED;
          }
          else if (hashCode == CONNECTING_HASH)
          {
            return ConnectionStateType::CONNECTING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ConnectionStateType::FAILED;
          }
          else if (hashCode == DISCONNECTED_HASH)
          {
            return ConnectionStateType::DISCONNECTED;
          }
          else if (hashCode == DISCONNECTING_HASH)
          {
            return ConnectionStateType::DISCONNECTING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectionStateType>(hashCode);
          }

          return ConnectionStateType::NOT_SET;
        }

        Aws::String GetNameForConnectionStateType(ConnectionStateType enumValue)
        {
          switch(enumValue)
          {
          case ConnectionStateType::NOT_SET:
            return {};
          case ConnectionStateType::CONNECTED:
            return "CONNECTED";
          case ConnectionStateType::CONNECTING:
            return "CONNECTING";
          case ConnectionStateType::FAILED:
            return "FAILED";
          case ConnectionStateType::DISCONNECTED:
            return "DISCONNECTED";
          case ConnectionStateType::DISCONNECTING:
            return "DISCONNECTING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectionStateTypeMapper
    } // namespace Model
  } // namespace KMS
} // namespace Aws
