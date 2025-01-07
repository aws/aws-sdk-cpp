/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/AggregatorFilterType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConfigService
  {
    namespace Model
    {
      namespace AggregatorFilterTypeMapper
      {

        static const int INCLUDE_HASH = HashingUtils::HashString("INCLUDE");


        AggregatorFilterType GetAggregatorFilterTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INCLUDE_HASH)
          {
            return AggregatorFilterType::INCLUDE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AggregatorFilterType>(hashCode);
          }

          return AggregatorFilterType::NOT_SET;
        }

        Aws::String GetNameForAggregatorFilterType(AggregatorFilterType enumValue)
        {
          switch(enumValue)
          {
          case AggregatorFilterType::NOT_SET:
            return {};
          case AggregatorFilterType::INCLUDE:
            return "INCLUDE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AggregatorFilterTypeMapper
    } // namespace Model
  } // namespace ConfigService
} // namespace Aws
