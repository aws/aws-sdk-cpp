/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/M2tsAudioStreamType.h>
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
      namespace M2tsAudioStreamTypeMapper
      {

        static const int ATSC_HASH = HashingUtils::HashString("ATSC");
        static const int DVB_HASH = HashingUtils::HashString("DVB");


        M2tsAudioStreamType GetM2tsAudioStreamTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ATSC_HASH)
          {
            return M2tsAudioStreamType::ATSC;
          }
          else if (hashCode == DVB_HASH)
          {
            return M2tsAudioStreamType::DVB;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<M2tsAudioStreamType>(hashCode);
          }

          return M2tsAudioStreamType::NOT_SET;
        }

        Aws::String GetNameForM2tsAudioStreamType(M2tsAudioStreamType enumValue)
        {
          switch(enumValue)
          {
          case M2tsAudioStreamType::ATSC:
            return "ATSC";
          case M2tsAudioStreamType::DVB:
            return "DVB";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace M2tsAudioStreamTypeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
