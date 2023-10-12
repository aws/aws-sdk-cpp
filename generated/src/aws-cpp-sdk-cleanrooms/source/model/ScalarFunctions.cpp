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

        static constexpr uint32_t TRUNC_HASH = ConstExprHashingUtils::HashString("TRUNC");
        static constexpr uint32_t ABS_HASH = ConstExprHashingUtils::HashString("ABS");
        static constexpr uint32_t CEILING_HASH = ConstExprHashingUtils::HashString("CEILING");
        static constexpr uint32_t FLOOR_HASH = ConstExprHashingUtils::HashString("FLOOR");
        static constexpr uint32_t LN_HASH = ConstExprHashingUtils::HashString("LN");
        static constexpr uint32_t LOG_HASH = ConstExprHashingUtils::HashString("LOG");
        static constexpr uint32_t ROUND_HASH = ConstExprHashingUtils::HashString("ROUND");
        static constexpr uint32_t SQRT_HASH = ConstExprHashingUtils::HashString("SQRT");
        static constexpr uint32_t CAST_HASH = ConstExprHashingUtils::HashString("CAST");
        static constexpr uint32_t LOWER_HASH = ConstExprHashingUtils::HashString("LOWER");
        static constexpr uint32_t RTRIM_HASH = ConstExprHashingUtils::HashString("RTRIM");
        static constexpr uint32_t UPPER_HASH = ConstExprHashingUtils::HashString("UPPER");
        static constexpr uint32_t COALESCE_HASH = ConstExprHashingUtils::HashString("COALESCE");


        ScalarFunctions GetScalarFunctionsForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
