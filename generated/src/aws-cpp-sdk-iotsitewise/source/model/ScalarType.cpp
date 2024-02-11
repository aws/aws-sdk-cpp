/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ScalarType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTSiteWise
  {
    namespace Model
    {
      namespace ScalarTypeMapper
      {

        static const int BOOLEAN_HASH = HashingUtils::HashString("BOOLEAN");
        static const int INT_HASH = HashingUtils::HashString("INT");
        static const int DOUBLE_HASH = HashingUtils::HashString("DOUBLE");
        static const int TIMESTAMP_HASH = HashingUtils::HashString("TIMESTAMP");
        static const int STRING_HASH = HashingUtils::HashString("STRING");


        ScalarType GetScalarTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BOOLEAN_HASH)
          {
            return ScalarType::BOOLEAN;
          }
          else if (hashCode == INT_HASH)
          {
            return ScalarType::INT;
          }
          else if (hashCode == DOUBLE_HASH)
          {
            return ScalarType::DOUBLE;
          }
          else if (hashCode == TIMESTAMP_HASH)
          {
            return ScalarType::TIMESTAMP;
          }
          else if (hashCode == STRING_HASH)
          {
            return ScalarType::STRING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScalarType>(hashCode);
          }

          return ScalarType::NOT_SET;
        }

        Aws::String GetNameForScalarType(ScalarType enumValue)
        {
          switch(enumValue)
          {
          case ScalarType::NOT_SET:
            return {};
          case ScalarType::BOOLEAN:
            return "BOOLEAN";
          case ScalarType::INT:
            return "INT";
          case ScalarType::DOUBLE:
            return "DOUBLE";
          case ScalarType::TIMESTAMP:
            return "TIMESTAMP";
          case ScalarType::STRING:
            return "STRING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScalarTypeMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
