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

        static const int VALIDATION_ERROR_HASH = HashingUtils::HashString("VALIDATION_ERROR");
        static const int INTERNAL_FAILURE_HASH = HashingUtils::HashString("INTERNAL_FAILURE");
        static const int SYNC_INITIALIZING_ERROR_HASH = HashingUtils::HashString("SYNC_INITIALIZING_ERROR");
        static const int SYNC_CREATING_ERROR_HASH = HashingUtils::HashString("SYNC_CREATING_ERROR");
        static const int SYNC_PROCESSING_ERROR_HASH = HashingUtils::HashString("SYNC_PROCESSING_ERROR");


        ErrorCode GetErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
