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
        static const int SYNC_DELETING_ERROR_HASH = HashingUtils::HashString("SYNC_DELETING_ERROR");
        static const int PROCESSING_ERROR_HASH = HashingUtils::HashString("PROCESSING_ERROR");
        static const int COMPOSITE_COMPONENT_FAILURE_HASH = HashingUtils::HashString("COMPOSITE_COMPONENT_FAILURE");


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
          else if (hashCode == SYNC_DELETING_ERROR_HASH)
          {
            return ErrorCode::SYNC_DELETING_ERROR;
          }
          else if (hashCode == PROCESSING_ERROR_HASH)
          {
            return ErrorCode::PROCESSING_ERROR;
          }
          else if (hashCode == COMPOSITE_COMPONENT_FAILURE_HASH)
          {
            return ErrorCode::COMPOSITE_COMPONENT_FAILURE;
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
          case ErrorCode::SYNC_DELETING_ERROR:
            return "SYNC_DELETING_ERROR";
          case ErrorCode::PROCESSING_ERROR:
            return "PROCESSING_ERROR";
          case ErrorCode::COMPOSITE_COMPONENT_FAILURE:
            return "COMPOSITE_COMPONENT_FAILURE";
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
