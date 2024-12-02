/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/IvrRecordingTrack.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace IvrRecordingTrackMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");


        IvrRecordingTrack GetIvrRecordingTrackForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return IvrRecordingTrack::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IvrRecordingTrack>(hashCode);
          }

          return IvrRecordingTrack::NOT_SET;
        }

        Aws::String GetNameForIvrRecordingTrack(IvrRecordingTrack enumValue)
        {
          switch(enumValue)
          {
          case IvrRecordingTrack::NOT_SET:
            return {};
          case IvrRecordingTrack::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IvrRecordingTrackMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
