/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/H264TemporalAq.h>
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
      namespace H264TemporalAqMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        H264TemporalAq GetH264TemporalAqForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return H264TemporalAq::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return H264TemporalAq::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H264TemporalAq>(hashCode);
          }

          return H264TemporalAq::NOT_SET;
        }

        Aws::String GetNameForH264TemporalAq(H264TemporalAq enumValue)
        {
          switch(enumValue)
          {
          case H264TemporalAq::DISABLED:
            return "DISABLED";
          case H264TemporalAq::ENABLED:
            return "ENABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H264TemporalAqMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
