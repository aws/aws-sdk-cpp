/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DvbSubtitlingType.h>
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
      namespace DvbSubtitlingTypeMapper
      {

        static const int HEARING_IMPAIRED_HASH = HashingUtils::HashString("HEARING_IMPAIRED");
        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");


        DvbSubtitlingType GetDvbSubtitlingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HEARING_IMPAIRED_HASH)
          {
            return DvbSubtitlingType::HEARING_IMPAIRED;
          }
          else if (hashCode == STANDARD_HASH)
          {
            return DvbSubtitlingType::STANDARD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DvbSubtitlingType>(hashCode);
          }

          return DvbSubtitlingType::NOT_SET;
        }

        Aws::String GetNameForDvbSubtitlingType(DvbSubtitlingType enumValue)
        {
          switch(enumValue)
          {
          case DvbSubtitlingType::HEARING_IMPAIRED:
            return "HEARING_IMPAIRED";
          case DvbSubtitlingType::STANDARD:
            return "STANDARD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DvbSubtitlingTypeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
