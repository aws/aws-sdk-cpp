/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/PerformanceMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EFS
  {
    namespace Model
    {
      namespace PerformanceModeMapper
      {

        static const int generalPurpose_HASH = HashingUtils::HashString("generalPurpose");
        static const int maxIO_HASH = HashingUtils::HashString("maxIO");


        PerformanceMode GetPerformanceModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == generalPurpose_HASH)
          {
            return PerformanceMode::generalPurpose;
          }
          else if (hashCode == maxIO_HASH)
          {
            return PerformanceMode::maxIO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PerformanceMode>(hashCode);
          }

          return PerformanceMode::NOT_SET;
        }

        Aws::String GetNameForPerformanceMode(PerformanceMode enumValue)
        {
          switch(enumValue)
          {
          case PerformanceMode::generalPurpose:
            return "generalPurpose";
          case PerformanceMode::maxIO:
            return "maxIO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PerformanceModeMapper
    } // namespace Model
  } // namespace EFS
} // namespace Aws
