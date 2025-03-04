/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/DeliveryDestinationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTManagedIntegrations
  {
    namespace Model
    {
      namespace DeliveryDestinationTypeMapper
      {

        static const int KINESIS_HASH = HashingUtils::HashString("KINESIS");


        DeliveryDestinationType GetDeliveryDestinationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == KINESIS_HASH)
          {
            return DeliveryDestinationType::KINESIS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeliveryDestinationType>(hashCode);
          }

          return DeliveryDestinationType::NOT_SET;
        }

        Aws::String GetNameForDeliveryDestinationType(DeliveryDestinationType enumValue)
        {
          switch(enumValue)
          {
          case DeliveryDestinationType::NOT_SET:
            return {};
          case DeliveryDestinationType::KINESIS:
            return "KINESIS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeliveryDestinationTypeMapper
    } // namespace Model
  } // namespace IoTManagedIntegrations
} // namespace Aws
