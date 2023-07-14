/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/AacRawFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace AacRawFormatMapper
      {

        static const int LATM_LOAS_HASH = HashingUtils::HashString("LATM_LOAS");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        AacRawFormat GetAacRawFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LATM_LOAS_HASH)
          {
            return AacRawFormat::LATM_LOAS;
          }
          else if (hashCode == NONE_HASH)
          {
            return AacRawFormat::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AacRawFormat>(hashCode);
          }

          return AacRawFormat::NOT_SET;
        }

        Aws::String GetNameForAacRawFormat(AacRawFormat enumValue)
        {
          switch(enumValue)
          {
          case AacRawFormat::LATM_LOAS:
            return "LATM_LOAS";
          case AacRawFormat::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AacRawFormatMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
