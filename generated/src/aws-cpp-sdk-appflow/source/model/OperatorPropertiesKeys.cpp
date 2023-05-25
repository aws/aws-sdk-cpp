/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/OperatorPropertiesKeys.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Appflow
  {
    namespace Model
    {
      namespace OperatorPropertiesKeysMapper
      {

        static const int VALUE_HASH = HashingUtils::HashString("VALUE");
        static const int VALUES_HASH = HashingUtils::HashString("VALUES");
        static const int DATA_TYPE_HASH = HashingUtils::HashString("DATA_TYPE");
        static const int UPPER_BOUND_HASH = HashingUtils::HashString("UPPER_BOUND");
        static const int LOWER_BOUND_HASH = HashingUtils::HashString("LOWER_BOUND");
        static const int SOURCE_DATA_TYPE_HASH = HashingUtils::HashString("SOURCE_DATA_TYPE");
        static const int DESTINATION_DATA_TYPE_HASH = HashingUtils::HashString("DESTINATION_DATA_TYPE");
        static const int VALIDATION_ACTION_HASH = HashingUtils::HashString("VALIDATION_ACTION");
        static const int MASK_VALUE_HASH = HashingUtils::HashString("MASK_VALUE");
        static const int MASK_LENGTH_HASH = HashingUtils::HashString("MASK_LENGTH");
        static const int TRUNCATE_LENGTH_HASH = HashingUtils::HashString("TRUNCATE_LENGTH");
        static const int MATH_OPERATION_FIELDS_ORDER_HASH = HashingUtils::HashString("MATH_OPERATION_FIELDS_ORDER");
        static const int CONCAT_FORMAT_HASH = HashingUtils::HashString("CONCAT_FORMAT");
        static const int SUBFIELD_CATEGORY_MAP_HASH = HashingUtils::HashString("SUBFIELD_CATEGORY_MAP");
        static const int EXCLUDE_SOURCE_FIELDS_LIST_HASH = HashingUtils::HashString("EXCLUDE_SOURCE_FIELDS_LIST");
        static const int INCLUDE_NEW_FIELDS_HASH = HashingUtils::HashString("INCLUDE_NEW_FIELDS");
        static const int ORDERED_PARTITION_KEYS_LIST_HASH = HashingUtils::HashString("ORDERED_PARTITION_KEYS_LIST");


        OperatorPropertiesKeys GetOperatorPropertiesKeysForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VALUE_HASH)
          {
            return OperatorPropertiesKeys::VALUE;
          }
          else if (hashCode == VALUES_HASH)
          {
            return OperatorPropertiesKeys::VALUES;
          }
          else if (hashCode == DATA_TYPE_HASH)
          {
            return OperatorPropertiesKeys::DATA_TYPE;
          }
          else if (hashCode == UPPER_BOUND_HASH)
          {
            return OperatorPropertiesKeys::UPPER_BOUND;
          }
          else if (hashCode == LOWER_BOUND_HASH)
          {
            return OperatorPropertiesKeys::LOWER_BOUND;
          }
          else if (hashCode == SOURCE_DATA_TYPE_HASH)
          {
            return OperatorPropertiesKeys::SOURCE_DATA_TYPE;
          }
          else if (hashCode == DESTINATION_DATA_TYPE_HASH)
          {
            return OperatorPropertiesKeys::DESTINATION_DATA_TYPE;
          }
          else if (hashCode == VALIDATION_ACTION_HASH)
          {
            return OperatorPropertiesKeys::VALIDATION_ACTION;
          }
          else if (hashCode == MASK_VALUE_HASH)
          {
            return OperatorPropertiesKeys::MASK_VALUE;
          }
          else if (hashCode == MASK_LENGTH_HASH)
          {
            return OperatorPropertiesKeys::MASK_LENGTH;
          }
          else if (hashCode == TRUNCATE_LENGTH_HASH)
          {
            return OperatorPropertiesKeys::TRUNCATE_LENGTH;
          }
          else if (hashCode == MATH_OPERATION_FIELDS_ORDER_HASH)
          {
            return OperatorPropertiesKeys::MATH_OPERATION_FIELDS_ORDER;
          }
          else if (hashCode == CONCAT_FORMAT_HASH)
          {
            return OperatorPropertiesKeys::CONCAT_FORMAT;
          }
          else if (hashCode == SUBFIELD_CATEGORY_MAP_HASH)
          {
            return OperatorPropertiesKeys::SUBFIELD_CATEGORY_MAP;
          }
          else if (hashCode == EXCLUDE_SOURCE_FIELDS_LIST_HASH)
          {
            return OperatorPropertiesKeys::EXCLUDE_SOURCE_FIELDS_LIST;
          }
          else if (hashCode == INCLUDE_NEW_FIELDS_HASH)
          {
            return OperatorPropertiesKeys::INCLUDE_NEW_FIELDS;
          }
          else if (hashCode == ORDERED_PARTITION_KEYS_LIST_HASH)
          {
            return OperatorPropertiesKeys::ORDERED_PARTITION_KEYS_LIST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OperatorPropertiesKeys>(hashCode);
          }

          return OperatorPropertiesKeys::NOT_SET;
        }

        Aws::String GetNameForOperatorPropertiesKeys(OperatorPropertiesKeys enumValue)
        {
          switch(enumValue)
          {
          case OperatorPropertiesKeys::VALUE:
            return "VALUE";
          case OperatorPropertiesKeys::VALUES:
            return "VALUES";
          case OperatorPropertiesKeys::DATA_TYPE:
            return "DATA_TYPE";
          case OperatorPropertiesKeys::UPPER_BOUND:
            return "UPPER_BOUND";
          case OperatorPropertiesKeys::LOWER_BOUND:
            return "LOWER_BOUND";
          case OperatorPropertiesKeys::SOURCE_DATA_TYPE:
            return "SOURCE_DATA_TYPE";
          case OperatorPropertiesKeys::DESTINATION_DATA_TYPE:
            return "DESTINATION_DATA_TYPE";
          case OperatorPropertiesKeys::VALIDATION_ACTION:
            return "VALIDATION_ACTION";
          case OperatorPropertiesKeys::MASK_VALUE:
            return "MASK_VALUE";
          case OperatorPropertiesKeys::MASK_LENGTH:
            return "MASK_LENGTH";
          case OperatorPropertiesKeys::TRUNCATE_LENGTH:
            return "TRUNCATE_LENGTH";
          case OperatorPropertiesKeys::MATH_OPERATION_FIELDS_ORDER:
            return "MATH_OPERATION_FIELDS_ORDER";
          case OperatorPropertiesKeys::CONCAT_FORMAT:
            return "CONCAT_FORMAT";
          case OperatorPropertiesKeys::SUBFIELD_CATEGORY_MAP:
            return "SUBFIELD_CATEGORY_MAP";
          case OperatorPropertiesKeys::EXCLUDE_SOURCE_FIELDS_LIST:
            return "EXCLUDE_SOURCE_FIELDS_LIST";
          case OperatorPropertiesKeys::INCLUDE_NEW_FIELDS:
            return "INCLUDE_NEW_FIELDS";
          case OperatorPropertiesKeys::ORDERED_PARTITION_KEYS_LIST:
            return "ORDERED_PARTITION_KEYS_LIST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OperatorPropertiesKeysMapper
    } // namespace Model
  } // namespace Appflow
} // namespace Aws
