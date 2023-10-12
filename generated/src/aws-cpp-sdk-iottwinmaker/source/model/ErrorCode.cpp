/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/ErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTTwinMaker
  {
    namespace Model
    {
      namespace ErrorCodeMapper
      {

        static constexpr uint32_t VALIDATION_ERROR_HASH = ConstExprHashingUtils::HashString("VALIDATION_ERROR");
        static constexpr uint32_t INTERNAL_FAILURE_HASH = ConstExprHashingUtils::HashString("INTERNAL_FAILURE");
        static constexpr uint32_t SYNC_INITIALIZING_ERROR_HASH = ConstExprHashingUtils::HashString("SYNC_INITIALIZING_ERROR");
        static constexpr uint32_t SYNC_CREATING_ERROR_HASH = ConstExprHashingUtils::HashString("SYNC_CREATING_ERROR");
        static constexpr uint32_t SYNC_PROCESSING_ERROR_HASH = ConstExprHashingUtils::HashString("SYNC_PROCESSING_ERROR");


        ErrorCode GetErrorCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VALIDATION_ERROR_HASH)
          {
            return ErrorCode::VALIDATION_ERROR;
          }
          else if (hashCode == INTERNAL_FAILURE_HASH)
          {
            return ErrorCode::INTERNAL_FAILURE;
          }
          else if (hashCode == SYNC_INITIALIZING_ERROR_HASH)
          {
            return ErrorCode::SYNC_INITIALIZING_ERROR;
          }
          else if (hashCode == SYNC_CREATING_ERROR_HASH)
          {
            return ErrorCode::SYNC_CREATING_ERROR;
          }
          else if (hashCode == SYNC_PROCESSING_ERROR_HASH)
          {
            return ErrorCode::SYNC_PROCESSING_ERROR;
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
          case ErrorCode::VALIDATION_ERROR:
            return "VALIDATION_ERROR";
          case ErrorCode::INTERNAL_FAILURE:
            return "INTERNAL_FAILURE";
          case ErrorCode::SYNC_INITIALIZING_ERROR:
            return "SYNC_INITIALIZING_ERROR";
          case ErrorCode::SYNC_CREATING_ERROR:
            return "SYNC_CREATING_ERROR";
          case ErrorCode::SYNC_PROCESSING_ERROR:
            return "SYNC_PROCESSING_ERROR";
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
  } // namespace IoTTwinMaker
} // namespace Aws
