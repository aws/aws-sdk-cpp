/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/WorldExportJobErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RoboMaker
  {
    namespace Model
    {
      namespace WorldExportJobErrorCodeMapper
      {

        static const int InternalServiceError_HASH = HashingUtils::HashString("InternalServiceError");
        static const int LimitExceeded_HASH = HashingUtils::HashString("LimitExceeded");
        static const int ResourceNotFound_HASH = HashingUtils::HashString("ResourceNotFound");
        static const int RequestThrottled_HASH = HashingUtils::HashString("RequestThrottled");
        static const int InvalidInput_HASH = HashingUtils::HashString("InvalidInput");
        static const int AccessDenied_HASH = HashingUtils::HashString("AccessDenied");


        WorldExportJobErrorCode GetWorldExportJobErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InternalServiceError_HASH)
          {
            return WorldExportJobErrorCode::InternalServiceError;
          }
          else if (hashCode == LimitExceeded_HASH)
          {
            return WorldExportJobErrorCode::LimitExceeded;
          }
          else if (hashCode == ResourceNotFound_HASH)
          {
            return WorldExportJobErrorCode::ResourceNotFound;
          }
          else if (hashCode == RequestThrottled_HASH)
          {
            return WorldExportJobErrorCode::RequestThrottled;
          }
          else if (hashCode == InvalidInput_HASH)
          {
            return WorldExportJobErrorCode::InvalidInput;
          }
          else if (hashCode == AccessDenied_HASH)
          {
            return WorldExportJobErrorCode::AccessDenied;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorldExportJobErrorCode>(hashCode);
          }

          return WorldExportJobErrorCode::NOT_SET;
        }

        Aws::String GetNameForWorldExportJobErrorCode(WorldExportJobErrorCode enumValue)
        {
          switch(enumValue)
          {
          case WorldExportJobErrorCode::InternalServiceError:
            return "InternalServiceError";
          case WorldExportJobErrorCode::LimitExceeded:
            return "LimitExceeded";
          case WorldExportJobErrorCode::ResourceNotFound:
            return "ResourceNotFound";
          case WorldExportJobErrorCode::RequestThrottled:
            return "RequestThrottled";
          case WorldExportJobErrorCode::InvalidInput:
            return "InvalidInput";
          case WorldExportJobErrorCode::AccessDenied:
            return "AccessDenied";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorldExportJobErrorCodeMapper
    } // namespace Model
  } // namespace RoboMaker
} // namespace Aws
