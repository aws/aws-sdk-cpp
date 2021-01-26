/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/H265UnregisteredSeiTimecode.h>
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
      namespace H265UnregisteredSeiTimecodeMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        H265UnregisteredSeiTimecode GetH265UnregisteredSeiTimecodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return H265UnregisteredSeiTimecode::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return H265UnregisteredSeiTimecode::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H265UnregisteredSeiTimecode>(hashCode);
          }

          return H265UnregisteredSeiTimecode::NOT_SET;
        }

        Aws::String GetNameForH265UnregisteredSeiTimecode(H265UnregisteredSeiTimecode enumValue)
        {
          switch(enumValue)
          {
          case H265UnregisteredSeiTimecode::DISABLED:
            return "DISABLED";
          case H265UnregisteredSeiTimecode::ENABLED:
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

      } // namespace H265UnregisteredSeiTimecodeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
