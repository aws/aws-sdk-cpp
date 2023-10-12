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

        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t SECONDS_HASH = ConstExprHashingUtils::HashString("SECONDS");
        static constexpr uint32_t MICRO_SECONDS_HASH = ConstExprHashingUtils::HashString("MICRO_SECONDS");
        static constexpr uint32_t MILLI_SECONDS_HASH = ConstExprHashingUtils::HashString("MILLI_SECONDS");
        static constexpr uint32_t BYTES_HASH = ConstExprHashingUtils::HashString("BYTES");
        static constexpr uint32_t KILO_BYTES_HASH = ConstExprHashingUtils::HashString("KILO_BYTES");
        static constexpr uint32_t MEGA_BYTES_HASH = ConstExprHashingUtils::HashString("MEGA_BYTES");
        static constexpr uint32_t GIGA_BYTES_HASH = ConstExprHashingUtils::HashString("GIGA_BYTES");
        static constexpr uint32_t TERA_BYTES_HASH = ConstExprHashingUtils::HashString("TERA_BYTES");
        static constexpr uint32_t BITS_HASH = ConstExprHashingUtils::HashString("BITS");
        static constexpr uint32_t KILO_BITS_HASH = ConstExprHashingUtils::HashString("KILO_BITS");
        static constexpr uint32_t MEGA_BITS_HASH = ConstExprHashingUtils::HashString("MEGA_BITS");
        static constexpr uint32_t GIGA_BITS_HASH = ConstExprHashingUtils::HashString("GIGA_BITS");
        static constexpr uint32_t TERA_BITS_HASH = ConstExprHashingUtils::HashString("TERA_BITS");
        static constexpr uint32_t PERCENT_HASH = ConstExprHashingUtils::HashString("PERCENT");
        static constexpr uint32_t COUNT_HASH = ConstExprHashingUtils::HashString("COUNT");
        static constexpr uint32_t BYTES_PER_SECOND_HASH = ConstExprHashingUtils::HashString("BYTES_PER_SECOND");
        static constexpr uint32_t KILO_BYTES_PER_SECOND_HASH = ConstExprHashingUtils::HashString("KILO_BYTES_PER_SECOND");
        static constexpr uint32_t MEGA_BYTES_PER_SECOND_HASH = ConstExprHashingUtils::HashString("MEGA_BYTES_PER_SECOND");
        static constexpr uint32_t GIGA_BYTES_PER_SECOND_HASH = ConstExprHashingUtils::HashString("GIGA_BYTES_PER_SECOND");
        static constexpr uint32_t TERA_BYTES_PER_SECOND_HASH = ConstExprHashingUtils::HashString("TERA_BYTES_PER_SECOND");
        static constexpr uint32_t BITS_PER_SECOND_HASH = ConstExprHashingUtils::HashString("BITS_PER_SECOND");
        static constexpr uint32_t KILO_BITS_PER_SECOND_HASH = ConstExprHashingUtils::HashString("KILO_BITS_PER_SECOND");
        static constexpr uint32_t MEGA_BITS_PER_SECOND_HASH = ConstExprHashingUtils::HashString("MEGA_BITS_PER_SECOND");
        static constexpr uint32_t GIGA_BITS_PER_SECOND_HASH = ConstExprHashingUtils::HashString("GIGA_BITS_PER_SECOND");
        static constexpr uint32_t TERA_BITS_PER_SECOND_HASH = ConstExprHashingUtils::HashString("TERA_BITS_PER_SECOND");
        static constexpr uint32_t COUNT_PER_SECOND_HASH = ConstExprHashingUtils::HashString("COUNT_PER_SECOND");


        Unit GetUnitForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case Unit::NOT_SET:
            return {};
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
