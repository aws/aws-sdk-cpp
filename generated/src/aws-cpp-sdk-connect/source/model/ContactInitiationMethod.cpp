/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactInitiationMethod.h>
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
      namespace ContactInitiationMethodMapper
      {

        static constexpr uint32_t INBOUND_HASH = ConstExprHashingUtils::HashString("INBOUND");
        static constexpr uint32_t OUTBOUND_HASH = ConstExprHashingUtils::HashString("OUTBOUND");
        static constexpr uint32_t TRANSFER_HASH = ConstExprHashingUtils::HashString("TRANSFER");
        static constexpr uint32_t QUEUE_TRANSFER_HASH = ConstExprHashingUtils::HashString("QUEUE_TRANSFER");
        static constexpr uint32_t CALLBACK_HASH = ConstExprHashingUtils::HashString("CALLBACK");
        static constexpr uint32_t API_HASH = ConstExprHashingUtils::HashString("API");
        static constexpr uint32_t DISCONNECT_HASH = ConstExprHashingUtils::HashString("DISCONNECT");
        static constexpr uint32_t MONITOR_HASH = ConstExprHashingUtils::HashString("MONITOR");
        static constexpr uint32_t EXTERNAL_OUTBOUND_HASH = ConstExprHashingUtils::HashString("EXTERNAL_OUTBOUND");


        ContactInitiationMethod GetContactInitiationMethodForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INBOUND_HASH)
          {
            return ContactInitiationMethod::INBOUND;
          }
          else if (hashCode == OUTBOUND_HASH)
          {
            return ContactInitiationMethod::OUTBOUND;
          }
          else if (hashCode == TRANSFER_HASH)
          {
            return ContactInitiationMethod::TRANSFER;
          }
          else if (hashCode == QUEUE_TRANSFER_HASH)
          {
            return ContactInitiationMethod::QUEUE_TRANSFER;
          }
          else if (hashCode == CALLBACK_HASH)
          {
            return ContactInitiationMethod::CALLBACK;
          }
          else if (hashCode == API_HASH)
          {
            return ContactInitiationMethod::API;
          }
          else if (hashCode == DISCONNECT_HASH)
          {
            return ContactInitiationMethod::DISCONNECT;
          }
          else if (hashCode == MONITOR_HASH)
          {
            return ContactInitiationMethod::MONITOR;
          }
          else if (hashCode == EXTERNAL_OUTBOUND_HASH)
          {
            return ContactInitiationMethod::EXTERNAL_OUTBOUND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContactInitiationMethod>(hashCode);
          }

          return ContactInitiationMethod::NOT_SET;
        }

        Aws::String GetNameForContactInitiationMethod(ContactInitiationMethod enumValue)
        {
          switch(enumValue)
          {
          case ContactInitiationMethod::NOT_SET:
            return {};
          case ContactInitiationMethod::INBOUND:
            return "INBOUND";
          case ContactInitiationMethod::OUTBOUND:
            return "OUTBOUND";
          case ContactInitiationMethod::TRANSFER:
            return "TRANSFER";
          case ContactInitiationMethod::QUEUE_TRANSFER:
            return "QUEUE_TRANSFER";
          case ContactInitiationMethod::CALLBACK:
            return "CALLBACK";
          case ContactInitiationMethod::API:
            return "API";
          case ContactInitiationMethod::DISCONNECT:
            return "DISCONNECT";
          case ContactInitiationMethod::MONITOR:
            return "MONITOR";
          case ContactInitiationMethod::EXTERNAL_OUTBOUND:
            return "EXTERNAL_OUTBOUND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContactInitiationMethodMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
