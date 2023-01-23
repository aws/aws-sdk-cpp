/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/BackfillErrorCode.h>
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
      namespace BackfillErrorCodeMapper
      {

        static const int ENCRYPTED_PARTITION_ERROR_HASH = HashingUtils::HashString("ENCRYPTED_PARTITION_ERROR");
        static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");
        static const int INVALID_PARTITION_TYPE_DATA_ERROR_HASH = HashingUtils::HashString("INVALID_PARTITION_TYPE_DATA_ERROR");
        static const int MISSING_PARTITION_VALUE_ERROR_HASH = HashingUtils::HashString("MISSING_PARTITION_VALUE_ERROR");
        static const int UNSUPPORTED_PARTITION_CHARACTER_ERROR_HASH = HashingUtils::HashString("UNSUPPORTED_PARTITION_CHARACTER_ERROR");


        BackfillErrorCode GetBackfillErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENCRYPTED_PARTITION_ERROR_HASH)
          {
            return BackfillErrorCode::ENCRYPTED_PARTITION_ERROR;
          }
          else if (hashCode == INTERNAL_ERROR_HASH)
          {
            return BackfillErrorCode::INTERNAL_ERROR;
          }
          else if (hashCode == INVALID_PARTITION_TYPE_DATA_ERROR_HASH)
          {
            return BackfillErrorCode::INVALID_PARTITION_TYPE_DATA_ERROR;
          }
          else if (hashCode == MISSING_PARTITION_VALUE_ERROR_HASH)
          {
            return BackfillErrorCode::MISSING_PARTITION_VALUE_ERROR;
          }
          else if (hashCode == UNSUPPORTED_PARTITION_CHARACTER_ERROR_HASH)
          {
            return BackfillErrorCode::UNSUPPORTED_PARTITION_CHARACTER_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BackfillErrorCode>(hashCode);
          }

          return BackfillErrorCode::NOT_SET;
        }

        Aws::String GetNameForBackfillErrorCode(BackfillErrorCode enumValue)
        {
          switch(enumValue)
          {
          case BackfillErrorCode::ENCRYPTED_PARTITION_ERROR:
            return "ENCRYPTED_PARTITION_ERROR";
          case BackfillErrorCode::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          case BackfillErrorCode::INVALID_PARTITION_TYPE_DATA_ERROR:
            return "INVALID_PARTITION_TYPE_DATA_ERROR";
          case BackfillErrorCode::MISSING_PARTITION_VALUE_ERROR:
            return "MISSING_PARTITION_VALUE_ERROR";
          case BackfillErrorCode::UNSUPPORTED_PARTITION_CHARACTER_ERROR:
            return "UNSUPPORTED_PARTITION_CHARACTER_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BackfillErrorCodeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
