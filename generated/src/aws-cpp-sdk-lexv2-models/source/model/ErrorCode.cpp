/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelsV2
  {
    namespace Model
    {
      namespace ErrorCodeMapper
      {

        static const int DUPLICATE_INPUT_HASH = HashingUtils::HashString("DUPLICATE_INPUT");
        static const int RESOURCE_DOES_NOT_EXIST_HASH = HashingUtils::HashString("RESOURCE_DOES_NOT_EXIST");
        static const int RESOURCE_ALREADY_EXISTS_HASH = HashingUtils::HashString("RESOURCE_ALREADY_EXISTS");
        static const int INTERNAL_SERVER_FAILURE_HASH = HashingUtils::HashString("INTERNAL_SERVER_FAILURE");


        ErrorCode GetErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DUPLICATE_INPUT_HASH)
          {
            return ErrorCode::DUPLICATE_INPUT;
          }
          else if (hashCode == RESOURCE_DOES_NOT_EXIST_HASH)
          {
            return ErrorCode::RESOURCE_DOES_NOT_EXIST;
          }
          else if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
          {
            return ErrorCode::RESOURCE_ALREADY_EXISTS;
          }
          else if (hashCode == INTERNAL_SERVER_FAILURE_HASH)
          {
            return ErrorCode::INTERNAL_SERVER_FAILURE;
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
          case ErrorCode::DUPLICATE_INPUT:
            return "DUPLICATE_INPUT";
          case ErrorCode::RESOURCE_DOES_NOT_EXIST:
            return "RESOURCE_DOES_NOT_EXIST";
          case ErrorCode::RESOURCE_ALREADY_EXISTS:
            return "RESOURCE_ALREADY_EXISTS";
          case ErrorCode::INTERNAL_SERVER_FAILURE:
            return "INTERNAL_SERVER_FAILURE";
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
  } // namespace LexModelsV2
} // namespace Aws
