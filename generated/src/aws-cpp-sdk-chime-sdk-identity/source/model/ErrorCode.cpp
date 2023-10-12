/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-identity/model/ErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKIdentity
  {
    namespace Model
    {
      namespace ErrorCodeMapper
      {

        static constexpr uint32_t BadRequest_HASH = ConstExprHashingUtils::HashString("BadRequest");
        static constexpr uint32_t Conflict_HASH = ConstExprHashingUtils::HashString("Conflict");
        static constexpr uint32_t Forbidden_HASH = ConstExprHashingUtils::HashString("Forbidden");
        static constexpr uint32_t NotFound_HASH = ConstExprHashingUtils::HashString("NotFound");
        static constexpr uint32_t PreconditionFailed_HASH = ConstExprHashingUtils::HashString("PreconditionFailed");
        static constexpr uint32_t ResourceLimitExceeded_HASH = ConstExprHashingUtils::HashString("ResourceLimitExceeded");
        static constexpr uint32_t ServiceFailure_HASH = ConstExprHashingUtils::HashString("ServiceFailure");
        static constexpr uint32_t AccessDenied_HASH = ConstExprHashingUtils::HashString("AccessDenied");
        static constexpr uint32_t ServiceUnavailable_HASH = ConstExprHashingUtils::HashString("ServiceUnavailable");
        static constexpr uint32_t Throttled_HASH = ConstExprHashingUtils::HashString("Throttled");
        static constexpr uint32_t Throttling_HASH = ConstExprHashingUtils::HashString("Throttling");
        static constexpr uint32_t Unauthorized_HASH = ConstExprHashingUtils::HashString("Unauthorized");
        static constexpr uint32_t Unprocessable_HASH = ConstExprHashingUtils::HashString("Unprocessable");
        static constexpr uint32_t VoiceConnectorGroupAssociationsExist_HASH = ConstExprHashingUtils::HashString("VoiceConnectorGroupAssociationsExist");
        static constexpr uint32_t PhoneNumberAssociationsExist_HASH = ConstExprHashingUtils::HashString("PhoneNumberAssociationsExist");


        ErrorCode GetErrorCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BadRequest_HASH)
          {
            return ErrorCode::BadRequest;
          }
          else if (hashCode == Conflict_HASH)
          {
            return ErrorCode::Conflict;
          }
          else if (hashCode == Forbidden_HASH)
          {
            return ErrorCode::Forbidden;
          }
          else if (hashCode == NotFound_HASH)
          {
            return ErrorCode::NotFound;
          }
          else if (hashCode == PreconditionFailed_HASH)
          {
            return ErrorCode::PreconditionFailed;
          }
          else if (hashCode == ResourceLimitExceeded_HASH)
          {
            return ErrorCode::ResourceLimitExceeded;
          }
          else if (hashCode == ServiceFailure_HASH)
          {
            return ErrorCode::ServiceFailure;
          }
          else if (hashCode == AccessDenied_HASH)
          {
            return ErrorCode::AccessDenied;
          }
          else if (hashCode == ServiceUnavailable_HASH)
          {
            return ErrorCode::ServiceUnavailable;
          }
          else if (hashCode == Throttled_HASH)
          {
            return ErrorCode::Throttled;
          }
          else if (hashCode == Throttling_HASH)
          {
            return ErrorCode::Throttling;
          }
          else if (hashCode == Unauthorized_HASH)
          {
            return ErrorCode::Unauthorized;
          }
          else if (hashCode == Unprocessable_HASH)
          {
            return ErrorCode::Unprocessable;
          }
          else if (hashCode == VoiceConnectorGroupAssociationsExist_HASH)
          {
            return ErrorCode::VoiceConnectorGroupAssociationsExist;
          }
          else if (hashCode == PhoneNumberAssociationsExist_HASH)
          {
            return ErrorCode::PhoneNumberAssociationsExist;
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
          case ErrorCode::Conflict:
            return "Conflict";
          case ErrorCode::Forbidden:
            return "Forbidden";
          case ErrorCode::NotFound:
            return "NotFound";
          case ErrorCode::PreconditionFailed:
            return "PreconditionFailed";
          case ErrorCode::ResourceLimitExceeded:
            return "ResourceLimitExceeded";
          case ErrorCode::ServiceFailure:
            return "ServiceFailure";
          case ErrorCode::AccessDenied:
            return "AccessDenied";
          case ErrorCode::ServiceUnavailable:
            return "ServiceUnavailable";
          case ErrorCode::Throttled:
            return "Throttled";
          case ErrorCode::Throttling:
            return "Throttling";
          case ErrorCode::Unauthorized:
            return "Unauthorized";
          case ErrorCode::Unprocessable:
            return "Unprocessable";
          case ErrorCode::VoiceConnectorGroupAssociationsExist:
            return "VoiceConnectorGroupAssociationsExist";
          case ErrorCode::PhoneNumberAssociationsExist:
            return "PhoneNumberAssociationsExist";
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
  } // namespace ChimeSDKIdentity
} // namespace Aws
