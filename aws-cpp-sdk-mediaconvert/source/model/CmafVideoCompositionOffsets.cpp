/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CmafVideoCompositionOffsets.h>
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
      namespace CmafVideoCompositionOffsetsMapper
      {

        static const int SIGNED_HASH = HashingUtils::HashString("SIGNED");
        static const int UNSIGNED_HASH = HashingUtils::HashString("UNSIGNED");


        CmafVideoCompositionOffsets GetCmafVideoCompositionOffsetsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SIGNED_HASH)
          {
            return CmafVideoCompositionOffsets::SIGNED;
          }
          else if (hashCode == UNSIGNED_HASH)
          {
            return CmafVideoCompositionOffsets::UNSIGNED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CmafVideoCompositionOffsets>(hashCode);
          }

          return CmafVideoCompositionOffsets::NOT_SET;
        }

        Aws::String GetNameForCmafVideoCompositionOffsets(CmafVideoCompositionOffsets enumValue)
        {
          switch(enumValue)
          {
          case CmafVideoCompositionOffsets::SIGNED:
            return "SIGNED";
          case CmafVideoCompositionOffsets::UNSIGNED:
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

      } // namespace CmafVideoCompositionOffsetsMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
