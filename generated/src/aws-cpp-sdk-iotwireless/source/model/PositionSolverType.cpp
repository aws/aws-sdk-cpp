/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/PositionSolverType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTWireless
  {
    namespace Model
    {
      namespace PositionSolverTypeMapper
      {

        static const int GNSS_HASH = HashingUtils::HashString("GNSS");


        PositionSolverType GetPositionSolverTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GNSS_HASH)
          {
            return PositionSolverType::GNSS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PositionSolverType>(hashCode);
          }

          return PositionSolverType::NOT_SET;
        }

        Aws::String GetNameForPositionSolverType(PositionSolverType enumValue)
        {
          switch(enumValue)
          {
          case PositionSolverType::NOT_SET:
            return {};
          case PositionSolverType::GNSS:
            return "GNSS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PositionSolverTypeMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
