/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GlueRecordType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace GlueRecordTypeMapper
      {

        static constexpr uint32_t DATE_HASH = ConstExprHashingUtils::HashString("DATE");
        static constexpr uint32_t STRING_HASH = ConstExprHashingUtils::HashString("STRING");
        static constexpr uint32_t TIMESTAMP_HASH = ConstExprHashingUtils::HashString("TIMESTAMP");
        static constexpr uint32_t INT_HASH = ConstExprHashingUtils::HashString("INT");
        static constexpr uint32_t FLOAT_HASH = ConstExprHashingUtils::HashString("FLOAT");
        static constexpr uint32_t LONG_HASH = ConstExprHashingUtils::HashString("LONG");
        static constexpr uint32_t BIGDECIMAL_HASH = ConstExprHashingUtils::HashString("BIGDECIMAL");
        static constexpr uint32_t BYTE_HASH = ConstExprHashingUtils::HashString("BYTE");
        static constexpr uint32_t SHORT_HASH = ConstExprHashingUtils::HashString("SHORT");
        static constexpr uint32_t DOUBLE_HASH = ConstExprHashingUtils::HashString("DOUBLE");


        GlueRecordType GetGlueRecordTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DATE_HASH)
          {
            return GlueRecordType::DATE;
          }
          else if (hashCode == STRING_HASH)
          {
            return GlueRecordType::STRING;
          }
          else if (hashCode == TIMESTAMP_HASH)
          {
            return GlueRecordType::TIMESTAMP;
          }
          else if (hashCode == INT_HASH)
          {
            return GlueRecordType::INT;
          }
          else if (hashCode == FLOAT_HASH)
          {
            return GlueRecordType::FLOAT;
          }
          else if (hashCode == LONG_HASH)
          {
            return GlueRecordType::LONG;
          }
          else if (hashCode == BIGDECIMAL_HASH)
          {
            return GlueRecordType::BIGDECIMAL;
          }
          else if (hashCode == BYTE_HASH)
          {
            return GlueRecordType::BYTE;
          }
          else if (hashCode == SHORT_HASH)
          {
            return GlueRecordType::SHORT;
          }
          else if (hashCode == DOUBLE_HASH)
          {
            return GlueRecordType::DOUBLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GlueRecordType>(hashCode);
          }

          return GlueRecordType::NOT_SET;
        }

        Aws::String GetNameForGlueRecordType(GlueRecordType enumValue)
        {
          switch(enumValue)
          {
          case GlueRecordType::NOT_SET:
            return {};
          case GlueRecordType::DATE:
            return "DATE";
          case GlueRecordType::STRING:
            return "STRING";
          case GlueRecordType::TIMESTAMP:
            return "TIMESTAMP";
          case GlueRecordType::INT:
            return "INT";
          case GlueRecordType::FLOAT:
            return "FLOAT";
          case GlueRecordType::LONG:
            return "LONG";
          case GlueRecordType::BIGDECIMAL:
            return "BIGDECIMAL";
          case GlueRecordType::BYTE:
            return "BYTE";
          case GlueRecordType::SHORT:
            return "SHORT";
          case GlueRecordType::DOUBLE:
            return "DOUBLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GlueRecordTypeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
