/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage/model/UtcTiming.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaPackage
  {
    namespace Model
    {
      namespace UtcTimingMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int HTTP_HEAD_HASH = HashingUtils::HashString("HTTP-HEAD");
        static const int HTTP_ISO_HASH = HashingUtils::HashString("HTTP-ISO");


        UtcTiming GetUtcTimingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return UtcTiming::NONE;
          }
          else if (hashCode == HTTP_HEAD_HASH)
          {
            return UtcTiming::HTTP_HEAD;
          }
          else if (hashCode == HTTP_ISO_HASH)
          {
            return UtcTiming::HTTP_ISO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UtcTiming>(hashCode);
          }

          return UtcTiming::NOT_SET;
        }

        Aws::String GetNameForUtcTiming(UtcTiming enumValue)
        {
          switch(enumValue)
          {
          case UtcTiming::NONE:
            return "NONE";
          case UtcTiming::HTTP_HEAD:
            return "HTTP-HEAD";
          case UtcTiming::HTTP_ISO:
            return "HTTP-ISO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UtcTimingMapper
    } // namespace Model
  } // namespace MediaPackage
} // namespace Aws
