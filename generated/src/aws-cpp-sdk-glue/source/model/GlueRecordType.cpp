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

        static const int DATE_HASH = HashingUtils::HashString("DATE");
        static const int STRING_HASH = HashingUtils::HashString("STRING");
        static const int TIMESTAMP_HASH = HashingUtils::HashString("TIMESTAMP");
        static const int INT_HASH = HashingUtils::HashString("INT");
        static const int FLOAT_HASH = HashingUtils::HashString("FLOAT");
        static const int LONG_HASH = HashingUtils::HashString("LONG");
        static const int BIGDECIMAL_HASH = HashingUtils::HashString("BIGDECIMAL");
        static const int BYTE_HASH = HashingUtils::HashString("BYTE");
        static const int SHORT_HASH = HashingUtils::HashString("SHORT");
        static const int DOUBLE_HASH = HashingUtils::HashString("DOUBLE");


        GlueRecordType GetGlueRecordTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
