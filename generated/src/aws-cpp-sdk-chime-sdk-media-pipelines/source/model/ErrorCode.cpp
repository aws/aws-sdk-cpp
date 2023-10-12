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

        static constexpr uint32_t BadRequest_HASH = ConstExprHashingUtils::HashString("BadRequest");
        static constexpr uint32_t Forbidden_HASH = ConstExprHashingUtils::HashString("Forbidden");
        static constexpr uint32_t NotFound_HASH = ConstExprHashingUtils::HashString("NotFound");
        static constexpr uint32_t ResourceLimitExceeded_HASH = ConstExprHashingUtils::HashString("ResourceLimitExceeded");
        static constexpr uint32_t ServiceFailure_HASH = ConstExprHashingUtils::HashString("ServiceFailure");
        static constexpr uint32_t ServiceUnavailable_HASH = ConstExprHashingUtils::HashString("ServiceUnavailable");
        static constexpr uint32_t Throttling_HASH = ConstExprHashingUtils::HashString("Throttling");


        ErrorCode GetErrorCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
