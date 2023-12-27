/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/X12TransactionSet.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace B2BI
  {
    namespace Model
    {
      namespace X12TransactionSetMapper
      {

        static const int X12_110_HASH = HashingUtils::HashString("X12_110");
        static const int X12_180_HASH = HashingUtils::HashString("X12_180");
        static const int X12_204_HASH = HashingUtils::HashString("X12_204");
        static const int X12_210_HASH = HashingUtils::HashString("X12_210");
        static const int X12_214_HASH = HashingUtils::HashString("X12_214");
        static const int X12_215_HASH = HashingUtils::HashString("X12_215");
        static const int X12_310_HASH = HashingUtils::HashString("X12_310");
        static const int X12_315_HASH = HashingUtils::HashString("X12_315");
        static const int X12_322_HASH = HashingUtils::HashString("X12_322");
        static const int X12_404_HASH = HashingUtils::HashString("X12_404");
        static const int X12_410_HASH = HashingUtils::HashString("X12_410");
        static const int X12_820_HASH = HashingUtils::HashString("X12_820");
        static const int X12_824_HASH = HashingUtils::HashString("X12_824");
        static const int X12_830_HASH = HashingUtils::HashString("X12_830");
        static const int X12_846_HASH = HashingUtils::HashString("X12_846");
        static const int X12_850_HASH = HashingUtils::HashString("X12_850");
        static const int X12_852_HASH = HashingUtils::HashString("X12_852");
        static const int X12_855_HASH = HashingUtils::HashString("X12_855");
        static const int X12_856_HASH = HashingUtils::HashString("X12_856");
        static const int X12_860_HASH = HashingUtils::HashString("X12_860");
        static const int X12_861_HASH = HashingUtils::HashString("X12_861");
        static const int X12_864_HASH = HashingUtils::HashString("X12_864");
        static const int X12_940_HASH = HashingUtils::HashString("X12_940");
        static const int X12_990_HASH = HashingUtils::HashString("X12_990");
        static const int X12_997_HASH = HashingUtils::HashString("X12_997");


        X12TransactionSet GetX12TransactionSetForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == X12_110_HASH)
          {
            return X12TransactionSet::X12_110;
          }
          else if (hashCode == X12_180_HASH)
          {
            return X12TransactionSet::X12_180;
          }
          else if (hashCode == X12_204_HASH)
          {
            return X12TransactionSet::X12_204;
          }
          else if (hashCode == X12_210_HASH)
          {
            return X12TransactionSet::X12_210;
          }
          else if (hashCode == X12_214_HASH)
          {
            return X12TransactionSet::X12_214;
          }
          else if (hashCode == X12_215_HASH)
          {
            return X12TransactionSet::X12_215;
          }
          else if (hashCode == X12_310_HASH)
          {
            return X12TransactionSet::X12_310;
          }
          else if (hashCode == X12_315_HASH)
          {
            return X12TransactionSet::X12_315;
          }
          else if (hashCode == X12_322_HASH)
          {
            return X12TransactionSet::X12_322;
          }
          else if (hashCode == X12_404_HASH)
          {
            return X12TransactionSet::X12_404;
          }
          else if (hashCode == X12_410_HASH)
          {
            return X12TransactionSet::X12_410;
          }
          else if (hashCode == X12_820_HASH)
          {
            return X12TransactionSet::X12_820;
          }
          else if (hashCode == X12_824_HASH)
          {
            return X12TransactionSet::X12_824;
          }
          else if (hashCode == X12_830_HASH)
          {
            return X12TransactionSet::X12_830;
          }
          else if (hashCode == X12_846_HASH)
          {
            return X12TransactionSet::X12_846;
          }
          else if (hashCode == X12_850_HASH)
          {
            return X12TransactionSet::X12_850;
          }
          else if (hashCode == X12_852_HASH)
          {
            return X12TransactionSet::X12_852;
          }
          else if (hashCode == X12_855_HASH)
          {
            return X12TransactionSet::X12_855;
          }
          else if (hashCode == X12_856_HASH)
          {
            return X12TransactionSet::X12_856;
          }
          else if (hashCode == X12_860_HASH)
          {
            return X12TransactionSet::X12_860;
          }
          else if (hashCode == X12_861_HASH)
          {
            return X12TransactionSet::X12_861;
          }
          else if (hashCode == X12_864_HASH)
          {
            return X12TransactionSet::X12_864;
          }
          else if (hashCode == X12_940_HASH)
          {
            return X12TransactionSet::X12_940;
          }
          else if (hashCode == X12_990_HASH)
          {
            return X12TransactionSet::X12_990;
          }
          else if (hashCode == X12_997_HASH)
          {
            return X12TransactionSet::X12_997;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<X12TransactionSet>(hashCode);
          }

          return X12TransactionSet::NOT_SET;
        }

        Aws::String GetNameForX12TransactionSet(X12TransactionSet enumValue)
        {
          switch(enumValue)
          {
          case X12TransactionSet::NOT_SET:
            return {};
          case X12TransactionSet::X12_110:
            return "X12_110";
          case X12TransactionSet::X12_180:
            return "X12_180";
          case X12TransactionSet::X12_204:
            return "X12_204";
          case X12TransactionSet::X12_210:
            return "X12_210";
          case X12TransactionSet::X12_214:
            return "X12_214";
          case X12TransactionSet::X12_215:
            return "X12_215";
          case X12TransactionSet::X12_310:
            return "X12_310";
          case X12TransactionSet::X12_315:
            return "X12_315";
          case X12TransactionSet::X12_322:
            return "X12_322";
          case X12TransactionSet::X12_404:
            return "X12_404";
          case X12TransactionSet::X12_410:
            return "X12_410";
          case X12TransactionSet::X12_820:
            return "X12_820";
          case X12TransactionSet::X12_824:
            return "X12_824";
          case X12TransactionSet::X12_830:
            return "X12_830";
          case X12TransactionSet::X12_846:
            return "X12_846";
          case X12TransactionSet::X12_850:
            return "X12_850";
          case X12TransactionSet::X12_852:
            return "X12_852";
          case X12TransactionSet::X12_855:
            return "X12_855";
          case X12TransactionSet::X12_856:
            return "X12_856";
          case X12TransactionSet::X12_860:
            return "X12_860";
          case X12TransactionSet::X12_861:
            return "X12_861";
          case X12TransactionSet::X12_864:
            return "X12_864";
          case X12TransactionSet::X12_940:
            return "X12_940";
          case X12TransactionSet::X12_990:
            return "X12_990";
          case X12TransactionSet::X12_997:
            return "X12_997";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace X12TransactionSetMapper
    } // namespace Model
  } // namespace B2BI
} // namespace Aws
