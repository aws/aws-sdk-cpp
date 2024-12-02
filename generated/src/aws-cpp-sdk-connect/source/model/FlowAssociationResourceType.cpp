/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/FlowAssociationResourceType.h>
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
      namespace FlowAssociationResourceTypeMapper
      {

        static const int SMS_PHONE_NUMBER_HASH = HashingUtils::HashString("SMS_PHONE_NUMBER");
        static const int INBOUND_EMAIL_HASH = HashingUtils::HashString("INBOUND_EMAIL");
        static const int OUTBOUND_EMAIL_HASH = HashingUtils::HashString("OUTBOUND_EMAIL");
        static const int ANALYTICS_CONNECTOR_HASH = HashingUtils::HashString("ANALYTICS_CONNECTOR");
        static const int WHATSAPP_MESSAGING_PHONE_NUMBER_HASH = HashingUtils::HashString("WHATSAPP_MESSAGING_PHONE_NUMBER");


        FlowAssociationResourceType GetFlowAssociationResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SMS_PHONE_NUMBER_HASH)
          {
            return FlowAssociationResourceType::SMS_PHONE_NUMBER;
          }
          else if (hashCode == INBOUND_EMAIL_HASH)
          {
            return FlowAssociationResourceType::INBOUND_EMAIL;
          }
          else if (hashCode == OUTBOUND_EMAIL_HASH)
          {
            return FlowAssociationResourceType::OUTBOUND_EMAIL;
          }
          else if (hashCode == ANALYTICS_CONNECTOR_HASH)
          {
            return FlowAssociationResourceType::ANALYTICS_CONNECTOR;
          }
          else if (hashCode == WHATSAPP_MESSAGING_PHONE_NUMBER_HASH)
          {
            return FlowAssociationResourceType::WHATSAPP_MESSAGING_PHONE_NUMBER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FlowAssociationResourceType>(hashCode);
          }

          return FlowAssociationResourceType::NOT_SET;
        }

        Aws::String GetNameForFlowAssociationResourceType(FlowAssociationResourceType enumValue)
        {
          switch(enumValue)
          {
          case FlowAssociationResourceType::NOT_SET:
            return {};
          case FlowAssociationResourceType::SMS_PHONE_NUMBER:
            return "SMS_PHONE_NUMBER";
          case FlowAssociationResourceType::INBOUND_EMAIL:
            return "INBOUND_EMAIL";
          case FlowAssociationResourceType::OUTBOUND_EMAIL:
            return "OUTBOUND_EMAIL";
          case FlowAssociationResourceType::ANALYTICS_CONNECTOR:
            return "ANALYTICS_CONNECTOR";
          case FlowAssociationResourceType::WHATSAPP_MESSAGING_PHONE_NUMBER:
            return "WHATSAPP_MESSAGING_PHONE_NUMBER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FlowAssociationResourceTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
