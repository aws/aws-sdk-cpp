/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-data/model/PayloadFormatIndicator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTDataPlane
  {
    namespace Model
    {
      namespace PayloadFormatIndicatorMapper
      {

        static const int UNSPECIFIED_BYTES_HASH = HashingUtils::HashString("UNSPECIFIED_BYTES");
        static const int UTF8_DATA_HASH = HashingUtils::HashString("UTF8_DATA");


        PayloadFormatIndicator GetPayloadFormatIndicatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNSPECIFIED_BYTES_HASH)
          {
            return PayloadFormatIndicator::UNSPECIFIED_BYTES;
          }
          else if (hashCode == UTF8_DATA_HASH)
          {
            return PayloadFormatIndicator::UTF8_DATA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PayloadFormatIndicator>(hashCode);
          }

          return PayloadFormatIndicator::NOT_SET;
        }

        Aws::String GetNameForPayloadFormatIndicator(PayloadFormatIndicator enumValue)
        {
          switch(enumValue)
          {
          case PayloadFormatIndicator::UNSPECIFIED_BYTES:
            return "UNSPECIFIED_BYTES";
          case PayloadFormatIndicator::UTF8_DATA:
            return "UTF8_DATA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PayloadFormatIndicatorMapper
    } // namespace Model
  } // namespace IoTDataPlane
} // namespace Aws
