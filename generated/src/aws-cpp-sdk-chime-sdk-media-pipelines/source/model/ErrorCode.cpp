/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/ErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKMediaPipelines
  {
    namespace Model
    {
      namespace ErrorCodeMapper
      {

        static const int BadRequest_HASH = HashingUtils::HashString("BadRequest");
        static const int Forbidden_HASH = HashingUtils::HashString("Forbidden");
        static const int NotFound_HASH = HashingUtils::HashString("NotFound");
        static const int ResourceLimitExceeded_HASH = HashingUtils::HashString("ResourceLimitExceeded");
        static const int ServiceFailure_HASH = HashingUtils::HashString("ServiceFailure");
        static const int ServiceUnavailable_HASH = HashingUtils::HashString("ServiceUnavailable");
        static const int Throttling_HASH = HashingUtils::HashString("Throttling");


        ErrorCode GetErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BadRequest_HASH)
          {
            return ErrorCode::BadRequest;
          }
          else if (hashCode == Forbidden_HASH)
          {
            return ErrorCode::Forbidden;
          }
          else if (hashCode == NotFound_HASH)
          {
            return ErrorCode::NotFound;
          }
          else if (hashCode == ResourceLimitExceeded_HASH)
          {
            return ErrorCode::ResourceLimitExceeded;
          }
          else if (hashCode == ServiceFailure_HASH)
          {
            return ErrorCode::ServiceFailure;
          }
          else if (hashCode == ServiceUnavailable_HASH)
          {
            return ErrorCode::ServiceUnavailable;
          }
          else if (hashCode == Throttling_HASH)
          {
            return ErrorCode::Throttling;
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
          case ErrorCode::BadRequest:
            return "BadRequest";
          case ErrorCode::Forbidden:
            return "Forbidden";
          case ErrorCode::NotFound:
            return "NotFound";
          case ErrorCode::ResourceLimitExceeded:
            return "ResourceLimitExceeded";
          case ErrorCode::ServiceFailure:
            return "ServiceFailure";
          case ErrorCode::ServiceUnavailable:
            return "ServiceUnavailable";
          case ErrorCode::Throttling:
            return "Throttling";
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
  } // namespace ChimeSDKMediaPipelines
} // namespace Aws
