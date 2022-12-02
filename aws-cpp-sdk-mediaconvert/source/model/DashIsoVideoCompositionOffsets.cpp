/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DashIsoVideoCompositionOffsets.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace DashIsoVideoCompositionOffsetsMapper
      {

        static const int SIGNED_HASH = HashingUtils::HashString("SIGNED");
        static const int UNSIGNED_HASH = HashingUtils::HashString("UNSIGNED");


        DashIsoVideoCompositionOffsets GetDashIsoVideoCompositionOffsetsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SIGNED_HASH)
          {
            return DashIsoVideoCompositionOffsets::SIGNED;
          }
          else if (hashCode == UNSIGNED_HASH)
          {
            return DashIsoVideoCompositionOffsets::UNSIGNED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DashIsoVideoCompositionOffsets>(hashCode);
          }

          return DashIsoVideoCompositionOffsets::NOT_SET;
        }

        Aws::String GetNameForDashIsoVideoCompositionOffsets(DashIsoVideoCompositionOffsets enumValue)
        {
          switch(enumValue)
          {
          case DashIsoVideoCompositionOffsets::SIGNED:
            return "SIGNED";
          case DashIsoVideoCompositionOffsets::UNSIGNED:
            return "UNSIGNED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DashIsoVideoCompositionOffsetsMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
