/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DolbyVisionProfile.h>
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
      namespace DolbyVisionProfileMapper
      {

        static const int PROFILE_5_HASH = HashingUtils::HashString("PROFILE_5");


        DolbyVisionProfile GetDolbyVisionProfileForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROFILE_5_HASH)
          {
            return DolbyVisionProfile::PROFILE_5;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DolbyVisionProfile>(hashCode);
          }

          return DolbyVisionProfile::NOT_SET;
        }

        Aws::String GetNameForDolbyVisionProfile(DolbyVisionProfile enumValue)
        {
          switch(enumValue)
          {
          case DolbyVisionProfile::PROFILE_5:
            return "PROFILE_5";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DolbyVisionProfileMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
