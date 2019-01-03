/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
