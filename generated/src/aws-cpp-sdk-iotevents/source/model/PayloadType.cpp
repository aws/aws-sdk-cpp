/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/PayloadType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTEvents
  {
    namespace Model
    {
      namespace PayloadTypeMapper
      {

        static const int STRING_HASH = HashingUtils::HashString("STRING");
        static const int JSON_HASH = HashingUtils::HashString("JSON");


        PayloadType GetPayloadTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STRING_HASH)
          {
            return PayloadType::STRING;
          }
          else if (hashCode == JSON_HASH)
          {
            return PayloadType::JSON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PayloadType>(hashCode);
          }

          return PayloadType::NOT_SET;
        }

        Aws::String GetNameForPayloadType(PayloadType enumValue)
        {
          switch(enumValue)
          {
          case PayloadType::STRING:
            return "STRING";
          case PayloadType::JSON:
            return "JSON";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PayloadTypeMapper
    } // namespace Model
  } // namespace IoTEvents
} // namespace Aws
