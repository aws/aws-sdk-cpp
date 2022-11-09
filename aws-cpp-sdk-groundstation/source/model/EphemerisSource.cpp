/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/EphemerisSource.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GroundStation
  {
    namespace Model
    {
      namespace EphemerisSourceMapper
      {

        static const int CUSTOMER_PROVIDED_HASH = HashingUtils::HashString("CUSTOMER_PROVIDED");
        static const int SPACE_TRACK_HASH = HashingUtils::HashString("SPACE_TRACK");


        EphemerisSource GetEphemerisSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CUSTOMER_PROVIDED_HASH)
          {
            return EphemerisSource::CUSTOMER_PROVIDED;
          }
          else if (hashCode == SPACE_TRACK_HASH)
          {
            return EphemerisSource::SPACE_TRACK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EphemerisSource>(hashCode);
          }

          return EphemerisSource::NOT_SET;
        }

        Aws::String GetNameForEphemerisSource(EphemerisSource enumValue)
        {
          switch(enumValue)
          {
          case EphemerisSource::CUSTOMER_PROVIDED:
            return "CUSTOMER_PROVIDED";
          case EphemerisSource::SPACE_TRACK:
            return "SPACE_TRACK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EphemerisSourceMapper
    } // namespace Model
  } // namespace GroundStation
} // namespace Aws
