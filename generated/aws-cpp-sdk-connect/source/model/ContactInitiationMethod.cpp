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

        static const int INBOUND_HASH = HashingUtils::HashString("INBOUND");
        static const int OUTBOUND_HASH = HashingUtils::HashString("OUTBOUND");
        static const int TRANSFER_HASH = HashingUtils::HashString("TRANSFER");
        static const int QUEUE_TRANSFER_HASH = HashingUtils::HashString("QUEUE_TRANSFER");
        static const int CALLBACK_HASH = HashingUtils::HashString("CALLBACK");
        static const int API_HASH = HashingUtils::HashString("API");


        ContactInitiationMethod GetContactInitiationMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
