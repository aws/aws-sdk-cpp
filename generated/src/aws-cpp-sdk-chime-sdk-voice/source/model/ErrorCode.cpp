/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/ErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKVoice
  {
    namespace Model
    {
      namespace ErrorCodeMapper
      {

        static const int BadRequest_HASH = HashingUtils::HashString("BadRequest");
        static const int Conflict_HASH = HashingUtils::HashString("Conflict");
        static const int Forbidden_HASH = HashingUtils::HashString("Forbidden");
        static const int NotFound_HASH = HashingUtils::HashString("NotFound");
        static const int PreconditionFailed_HASH = HashingUtils::HashString("PreconditionFailed");
        static const int ResourceLimitExceeded_HASH = HashingUtils::HashString("ResourceLimitExceeded");
        static const int ServiceFailure_HASH = HashingUtils::HashString("ServiceFailure");
        static const int AccessDenied_HASH = HashingUtils::HashString("AccessDenied");
        static const int ServiceUnavailable_HASH = HashingUtils::HashString("ServiceUnavailable");
        static const int Throttled_HASH = HashingUtils::HashString("Throttled");
        static const int Throttling_HASH = HashingUtils::HashString("Throttling");
        static const int Unauthorized_HASH = HashingUtils::HashString("Unauthorized");
        static const int Unprocessable_HASH = HashingUtils::HashString("Unprocessable");
        static const int VoiceConnectorGroupAssociationsExist_HASH = HashingUtils::HashString("VoiceConnectorGroupAssociationsExist");
        static const int PhoneNumberAssociationsExist_HASH = HashingUtils::HashString("PhoneNumberAssociationsExist");
        static const int Gone_HASH = HashingUtils::HashString("Gone");


        ErrorCode GetErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == Gone_HASH)
          {
            return ErrorCode::Gone;
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
          case ErrorCode::Gone:
            return "Gone";
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
  } // namespace ChimeSDKVoice
} // namespace Aws
