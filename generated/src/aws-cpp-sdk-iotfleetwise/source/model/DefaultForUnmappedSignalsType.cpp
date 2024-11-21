/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/DefaultForUnmappedSignalsType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTFleetWise
  {
    namespace Model
    {
      namespace DefaultForUnmappedSignalsTypeMapper
      {

        static const int CUSTOM_DECODING_HASH = HashingUtils::HashString("CUSTOM_DECODING");


        DefaultForUnmappedSignalsType GetDefaultForUnmappedSignalsTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CUSTOM_DECODING_HASH)
          {
            return DefaultForUnmappedSignalsType::CUSTOM_DECODING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DefaultForUnmappedSignalsType>(hashCode);
          }

          return DefaultForUnmappedSignalsType::NOT_SET;
        }

        Aws::String GetNameForDefaultForUnmappedSignalsType(DefaultForUnmappedSignalsType enumValue)
        {
          switch(enumValue)
          {
          case DefaultForUnmappedSignalsType::NOT_SET:
            return {};
          case DefaultForUnmappedSignalsType::CUSTOM_DECODING:
            return "CUSTOM_DECODING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DefaultForUnmappedSignalsTypeMapper
    } // namespace Model
  } // namespace IoTFleetWise
} // namespace Aws
