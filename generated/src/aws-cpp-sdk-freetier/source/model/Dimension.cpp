/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/freetier/model/Dimension.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FreeTier
  {
    namespace Model
    {
      namespace DimensionMapper
      {

        static const int SERVICE_HASH = HashingUtils::HashString("SERVICE");
        static const int OPERATION_HASH = HashingUtils::HashString("OPERATION");
        static const int USAGE_TYPE_HASH = HashingUtils::HashString("USAGE_TYPE");
        static const int REGION_HASH = HashingUtils::HashString("REGION");
        static const int FREE_TIER_TYPE_HASH = HashingUtils::HashString("FREE_TIER_TYPE");
        static const int DESCRIPTION_HASH = HashingUtils::HashString("DESCRIPTION");
        static const int USAGE_PERCENTAGE_HASH = HashingUtils::HashString("USAGE_PERCENTAGE");


        Dimension GetDimensionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SERVICE_HASH)
          {
            return Dimension::SERVICE;
          }
          else if (hashCode == OPERATION_HASH)
          {
            return Dimension::OPERATION;
          }
          else if (hashCode == USAGE_TYPE_HASH)
          {
            return Dimension::USAGE_TYPE;
          }
          else if (hashCode == REGION_HASH)
          {
            return Dimension::REGION;
          }
          else if (hashCode == FREE_TIER_TYPE_HASH)
          {
            return Dimension::FREE_TIER_TYPE;
          }
          else if (hashCode == DESCRIPTION_HASH)
          {
            return Dimension::DESCRIPTION;
          }
          else if (hashCode == USAGE_PERCENTAGE_HASH)
          {
            return Dimension::USAGE_PERCENTAGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Dimension>(hashCode);
          }

          return Dimension::NOT_SET;
        }

        Aws::String GetNameForDimension(Dimension enumValue)
        {
          switch(enumValue)
          {
          case Dimension::NOT_SET:
            return {};
          case Dimension::SERVICE:
            return "SERVICE";
          case Dimension::OPERATION:
            return "OPERATION";
          case Dimension::USAGE_TYPE:
            return "USAGE_TYPE";
          case Dimension::REGION:
            return "REGION";
          case Dimension::FREE_TIER_TYPE:
            return "FREE_TIER_TYPE";
          case Dimension::DESCRIPTION:
            return "DESCRIPTION";
          case Dimension::USAGE_PERCENTAGE:
            return "USAGE_PERCENTAGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DimensionMapper
    } // namespace Model
  } // namespace FreeTier
} // namespace Aws
