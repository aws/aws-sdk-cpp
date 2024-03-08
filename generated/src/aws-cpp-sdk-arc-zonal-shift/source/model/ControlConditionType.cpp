/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-zonal-shift/model/ControlConditionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ARCZonalShift
  {
    namespace Model
    {
      namespace ControlConditionTypeMapper
      {

        static const int CLOUDWATCH_HASH = HashingUtils::HashString("CLOUDWATCH");


        ControlConditionType GetControlConditionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLOUDWATCH_HASH)
          {
            return ControlConditionType::CLOUDWATCH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ControlConditionType>(hashCode);
          }

          return ControlConditionType::NOT_SET;
        }

        Aws::String GetNameForControlConditionType(ControlConditionType enumValue)
        {
          switch(enumValue)
          {
          case ControlConditionType::NOT_SET:
            return {};
          case ControlConditionType::CLOUDWATCH:
            return "CLOUDWATCH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ControlConditionTypeMapper
    } // namespace Model
  } // namespace ARCZonalShift
} // namespace Aws
