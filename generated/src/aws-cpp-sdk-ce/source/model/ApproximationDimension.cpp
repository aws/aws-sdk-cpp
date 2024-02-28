/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/ApproximationDimension.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostExplorer
  {
    namespace Model
    {
      namespace ApproximationDimensionMapper
      {

        static const int SERVICE_HASH = HashingUtils::HashString("SERVICE");
        static const int RESOURCE_HASH = HashingUtils::HashString("RESOURCE");


        ApproximationDimension GetApproximationDimensionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SERVICE_HASH)
          {
            return ApproximationDimension::SERVICE;
          }
          else if (hashCode == RESOURCE_HASH)
          {
            return ApproximationDimension::RESOURCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApproximationDimension>(hashCode);
          }

          return ApproximationDimension::NOT_SET;
        }

        Aws::String GetNameForApproximationDimension(ApproximationDimension enumValue)
        {
          switch(enumValue)
          {
          case ApproximationDimension::NOT_SET:
            return {};
          case ApproximationDimension::SERVICE:
            return "SERVICE";
          case ApproximationDimension::RESOURCE:
            return "RESOURCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApproximationDimensionMapper
    } // namespace Model
  } // namespace CostExplorer
} // namespace Aws
