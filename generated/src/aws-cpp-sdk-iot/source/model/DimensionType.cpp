/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DimensionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace DimensionTypeMapper
      {

        static const int TOPIC_FILTER_HASH = HashingUtils::HashString("TOPIC_FILTER");


        DimensionType GetDimensionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TOPIC_FILTER_HASH)
          {
            return DimensionType::TOPIC_FILTER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DimensionType>(hashCode);
          }

          return DimensionType::NOT_SET;
        }

        Aws::String GetNameForDimensionType(DimensionType enumValue)
        {
          switch(enumValue)
          {
          case DimensionType::TOPIC_FILTER:
            return "TOPIC_FILTER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DimensionTypeMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
