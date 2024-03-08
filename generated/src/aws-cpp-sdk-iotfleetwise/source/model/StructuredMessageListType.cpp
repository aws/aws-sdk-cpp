/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/StructuredMessageListType.h>
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
      namespace StructuredMessageListTypeMapper
      {

        static const int FIXED_CAPACITY_HASH = HashingUtils::HashString("FIXED_CAPACITY");
        static const int DYNAMIC_UNBOUNDED_CAPACITY_HASH = HashingUtils::HashString("DYNAMIC_UNBOUNDED_CAPACITY");
        static const int DYNAMIC_BOUNDED_CAPACITY_HASH = HashingUtils::HashString("DYNAMIC_BOUNDED_CAPACITY");


        StructuredMessageListType GetStructuredMessageListTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FIXED_CAPACITY_HASH)
          {
            return StructuredMessageListType::FIXED_CAPACITY;
          }
          else if (hashCode == DYNAMIC_UNBOUNDED_CAPACITY_HASH)
          {
            return StructuredMessageListType::DYNAMIC_UNBOUNDED_CAPACITY;
          }
          else if (hashCode == DYNAMIC_BOUNDED_CAPACITY_HASH)
          {
            return StructuredMessageListType::DYNAMIC_BOUNDED_CAPACITY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StructuredMessageListType>(hashCode);
          }

          return StructuredMessageListType::NOT_SET;
        }

        Aws::String GetNameForStructuredMessageListType(StructuredMessageListType enumValue)
        {
          switch(enumValue)
          {
          case StructuredMessageListType::NOT_SET:
            return {};
          case StructuredMessageListType::FIXED_CAPACITY:
            return "FIXED_CAPACITY";
          case StructuredMessageListType::DYNAMIC_UNBOUNDED_CAPACITY:
            return "DYNAMIC_UNBOUNDED_CAPACITY";
          case StructuredMessageListType::DYNAMIC_BOUNDED_CAPACITY:
            return "DYNAMIC_BOUNDED_CAPACITY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StructuredMessageListTypeMapper
    } // namespace Model
  } // namespace IoTFleetWise
} // namespace Aws
