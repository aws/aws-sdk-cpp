/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gameliftstreams/model/StreamClass.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLiftStreams
  {
    namespace Model
    {
      namespace StreamClassMapper
      {

        static const int gen4n_high_HASH = HashingUtils::HashString("gen4n_high");
        static const int gen4n_ultra_HASH = HashingUtils::HashString("gen4n_ultra");
        static const int gen4n_win2022_HASH = HashingUtils::HashString("gen4n_win2022");
        static const int gen5n_high_HASH = HashingUtils::HashString("gen5n_high");
        static const int gen5n_ultra_HASH = HashingUtils::HashString("gen5n_ultra");
        static const int gen5n_win2022_HASH = HashingUtils::HashString("gen5n_win2022");


        StreamClass GetStreamClassForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == gen4n_high_HASH)
          {
            return StreamClass::gen4n_high;
          }
          else if (hashCode == gen4n_ultra_HASH)
          {
            return StreamClass::gen4n_ultra;
          }
          else if (hashCode == gen4n_win2022_HASH)
          {
            return StreamClass::gen4n_win2022;
          }
          else if (hashCode == gen5n_high_HASH)
          {
            return StreamClass::gen5n_high;
          }
          else if (hashCode == gen5n_ultra_HASH)
          {
            return StreamClass::gen5n_ultra;
          }
          else if (hashCode == gen5n_win2022_HASH)
          {
            return StreamClass::gen5n_win2022;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StreamClass>(hashCode);
          }

          return StreamClass::NOT_SET;
        }

        Aws::String GetNameForStreamClass(StreamClass enumValue)
        {
          switch(enumValue)
          {
          case StreamClass::NOT_SET:
            return {};
          case StreamClass::gen4n_high:
            return "gen4n_high";
          case StreamClass::gen4n_ultra:
            return "gen4n_ultra";
          case StreamClass::gen4n_win2022:
            return "gen4n_win2022";
          case StreamClass::gen5n_high:
            return "gen5n_high";
          case StreamClass::gen5n_ultra:
            return "gen5n_ultra";
          case StreamClass::gen5n_win2022:
            return "gen5n_win2022";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StreamClassMapper
    } // namespace Model
  } // namespace GameLiftStreams
} // namespace Aws
