/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/MultitrackMaximumResolution.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IVS
  {
    namespace Model
    {
      namespace MultitrackMaximumResolutionMapper
      {

        static const int SD_HASH = HashingUtils::HashString("SD");
        static const int HD_HASH = HashingUtils::HashString("HD");
        static const int FULL_HD_HASH = HashingUtils::HashString("FULL_HD");


        MultitrackMaximumResolution GetMultitrackMaximumResolutionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SD_HASH)
          {
            return MultitrackMaximumResolution::SD;
          }
          else if (hashCode == HD_HASH)
          {
            return MultitrackMaximumResolution::HD;
          }
          else if (hashCode == FULL_HD_HASH)
          {
            return MultitrackMaximumResolution::FULL_HD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MultitrackMaximumResolution>(hashCode);
          }

          return MultitrackMaximumResolution::NOT_SET;
        }

        Aws::String GetNameForMultitrackMaximumResolution(MultitrackMaximumResolution enumValue)
        {
          switch(enumValue)
          {
          case MultitrackMaximumResolution::NOT_SET:
            return {};
          case MultitrackMaximumResolution::SD:
            return "SD";
          case MultitrackMaximumResolution::HD:
            return "HD";
          case MultitrackMaximumResolution::FULL_HD:
            return "FULL_HD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MultitrackMaximumResolutionMapper
    } // namespace Model
  } // namespace IVS
} // namespace Aws
