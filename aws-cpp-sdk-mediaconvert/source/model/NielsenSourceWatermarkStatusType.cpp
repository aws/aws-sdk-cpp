/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/NielsenSourceWatermarkStatusType.h>
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
      namespace NielsenSourceWatermarkStatusTypeMapper
      {

        static const int CLEAN_HASH = HashingUtils::HashString("CLEAN");
        static const int WATERMARKED_HASH = HashingUtils::HashString("WATERMARKED");


        NielsenSourceWatermarkStatusType GetNielsenSourceWatermarkStatusTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLEAN_HASH)
          {
            return NielsenSourceWatermarkStatusType::CLEAN;
          }
          else if (hashCode == WATERMARKED_HASH)
          {
            return NielsenSourceWatermarkStatusType::WATERMARKED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NielsenSourceWatermarkStatusType>(hashCode);
          }

          return NielsenSourceWatermarkStatusType::NOT_SET;
        }

        Aws::String GetNameForNielsenSourceWatermarkStatusType(NielsenSourceWatermarkStatusType enumValue)
        {
          switch(enumValue)
          {
          case NielsenSourceWatermarkStatusType::CLEAN:
            return "CLEAN";
          case NielsenSourceWatermarkStatusType::WATERMARKED:
            return "WATERMARKED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NielsenSourceWatermarkStatusTypeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
