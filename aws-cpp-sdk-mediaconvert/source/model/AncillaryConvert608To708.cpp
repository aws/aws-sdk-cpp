/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AncillaryConvert608To708.h>
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
      namespace AncillaryConvert608To708Mapper
      {

        static const int UPCONVERT_HASH = HashingUtils::HashString("UPCONVERT");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        AncillaryConvert608To708 GetAncillaryConvert608To708ForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UPCONVERT_HASH)
          {
            return AncillaryConvert608To708::UPCONVERT;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return AncillaryConvert608To708::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AncillaryConvert608To708>(hashCode);
          }

          return AncillaryConvert608To708::NOT_SET;
        }

        Aws::String GetNameForAncillaryConvert608To708(AncillaryConvert608To708 enumValue)
        {
          switch(enumValue)
          {
          case AncillaryConvert608To708::UPCONVERT:
            return "UPCONVERT";
          case AncillaryConvert608To708::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AncillaryConvert608To708Mapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
