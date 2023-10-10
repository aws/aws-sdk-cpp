/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/ErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Honeycode
  {
    namespace Model
    {
      namespace ErrorCodeMapper
      {

        static const int ACCESS_DENIED_HASH = HashingUtils::HashString("ACCESS_DENIED");
        static const int INVALID_URL_ERROR_HASH = HashingUtils::HashString("INVALID_URL_ERROR");
        static const int INVALID_IMPORT_OPTIONS_ERROR_HASH = HashingUtils::HashString("INVALID_IMPORT_OPTIONS_ERROR");
        static const int INVALID_TABLE_ID_ERROR_HASH = HashingUtils::HashString("INVALID_TABLE_ID_ERROR");
        static const int INVALID_TABLE_COLUMN_ID_ERROR_HASH = HashingUtils::HashString("INVALID_TABLE_COLUMN_ID_ERROR");
        static const int TABLE_NOT_FOUND_ERROR_HASH = HashingUtils::HashString("TABLE_NOT_FOUND_ERROR");
        static const int FILE_EMPTY_ERROR_HASH = HashingUtils::HashString("FILE_EMPTY_ERROR");
        static const int INVALID_FILE_TYPE_ERROR_HASH = HashingUtils::HashString("INVALID_FILE_TYPE_ERROR");
        static const int FILE_PARSING_ERROR_HASH = HashingUtils::HashString("FILE_PARSING_ERROR");
        static const int FILE_SIZE_LIMIT_ERROR_HASH = HashingUtils::HashString("FILE_SIZE_LIMIT_ERROR");
        static const int FILE_NOT_FOUND_ERROR_HASH = HashingUtils::HashString("FILE_NOT_FOUND_ERROR");
        static const int UNKNOWN_ERROR_HASH = HashingUtils::HashString("UNKNOWN_ERROR");
        static const int RESOURCE_NOT_FOUND_ERROR_HASH = HashingUtils::HashString("RESOURCE_NOT_FOUND_ERROR");
        static const int SYSTEM_LIMIT_ERROR_HASH = HashingUtils::HashString("SYSTEM_LIMIT_ERROR");


        ErrorCode GetErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCESS_DENIED_HASH)
          {
            return ErrorCode::ACCESS_DENIED;
          }
          else if (hashCode == INVALID_URL_ERROR_HASH)
          {
            return ErrorCode::INVALID_URL_ERROR;
          }
          else if (hashCode == INVALID_IMPORT_OPTIONS_ERROR_HASH)
          {
            return ErrorCode::INVALID_IMPORT_OPTIONS_ERROR;
          }
          else if (hashCode == INVALID_TABLE_ID_ERROR_HASH)
          {
            return ErrorCode::INVALID_TABLE_ID_ERROR;
          }
          else if (hashCode == INVALID_TABLE_COLUMN_ID_ERROR_HASH)
          {
            return ErrorCode::INVALID_TABLE_COLUMN_ID_ERROR;
          }
          else if (hashCode == TABLE_NOT_FOUND_ERROR_HASH)
          {
            return ErrorCode::TABLE_NOT_FOUND_ERROR;
          }
          else if (hashCode == FILE_EMPTY_ERROR_HASH)
          {
            return ErrorCode::FILE_EMPTY_ERROR;
          }
          else if (hashCode == INVALID_FILE_TYPE_ERROR_HASH)
          {
            return ErrorCode::INVALID_FILE_TYPE_ERROR;
          }
          else if (hashCode == FILE_PARSING_ERROR_HASH)
          {
            return ErrorCode::FILE_PARSING_ERROR;
          }
          else if (hashCode == FILE_SIZE_LIMIT_ERROR_HASH)
          {
            return ErrorCode::FILE_SIZE_LIMIT_ERROR;
          }
          else if (hashCode == FILE_NOT_FOUND_ERROR_HASH)
          {
            return ErrorCode::FILE_NOT_FOUND_ERROR;
          }
          else if (hashCode == UNKNOWN_ERROR_HASH)
          {
            return ErrorCode::UNKNOWN_ERROR;
          }
          else if (hashCode == RESOURCE_NOT_FOUND_ERROR_HASH)
          {
            return ErrorCode::RESOURCE_NOT_FOUND_ERROR;
          }
          else if (hashCode == SYSTEM_LIMIT_ERROR_HASH)
          {
            return ErrorCode::SYSTEM_LIMIT_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ErrorCode>(hashCode);
          }

          return ErrorCode::NOT_SET;
        }

        Aws::String GetNameForErrorCode(ErrorCode enumValue)
        {
          switch(enumValue)
          {
          case ErrorCode::NOT_SET:
            return {};
          case ErrorCode::ACCESS_DENIED:
            return "ACCESS_DENIED";
          case ErrorCode::INVALID_URL_ERROR:
            return "INVALID_URL_ERROR";
          case ErrorCode::INVALID_IMPORT_OPTIONS_ERROR:
            return "INVALID_IMPORT_OPTIONS_ERROR";
          case ErrorCode::INVALID_TABLE_ID_ERROR:
            return "INVALID_TABLE_ID_ERROR";
          case ErrorCode::INVALID_TABLE_COLUMN_ID_ERROR:
            return "INVALID_TABLE_COLUMN_ID_ERROR";
          case ErrorCode::TABLE_NOT_FOUND_ERROR:
            return "TABLE_NOT_FOUND_ERROR";
          case ErrorCode::FILE_EMPTY_ERROR:
            return "FILE_EMPTY_ERROR";
          case ErrorCode::INVALID_FILE_TYPE_ERROR:
            return "INVALID_FILE_TYPE_ERROR";
          case ErrorCode::FILE_PARSING_ERROR:
            return "FILE_PARSING_ERROR";
          case ErrorCode::FILE_SIZE_LIMIT_ERROR:
            return "FILE_SIZE_LIMIT_ERROR";
          case ErrorCode::FILE_NOT_FOUND_ERROR:
            return "FILE_NOT_FOUND_ERROR";
          case ErrorCode::UNKNOWN_ERROR:
            return "UNKNOWN_ERROR";
          case ErrorCode::RESOURCE_NOT_FOUND_ERROR:
            return "RESOURCE_NOT_FOUND_ERROR";
          case ErrorCode::SYSTEM_LIMIT_ERROR:
            return "SYSTEM_LIMIT_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ErrorCodeMapper
    } // namespace Model
  } // namespace Honeycode
} // namespace Aws
