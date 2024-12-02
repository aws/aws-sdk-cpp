/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListFlowAssociationResourceType.h>
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
      namespace ListFlowAssociationResourceTypeMapper
      {

        static const int WHATSAPP_MESSAGING_PHONE_NUMBER_HASH = HashingUtils::HashString("WHATSAPP_MESSAGING_PHONE_NUMBER");
        static const int VOICE_PHONE_NUMBER_HASH = HashingUtils::HashString("VOICE_PHONE_NUMBER");
        static const int INBOUND_EMAIL_HASH = HashingUtils::HashString("INBOUND_EMAIL");
        static const int OUTBOUND_EMAIL_HASH = HashingUtils::HashString("OUTBOUND_EMAIL");
        static const int ANALYTICS_CONNECTOR_HASH = HashingUtils::HashString("ANALYTICS_CONNECTOR");


        ListFlowAssociationResourceType GetListFlowAssociationResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WHATSAPP_MESSAGING_PHONE_NUMBER_HASH)
          {
            return ListFlowAssociationResourceType::WHATSAPP_MESSAGING_PHONE_NUMBER;
          }
          else if (hashCode == VOICE_PHONE_NUMBER_HASH)
          {
            return ListFlowAssociationResourceType::VOICE_PHONE_NUMBER;
          }
          else if (hashCode == INBOUND_EMAIL_HASH)
          {
            return ListFlowAssociationResourceType::INBOUND_EMAIL;
          }
          else if (hashCode == OUTBOUND_EMAIL_HASH)
          {
            return ListFlowAssociationResourceType::OUTBOUND_EMAIL;
          }
          else if (hashCode == ANALYTICS_CONNECTOR_HASH)
          {
            return ListFlowAssociationResourceType::ANALYTICS_CONNECTOR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListFlowAssociationResourceType>(hashCode);
          }

          return ListFlowAssociationResourceType::NOT_SET;
        }

        Aws::String GetNameForListFlowAssociationResourceType(ListFlowAssociationResourceType enumValue)
        {
          switch(enumValue)
          {
          case ListFlowAssociationResourceType::NOT_SET:
            return {};
          case ListFlowAssociationResourceType::WHATSAPP_MESSAGING_PHONE_NUMBER:
            return "WHATSAPP_MESSAGING_PHONE_NUMBER";
          case ListFlowAssociationResourceType::VOICE_PHONE_NUMBER:
            return "VOICE_PHONE_NUMBER";
          case ListFlowAssociationResourceType::INBOUND_EMAIL:
            return "INBOUND_EMAIL";
          case ListFlowAssociationResourceType::OUTBOUND_EMAIL:
            return "OUTBOUND_EMAIL";
          case ListFlowAssociationResourceType::ANALYTICS_CONNECTOR:
            return "ANALYTICS_CONNECTOR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListFlowAssociationResourceTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
