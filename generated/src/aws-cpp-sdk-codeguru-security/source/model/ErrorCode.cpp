/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-security/model/ErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeGuruSecurity
  {
    namespace Model
    {
      namespace ErrorCodeMapper
      {

        static const int DUPLICATE_IDENTIFIER_HASH = HashingUtils::HashString("DUPLICATE_IDENTIFIER");
        static const int ITEM_DOES_NOT_EXIST_HASH = HashingUtils::HashString("ITEM_DOES_NOT_EXIST");
        static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");
        static const int INVALID_FINDING_ID_HASH = HashingUtils::HashString("INVALID_FINDING_ID");
        static const int INVALID_SCAN_NAME_HASH = HashingUtils::HashString("INVALID_SCAN_NAME");


        ErrorCode GetErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DUPLICATE_IDENTIFIER_HASH)
          {
            return ErrorCode::DUPLICATE_IDENTIFIER;
          }
          else if (hashCode == ITEM_DOES_NOT_EXIST_HASH)
          {
            return ErrorCode::ITEM_DOES_NOT_EXIST;
          }
          else if (hashCode == INTERNAL_ERROR_HASH)
          {
            return ErrorCode::INTERNAL_ERROR;
          }
          else if (hashCode == INVALID_FINDING_ID_HASH)
          {
            return ErrorCode::INVALID_FINDING_ID;
          }
          else if (hashCode == INVALID_SCAN_NAME_HASH)
          {
            return ErrorCode::INVALID_SCAN_NAME;
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
          case ErrorCode::DUPLICATE_IDENTIFIER:
            return "DUPLICATE_IDENTIFIER";
          case ErrorCode::ITEM_DOES_NOT_EXIST:
            return "ITEM_DOES_NOT_EXIST";
          case ErrorCode::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          case ErrorCode::INVALID_FINDING_ID:
            return "INVALID_FINDING_ID";
          case ErrorCode::INVALID_SCAN_NAME:
            return "INVALID_SCAN_NAME";
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
  } // namespace CodeGuruSecurity
} // namespace Aws
