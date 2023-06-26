/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactFlowType.h>
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
      namespace ContactFlowTypeMapper
      {

        static const int CONTACT_FLOW_HASH = HashingUtils::HashString("CONTACT_FLOW");
        static const int CUSTOMER_QUEUE_HASH = HashingUtils::HashString("CUSTOMER_QUEUE");
        static const int CUSTOMER_HOLD_HASH = HashingUtils::HashString("CUSTOMER_HOLD");
        static const int CUSTOMER_WHISPER_HASH = HashingUtils::HashString("CUSTOMER_WHISPER");
        static const int AGENT_HOLD_HASH = HashingUtils::HashString("AGENT_HOLD");
        static const int AGENT_WHISPER_HASH = HashingUtils::HashString("AGENT_WHISPER");
        static const int OUTBOUND_WHISPER_HASH = HashingUtils::HashString("OUTBOUND_WHISPER");
        static const int AGENT_TRANSFER_HASH = HashingUtils::HashString("AGENT_TRANSFER");
        static const int QUEUE_TRANSFER_HASH = HashingUtils::HashString("QUEUE_TRANSFER");


        ContactFlowType GetContactFlowTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONTACT_FLOW_HASH)
          {
            return ContactFlowType::CONTACT_FLOW;
          }
          else if (hashCode == CUSTOMER_QUEUE_HASH)
          {
            return ContactFlowType::CUSTOMER_QUEUE;
          }
          else if (hashCode == CUSTOMER_HOLD_HASH)
          {
            return ContactFlowType::CUSTOMER_HOLD;
          }
          else if (hashCode == CUSTOMER_WHISPER_HASH)
          {
            return ContactFlowType::CUSTOMER_WHISPER;
          }
          else if (hashCode == AGENT_HOLD_HASH)
          {
            return ContactFlowType::AGENT_HOLD;
          }
          else if (hashCode == AGENT_WHISPER_HASH)
          {
            return ContactFlowType::AGENT_WHISPER;
          }
          else if (hashCode == OUTBOUND_WHISPER_HASH)
          {
            return ContactFlowType::OUTBOUND_WHISPER;
          }
          else if (hashCode == AGENT_TRANSFER_HASH)
          {
            return ContactFlowType::AGENT_TRANSFER;
          }
          else if (hashCode == QUEUE_TRANSFER_HASH)
          {
            return ContactFlowType::QUEUE_TRANSFER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContactFlowType>(hashCode);
          }

          return ContactFlowType::NOT_SET;
        }

        Aws::String GetNameForContactFlowType(ContactFlowType enumValue)
        {
          switch(enumValue)
          {
          case ContactFlowType::CONTACT_FLOW:
            return "CONTACT_FLOW";
          case ContactFlowType::CUSTOMER_QUEUE:
            return "CUSTOMER_QUEUE";
          case ContactFlowType::CUSTOMER_HOLD:
            return "CUSTOMER_HOLD";
          case ContactFlowType::CUSTOMER_WHISPER:
            return "CUSTOMER_WHISPER";
          case ContactFlowType::AGENT_HOLD:
            return "AGENT_HOLD";
          case ContactFlowType::AGENT_WHISPER:
            return "AGENT_WHISPER";
          case ContactFlowType::OUTBOUND_WHISPER:
            return "OUTBOUND_WHISPER";
          case ContactFlowType::AGENT_TRANSFER:
            return "AGENT_TRANSFER";
          case ContactFlowType::QUEUE_TRANSFER:
            return "QUEUE_TRANSFER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContactFlowTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
