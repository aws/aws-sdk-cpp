/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-dashboards/model/VisualType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BCMDashboards
  {
    namespace Model
    {
      namespace VisualTypeMapper
      {

        static const int LINE_HASH = HashingUtils::HashString("LINE");
        static const int BAR_HASH = HashingUtils::HashString("BAR");
        static const int STACK_HASH = HashingUtils::HashString("STACK");


        VisualType GetVisualTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LINE_HASH)
          {
            return VisualType::LINE;
          }
          else if (hashCode == BAR_HASH)
          {
            return VisualType::BAR;
          }
          else if (hashCode == STACK_HASH)
          {
            return VisualType::STACK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VisualType>(hashCode);
          }

          return VisualType::NOT_SET;
        }

        Aws::String GetNameForVisualType(VisualType enumValue)
        {
          switch(enumValue)
          {
          case VisualType::NOT_SET:
            return {};
          case VisualType::LINE:
            return "LINE";
          case VisualType::BAR:
            return "BAR";
          case VisualType::STACK:
            return "STACK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VisualTypeMapper
    } // namespace Model
  } // namespace BCMDashboards
} // namespace Aws
