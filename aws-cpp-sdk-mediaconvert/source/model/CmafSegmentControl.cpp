/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CmafSegmentControl.h>
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
      namespace CmafSegmentControlMapper
      {

        static const int SINGLE_FILE_HASH = HashingUtils::HashString("SINGLE_FILE");
        static const int SEGMENTED_FILES_HASH = HashingUtils::HashString("SEGMENTED_FILES");


        CmafSegmentControl GetCmafSegmentControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SINGLE_FILE_HASH)
          {
            return CmafSegmentControl::SINGLE_FILE;
          }
          else if (hashCode == SEGMENTED_FILES_HASH)
          {
            return CmafSegmentControl::SEGMENTED_FILES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CmafSegmentControl>(hashCode);
          }

          return CmafSegmentControl::NOT_SET;
        }

        Aws::String GetNameForCmafSegmentControl(CmafSegmentControl enumValue)
        {
          switch(enumValue)
          {
          case CmafSegmentControl::SINGLE_FILE:
            return "SINGLE_FILE";
          case CmafSegmentControl::SEGMENTED_FILES:
            return "SEGMENTED_FILES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CmafSegmentControlMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
