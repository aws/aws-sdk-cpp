/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/Unit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMR
  {
    namespace Model
    {
      namespace UnitMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int SECONDS_HASH = HashingUtils::HashString("SECONDS");
        static const int MICRO_SECONDS_HASH = HashingUtils::HashString("MICRO_SECONDS");
        static const int MILLI_SECONDS_HASH = HashingUtils::HashString("MILLI_SECONDS");
        static const int BYTES_HASH = HashingUtils::HashString("BYTES");
        static const int KILO_BYTES_HASH = HashingUtils::HashString("KILO_BYTES");
        static const int MEGA_BYTES_HASH = HashingUtils::HashString("MEGA_BYTES");
        static const int GIGA_BYTES_HASH = HashingUtils::HashString("GIGA_BYTES");
        static const int TERA_BYTES_HASH = HashingUtils::HashString("TERA_BYTES");
        static const int BITS_HASH = HashingUtils::HashString("BITS");
        static const int KILO_BITS_HASH = HashingUtils::HashString("KILO_BITS");
        static const int MEGA_BITS_HASH = HashingUtils::HashString("MEGA_BITS");
        static const int GIGA_BITS_HASH = HashingUtils::HashString("GIGA_BITS");
        static const int TERA_BITS_HASH = HashingUtils::HashString("TERA_BITS");
        static const int PERCENT_HASH = HashingUtils::HashString("PERCENT");
        static const int COUNT_HASH = HashingUtils::HashString("COUNT");
        static const int BYTES_PER_SECOND_HASH = HashingUtils::HashString("BYTES_PER_SECOND");
        static const int KILO_BYTES_PER_SECOND_HASH = HashingUtils::HashString("KILO_BYTES_PER_SECOND");
        static const int MEGA_BYTES_PER_SECOND_HASH = HashingUtils::HashString("MEGA_BYTES_PER_SECOND");
        static const int GIGA_BYTES_PER_SECOND_HASH = HashingUtils::HashString("GIGA_BYTES_PER_SECOND");
        static const int TERA_BYTES_PER_SECOND_HASH = HashingUtils::HashString("TERA_BYTES_PER_SECOND");
        static const int BITS_PER_SECOND_HASH = HashingUtils::HashString("BITS_PER_SECOND");
        static const int KILO_BITS_PER_SECOND_HASH = HashingUtils::HashString("KILO_BITS_PER_SECOND");
        static const int MEGA_BITS_PER_SECOND_HASH = HashingUtils::HashString("MEGA_BITS_PER_SECOND");
        static const int GIGA_BITS_PER_SECOND_HASH = HashingUtils::HashString("GIGA_BITS_PER_SECOND");
        static const int TERA_BITS_PER_SECOND_HASH = HashingUtils::HashString("TERA_BITS_PER_SECOND");
        static const int COUNT_PER_SECOND_HASH = HashingUtils::HashString("COUNT_PER_SECOND");


        Unit GetUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return Unit::NONE;
          }
          else if (hashCode == SECONDS_HASH)
          {
            return Unit::SECONDS;
          }
          else if (hashCode == MICRO_SECONDS_HASH)
          {
            return Unit::MICRO_SECONDS;
          }
          else if (hashCode == MILLI_SECONDS_HASH)
          {
            return Unit::MILLI_SECONDS;
          }
          else if (hashCode == BYTES_HASH)
          {
            return Unit::BYTES;
          }
          else if (hashCode == KILO_BYTES_HASH)
          {
            return Unit::KILO_BYTES;
          }
          else if (hashCode == MEGA_BYTES_HASH)
          {
            return Unit::MEGA_BYTES;
          }
          else if (hashCode == GIGA_BYTES_HASH)
          {
            return Unit::GIGA_BYTES;
          }
          else if (hashCode == TERA_BYTES_HASH)
          {
            return Unit::TERA_BYTES;
          }
          else if (hashCode == BITS_HASH)
          {
            return Unit::BITS;
          }
          else if (hashCode == KILO_BITS_HASH)
          {
            return Unit::KILO_BITS;
          }
          else if (hashCode == MEGA_BITS_HASH)
          {
            return Unit::MEGA_BITS;
          }
          else if (hashCode == GIGA_BITS_HASH)
          {
            return Unit::GIGA_BITS;
          }
          else if (hashCode == TERA_BITS_HASH)
          {
            return Unit::TERA_BITS;
          }
          else if (hashCode == PERCENT_HASH)
          {
            return Unit::PERCENT;
          }
          else if (hashCode == COUNT_HASH)
          {
            return Unit::COUNT;
          }
          else if (hashCode == BYTES_PER_SECOND_HASH)
          {
            return Unit::BYTES_PER_SECOND;
          }
          else if (hashCode == KILO_BYTES_PER_SECOND_HASH)
          {
            return Unit::KILO_BYTES_PER_SECOND;
          }
          else if (hashCode == MEGA_BYTES_PER_SECOND_HASH)
          {
            return Unit::MEGA_BYTES_PER_SECOND;
          }
          else if (hashCode == GIGA_BYTES_PER_SECOND_HASH)
          {
            return Unit::GIGA_BYTES_PER_SECOND;
          }
          else if (hashCode == TERA_BYTES_PER_SECOND_HASH)
          {
            return Unit::TERA_BYTES_PER_SECOND;
          }
          else if (hashCode == BITS_PER_SECOND_HASH)
          {
            return Unit::BITS_PER_SECOND;
          }
          else if (hashCode == KILO_BITS_PER_SECOND_HASH)
          {
            return Unit::KILO_BITS_PER_SECOND;
          }
          else if (hashCode == MEGA_BITS_PER_SECOND_HASH)
          {
            return Unit::MEGA_BITS_PER_SECOND;
          }
          else if (hashCode == GIGA_BITS_PER_SECOND_HASH)
          {
            return Unit::GIGA_BITS_PER_SECOND;
          }
          else if (hashCode == TERA_BITS_PER_SECOND_HASH)
          {
            return Unit::TERA_BITS_PER_SECOND;
          }
          else if (hashCode == COUNT_PER_SECOND_HASH)
          {
            return Unit::COUNT_PER_SECOND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Unit>(hashCode);
          }

          return Unit::NOT_SET;
        }

        Aws::String GetNameForUnit(Unit enumValue)
        {
          switch(enumValue)
          {
          case Unit::NONE:
            return "NONE";
          case Unit::SECONDS:
            return "SECONDS";
          case Unit::MICRO_SECONDS:
            return "MICRO_SECONDS";
          case Unit::MILLI_SECONDS:
            return "MILLI_SECONDS";
          case Unit::BYTES:
            return "BYTES";
          case Unit::KILO_BYTES:
            return "KILO_BYTES";
          case Unit::MEGA_BYTES:
            return "MEGA_BYTES";
          case Unit::GIGA_BYTES:
            return "GIGA_BYTES";
          case Unit::TERA_BYTES:
            return "TERA_BYTES";
          case Unit::BITS:
            return "BITS";
          case Unit::KILO_BITS:
            return "KILO_BITS";
          case Unit::MEGA_BITS:
            return "MEGA_BITS";
          case Unit::GIGA_BITS:
            return "GIGA_BITS";
          case Unit::TERA_BITS:
            return "TERA_BITS";
          case Unit::PERCENT:
            return "PERCENT";
          case Unit::COUNT:
            return "COUNT";
          case Unit::BYTES_PER_SECOND:
            return "BYTES_PER_SECOND";
          case Unit::KILO_BYTES_PER_SECOND:
            return "KILO_BYTES_PER_SECOND";
          case Unit::MEGA_BYTES_PER_SECOND:
            return "MEGA_BYTES_PER_SECOND";
          case Unit::GIGA_BYTES_PER_SECOND:
            return "GIGA_BYTES_PER_SECOND";
          case Unit::TERA_BYTES_PER_SECOND:
            return "TERA_BYTES_PER_SECOND";
          case Unit::BITS_PER_SECOND:
            return "BITS_PER_SECOND";
          case Unit::KILO_BITS_PER_SECOND:
            return "KILO_BITS_PER_SECOND";
          case Unit::MEGA_BITS_PER_SECOND:
            return "MEGA_BITS_PER_SECOND";
          case Unit::GIGA_BITS_PER_SECOND:
            return "GIGA_BITS_PER_SECOND";
          case Unit::TERA_BITS_PER_SECOND:
            return "TERA_BITS_PER_SECOND";
          case Unit::COUNT_PER_SECOND:
            return "COUNT_PER_SECOND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UnitMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
