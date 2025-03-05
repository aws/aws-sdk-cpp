/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/SignalValueType.h>
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
      namespace SignalValueTypeMapper
      {

        static const int INTEGER_HASH = HashingUtils::HashString("INTEGER");
        static const int FLOATING_POINT_HASH = HashingUtils::HashString("FLOATING_POINT");


        SignalValueType GetSignalValueTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTEGER_HASH)
          {
            return SignalValueType::INTEGER;
          }
          else if (hashCode == FLOATING_POINT_HASH)
          {
            return SignalValueType::FLOATING_POINT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SignalValueType>(hashCode);
          }

          return SignalValueType::NOT_SET;
        }

        Aws::String GetNameForSignalValueType(SignalValueType enumValue)
        {
          switch(enumValue)
          {
          case SignalValueType::NOT_SET:
            return {};
          case SignalValueType::INTEGER:
            return "INTEGER";
          case SignalValueType::FLOATING_POINT:
            return "FLOATING_POINT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SignalValueTypeMapper
    } // namespace Model
  } // namespace IoTFleetWise
} // namespace Aws
