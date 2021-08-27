/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/M3u8PcrControl.h>
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
      namespace M3u8PcrControlMapper
      {

        static const int PCR_EVERY_PES_PACKET_HASH = HashingUtils::HashString("PCR_EVERY_PES_PACKET");
        static const int CONFIGURED_PCR_PERIOD_HASH = HashingUtils::HashString("CONFIGURED_PCR_PERIOD");


        M3u8PcrControl GetM3u8PcrControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PCR_EVERY_PES_PACKET_HASH)
          {
            return M3u8PcrControl::PCR_EVERY_PES_PACKET;
          }
          else if (hashCode == CONFIGURED_PCR_PERIOD_HASH)
          {
            return M3u8PcrControl::CONFIGURED_PCR_PERIOD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<M3u8PcrControl>(hashCode);
          }

          return M3u8PcrControl::NOT_SET;
        }

        Aws::String GetNameForM3u8PcrControl(M3u8PcrControl enumValue)
        {
          switch(enumValue)
          {
          case M3u8PcrControl::PCR_EVERY_PES_PACKET:
            return "PCR_EVERY_PES_PACKET";
          case M3u8PcrControl::CONFIGURED_PCR_PERIOD:
            return "CONFIGURED_PCR_PERIOD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace M3u8PcrControlMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
