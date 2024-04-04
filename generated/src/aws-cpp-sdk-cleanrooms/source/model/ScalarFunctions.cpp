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

        static const int ABS_HASH = HashingUtils::HashString("ABS");
        static const int CAST_HASH = HashingUtils::HashString("CAST");
        static const int CEILING_HASH = HashingUtils::HashString("CEILING");
        static const int COALESCE_HASH = HashingUtils::HashString("COALESCE");
        static const int CONVERT_HASH = HashingUtils::HashString("CONVERT");
        static const int CURRENT_DATE_HASH = HashingUtils::HashString("CURRENT_DATE");
        static const int DATEADD_HASH = HashingUtils::HashString("DATEADD");
        static const int EXTRACT_HASH = HashingUtils::HashString("EXTRACT");
        static const int FLOOR_HASH = HashingUtils::HashString("FLOOR");
        static const int GETDATE_HASH = HashingUtils::HashString("GETDATE");
        static const int LN_HASH = HashingUtils::HashString("LN");
        static const int LOG_HASH = HashingUtils::HashString("LOG");
        static const int LOWER_HASH = HashingUtils::HashString("LOWER");
        static const int ROUND_HASH = HashingUtils::HashString("ROUND");
        static const int RTRIM_HASH = HashingUtils::HashString("RTRIM");
        static const int SQRT_HASH = HashingUtils::HashString("SQRT");
        static const int SUBSTRING_HASH = HashingUtils::HashString("SUBSTRING");
        static const int TO_CHAR_HASH = HashingUtils::HashString("TO_CHAR");
        static const int TO_DATE_HASH = HashingUtils::HashString("TO_DATE");
        static const int TO_NUMBER_HASH = HashingUtils::HashString("TO_NUMBER");
        static const int TO_TIMESTAMP_HASH = HashingUtils::HashString("TO_TIMESTAMP");
        static const int TRIM_HASH = HashingUtils::HashString("TRIM");
        static const int TRUNC_HASH = HashingUtils::HashString("TRUNC");
        static const int UPPER_HASH = HashingUtils::HashString("UPPER");


        ScalarFunctions GetScalarFunctionsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ABS_HASH)
          {
            return ScalarFunctions::ABS;
          }
          else if (hashCode == CAST_HASH)
          {
            return ScalarFunctions::CAST;
          }
          else if (hashCode == CEILING_HASH)
          {
            return ScalarFunctions::CEILING;
          }
          else if (hashCode == COALESCE_HASH)
          {
            return ScalarFunctions::COALESCE;
          }
          else if (hashCode == CONVERT_HASH)
          {
            return ScalarFunctions::CONVERT;
          }
          else if (hashCode == CURRENT_DATE_HASH)
          {
            return ScalarFunctions::CURRENT_DATE;
          }
          else if (hashCode == DATEADD_HASH)
          {
            return ScalarFunctions::DATEADD;
          }
          else if (hashCode == EXTRACT_HASH)
          {
            return ScalarFunctions::EXTRACT;
          }
          else if (hashCode == FLOOR_HASH)
          {
            return ScalarFunctions::FLOOR;
          }
          else if (hashCode == GETDATE_HASH)
          {
            return ScalarFunctions::GETDATE;
          }
          else if (hashCode == LN_HASH)
          {
            return ScalarFunctions::LN;
          }
          else if (hashCode == LOG_HASH)
          {
            return ScalarFunctions::LOG;
          }
          else if (hashCode == LOWER_HASH)
          {
            return ScalarFunctions::LOWER;
          }
          else if (hashCode == ROUND_HASH)
          {
            return ScalarFunctions::ROUND;
          }
          else if (hashCode == RTRIM_HASH)
          {
            return ScalarFunctions::RTRIM;
          }
          else if (hashCode == SQRT_HASH)
          {
            return ScalarFunctions::SQRT;
          }
          else if (hashCode == SUBSTRING_HASH)
          {
            return ScalarFunctions::SUBSTRING;
          }
          else if (hashCode == TO_CHAR_HASH)
          {
            return ScalarFunctions::TO_CHAR;
          }
          else if (hashCode == TO_DATE_HASH)
          {
            return ScalarFunctions::TO_DATE;
          }
          else if (hashCode == TO_NUMBER_HASH)
          {
            return ScalarFunctions::TO_NUMBER;
          }
          else if (hashCode == TO_TIMESTAMP_HASH)
          {
            return ScalarFunctions::TO_TIMESTAMP;
          }
          else if (hashCode == TRIM_HASH)
          {
            return ScalarFunctions::TRIM;
          }
          else if (hashCode == TRUNC_HASH)
          {
            return ScalarFunctions::TRUNC;
          }
          else if (hashCode == UPPER_HASH)
          {
            return ScalarFunctions::UPPER;
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
          case ScalarFunctions::ABS:
            return "ABS";
          case ScalarFunctions::CAST:
            return "CAST";
          case ScalarFunctions::CEILING:
            return "CEILING";
          case ScalarFunctions::COALESCE:
            return "COALESCE";
          case ScalarFunctions::CONVERT:
            return "CONVERT";
          case ScalarFunctions::CURRENT_DATE:
            return "CURRENT_DATE";
          case ScalarFunctions::DATEADD:
            return "DATEADD";
          case ScalarFunctions::EXTRACT:
            return "EXTRACT";
          case ScalarFunctions::FLOOR:
            return "FLOOR";
          case ScalarFunctions::GETDATE:
            return "GETDATE";
          case ScalarFunctions::LN:
            return "LN";
          case ScalarFunctions::LOG:
            return "LOG";
          case ScalarFunctions::LOWER:
            return "LOWER";
          case ScalarFunctions::ROUND:
            return "ROUND";
          case ScalarFunctions::RTRIM:
            return "RTRIM";
          case ScalarFunctions::SQRT:
            return "SQRT";
          case ScalarFunctions::SUBSTRING:
            return "SUBSTRING";
          case ScalarFunctions::TO_CHAR:
            return "TO_CHAR";
          case ScalarFunctions::TO_DATE:
            return "TO_DATE";
          case ScalarFunctions::TO_NUMBER:
            return "TO_NUMBER";
          case ScalarFunctions::TO_TIMESTAMP:
            return "TO_TIMESTAMP";
          case ScalarFunctions::TRIM:
            return "TRIM";
          case ScalarFunctions::TRUNC:
            return "TRUNC";
          case ScalarFunctions::UPPER:
            return "UPPER";
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
