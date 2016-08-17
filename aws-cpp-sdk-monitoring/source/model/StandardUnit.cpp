/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/monitoring/model/StandardUnit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatch
  {
    namespace Model
    {
      namespace StandardUnitMapper
      {

        static const int Seconds_HASH = HashingUtils::HashString("Seconds");
        static const int Microseconds_HASH = HashingUtils::HashString("Microseconds");
        static const int Milliseconds_HASH = HashingUtils::HashString("Milliseconds");
        static const int Bytes_HASH = HashingUtils::HashString("Bytes");
        static const int Kilobytes_HASH = HashingUtils::HashString("Kilobytes");
        static const int Megabytes_HASH = HashingUtils::HashString("Megabytes");
        static const int Gigabytes_HASH = HashingUtils::HashString("Gigabytes");
        static const int Terabytes_HASH = HashingUtils::HashString("Terabytes");
        static const int Bits_HASH = HashingUtils::HashString("Bits");
        static const int Kilobits_HASH = HashingUtils::HashString("Kilobits");
        static const int Megabits_HASH = HashingUtils::HashString("Megabits");
        static const int Gigabits_HASH = HashingUtils::HashString("Gigabits");
        static const int Terabits_HASH = HashingUtils::HashString("Terabits");
        static const int Percent_HASH = HashingUtils::HashString("Percent");
        static const int Count_HASH = HashingUtils::HashString("Count");
        static const int Bytes_Second_HASH = HashingUtils::HashString("Bytes/Second");
        static const int Kilobytes_Second_HASH = HashingUtils::HashString("Kilobytes/Second");
        static const int Megabytes_Second_HASH = HashingUtils::HashString("Megabytes/Second");
        static const int Gigabytes_Second_HASH = HashingUtils::HashString("Gigabytes/Second");
        static const int Terabytes_Second_HASH = HashingUtils::HashString("Terabytes/Second");
        static const int Bits_Second_HASH = HashingUtils::HashString("Bits/Second");
        static const int Kilobits_Second_HASH = HashingUtils::HashString("Kilobits/Second");
        static const int Megabits_Second_HASH = HashingUtils::HashString("Megabits/Second");
        static const int Gigabits_Second_HASH = HashingUtils::HashString("Gigabits/Second");
        static const int Terabits_Second_HASH = HashingUtils::HashString("Terabits/Second");
        static const int Count_Second_HASH = HashingUtils::HashString("Count/Second");
        static const int None_HASH = HashingUtils::HashString("None");


        StandardUnit GetStandardUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Seconds_HASH)
          {
            return StandardUnit::Seconds;
          }
          else if (hashCode == Microseconds_HASH)
          {
            return StandardUnit::Microseconds;
          }
          else if (hashCode == Milliseconds_HASH)
          {
            return StandardUnit::Milliseconds;
          }
          else if (hashCode == Bytes_HASH)
          {
            return StandardUnit::Bytes;
          }
          else if (hashCode == Kilobytes_HASH)
          {
            return StandardUnit::Kilobytes;
          }
          else if (hashCode == Megabytes_HASH)
          {
            return StandardUnit::Megabytes;
          }
          else if (hashCode == Gigabytes_HASH)
          {
            return StandardUnit::Gigabytes;
          }
          else if (hashCode == Terabytes_HASH)
          {
            return StandardUnit::Terabytes;
          }
          else if (hashCode == Bits_HASH)
          {
            return StandardUnit::Bits;
          }
          else if (hashCode == Kilobits_HASH)
          {
            return StandardUnit::Kilobits;
          }
          else if (hashCode == Megabits_HASH)
          {
            return StandardUnit::Megabits;
          }
          else if (hashCode == Gigabits_HASH)
          {
            return StandardUnit::Gigabits;
          }
          else if (hashCode == Terabits_HASH)
          {
            return StandardUnit::Terabits;
          }
          else if (hashCode == Percent_HASH)
          {
            return StandardUnit::Percent;
          }
          else if (hashCode == Count_HASH)
          {
            return StandardUnit::Count;
          }
          else if (hashCode == Bytes_Second_HASH)
          {
            return StandardUnit::Bytes_Second;
          }
          else if (hashCode == Kilobytes_Second_HASH)
          {
            return StandardUnit::Kilobytes_Second;
          }
          else if (hashCode == Megabytes_Second_HASH)
          {
            return StandardUnit::Megabytes_Second;
          }
          else if (hashCode == Gigabytes_Second_HASH)
          {
            return StandardUnit::Gigabytes_Second;
          }
          else if (hashCode == Terabytes_Second_HASH)
          {
            return StandardUnit::Terabytes_Second;
          }
          else if (hashCode == Bits_Second_HASH)
          {
            return StandardUnit::Bits_Second;
          }
          else if (hashCode == Kilobits_Second_HASH)
          {
            return StandardUnit::Kilobits_Second;
          }
          else if (hashCode == Megabits_Second_HASH)
          {
            return StandardUnit::Megabits_Second;
          }
          else if (hashCode == Gigabits_Second_HASH)
          {
            return StandardUnit::Gigabits_Second;
          }
          else if (hashCode == Terabits_Second_HASH)
          {
            return StandardUnit::Terabits_Second;
          }
          else if (hashCode == Count_Second_HASH)
          {
            return StandardUnit::Count_Second;
          }
          else if (hashCode == None_HASH)
          {
            return StandardUnit::None;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StandardUnit>(hashCode);
          }

          return StandardUnit::NOT_SET;
        }

        Aws::String GetNameForStandardUnit(StandardUnit enumValue)
        {
          switch(enumValue)
          {
          case StandardUnit::Seconds:
            return "Seconds";
          case StandardUnit::Microseconds:
            return "Microseconds";
          case StandardUnit::Milliseconds:
            return "Milliseconds";
          case StandardUnit::Bytes:
            return "Bytes";
          case StandardUnit::Kilobytes:
            return "Kilobytes";
          case StandardUnit::Megabytes:
            return "Megabytes";
          case StandardUnit::Gigabytes:
            return "Gigabytes";
          case StandardUnit::Terabytes:
            return "Terabytes";
          case StandardUnit::Bits:
            return "Bits";
          case StandardUnit::Kilobits:
            return "Kilobits";
          case StandardUnit::Megabits:
            return "Megabits";
          case StandardUnit::Gigabits:
            return "Gigabits";
          case StandardUnit::Terabits:
            return "Terabits";
          case StandardUnit::Percent:
            return "Percent";
          case StandardUnit::Count:
            return "Count";
          case StandardUnit::Bytes_Second:
            return "Bytes/Second";
          case StandardUnit::Kilobytes_Second:
            return "Kilobytes/Second";
          case StandardUnit::Megabytes_Second:
            return "Megabytes/Second";
          case StandardUnit::Gigabytes_Second:
            return "Gigabytes/Second";
          case StandardUnit::Terabytes_Second:
            return "Terabytes/Second";
          case StandardUnit::Bits_Second:
            return "Bits/Second";
          case StandardUnit::Kilobits_Second:
            return "Kilobits/Second";
          case StandardUnit::Megabits_Second:
            return "Megabits/Second";
          case StandardUnit::Gigabits_Second:
            return "Gigabits/Second";
          case StandardUnit::Terabits_Second:
            return "Terabits/Second";
          case StandardUnit::Count_Second:
            return "Count/Second";
          case StandardUnit::None:
            return "None";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace StandardUnitMapper
    } // namespace Model
  } // namespace CloudWatch
} // namespace Aws
