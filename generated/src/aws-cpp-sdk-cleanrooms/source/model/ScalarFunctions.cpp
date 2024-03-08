/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ScalarFunctions.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRooms
  {
    namespace Model
    {
      namespace ScalarFunctionsMapper
      {

        static const int TRUNC_HASH = HashingUtils::HashString("TRUNC");
        static const int ABS_HASH = HashingUtils::HashString("ABS");
        static const int CEILING_HASH = HashingUtils::HashString("CEILING");
        static const int FLOOR_HASH = HashingUtils::HashString("FLOOR");
        static const int LN_HASH = HashingUtils::HashString("LN");
        static const int LOG_HASH = HashingUtils::HashString("LOG");
        static const int ROUND_HASH = HashingUtils::HashString("ROUND");
        static const int SQRT_HASH = HashingUtils::HashString("SQRT");
        static const int CAST_HASH = HashingUtils::HashString("CAST");
        static const int LOWER_HASH = HashingUtils::HashString("LOWER");
        static const int RTRIM_HASH = HashingUtils::HashString("RTRIM");
        static const int UPPER_HASH = HashingUtils::HashString("UPPER");
        static const int COALESCE_HASH = HashingUtils::HashString("COALESCE");


        ScalarFunctions GetScalarFunctionsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRUNC_HASH)
          {
            return ScalarFunctions::TRUNC;
          }
          else if (hashCode == ABS_HASH)
          {
            return ScalarFunctions::ABS;
          }
          else if (hashCode == CEILING_HASH)
          {
            return ScalarFunctions::CEILING;
          }
          else if (hashCode == FLOOR_HASH)
          {
            return ScalarFunctions::FLOOR;
          }
          else if (hashCode == LN_HASH)
          {
            return ScalarFunctions::LN;
          }
          else if (hashCode == LOG_HASH)
          {
            return ScalarFunctions::LOG;
          }
          else if (hashCode == ROUND_HASH)
          {
            return ScalarFunctions::ROUND;
          }
          else if (hashCode == SQRT_HASH)
          {
            return ScalarFunctions::SQRT;
          }
          else if (hashCode == CAST_HASH)
          {
            return ScalarFunctions::CAST;
          }
          else if (hashCode == LOWER_HASH)
          {
            return ScalarFunctions::LOWER;
          }
          else if (hashCode == RTRIM_HASH)
          {
            return ScalarFunctions::RTRIM;
          }
          else if (hashCode == UPPER_HASH)
          {
            return ScalarFunctions::UPPER;
          }
          else if (hashCode == COALESCE_HASH)
          {
            return ScalarFunctions::COALESCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScalarFunctions>(hashCode);
          }

          return ScalarFunctions::NOT_SET;
        }

        Aws::String GetNameForScalarFunctions(ScalarFunctions enumValue)
        {
          switch(enumValue)
          {
          case ScalarFunctions::NOT_SET:
            return {};
          case ScalarFunctions::TRUNC:
            return "TRUNC";
          case ScalarFunctions::ABS:
            return "ABS";
          case ScalarFunctions::CEILING:
            return "CEILING";
          case ScalarFunctions::FLOOR:
            return "FLOOR";
          case ScalarFunctions::LN:
            return "LN";
          case ScalarFunctions::LOG:
            return "LOG";
          case ScalarFunctions::ROUND:
            return "ROUND";
          case ScalarFunctions::SQRT:
            return "SQRT";
          case ScalarFunctions::CAST:
            return "CAST";
          case ScalarFunctions::LOWER:
            return "LOWER";
          case ScalarFunctions::RTRIM:
            return "RTRIM";
          case ScalarFunctions::UPPER:
            return "UPPER";
          case ScalarFunctions::COALESCE:
            return "COALESCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScalarFunctionsMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
