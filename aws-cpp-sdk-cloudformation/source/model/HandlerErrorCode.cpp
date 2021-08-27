/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/HandlerErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace HandlerErrorCodeMapper
      {

        static const int NotUpdatable_HASH = HashingUtils::HashString("NotUpdatable");
        static const int InvalidRequest_HASH = HashingUtils::HashString("InvalidRequest");
        static const int AccessDenied_HASH = HashingUtils::HashString("AccessDenied");
        static const int InvalidCredentials_HASH = HashingUtils::HashString("InvalidCredentials");
        static const int AlreadyExists_HASH = HashingUtils::HashString("AlreadyExists");
        static const int NotFound_HASH = HashingUtils::HashString("NotFound");
        static const int ResourceConflict_HASH = HashingUtils::HashString("ResourceConflict");
        static const int Throttling_HASH = HashingUtils::HashString("Throttling");
        static const int ServiceLimitExceeded_HASH = HashingUtils::HashString("ServiceLimitExceeded");
        static const int NotStabilized_HASH = HashingUtils::HashString("NotStabilized");
        static const int GeneralServiceException_HASH = HashingUtils::HashString("GeneralServiceException");
        static const int ServiceInternalError_HASH = HashingUtils::HashString("ServiceInternalError");
        static const int NetworkFailure_HASH = HashingUtils::HashString("NetworkFailure");
        static const int InternalFailure_HASH = HashingUtils::HashString("InternalFailure");


        HandlerErrorCode GetHandlerErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NotUpdatable_HASH)
          {
            return HandlerErrorCode::NotUpdatable;
          }
          else if (hashCode == InvalidRequest_HASH)
          {
            return HandlerErrorCode::InvalidRequest;
          }
          else if (hashCode == AccessDenied_HASH)
          {
            return HandlerErrorCode::AccessDenied;
          }
          else if (hashCode == InvalidCredentials_HASH)
          {
            return HandlerErrorCode::InvalidCredentials;
          }
          else if (hashCode == AlreadyExists_HASH)
          {
            return HandlerErrorCode::AlreadyExists;
          }
          else if (hashCode == NotFound_HASH)
          {
            return HandlerErrorCode::NotFound;
          }
          else if (hashCode == ResourceConflict_HASH)
          {
            return HandlerErrorCode::ResourceConflict;
          }
          else if (hashCode == Throttling_HASH)
          {
            return HandlerErrorCode::Throttling;
          }
          else if (hashCode == ServiceLimitExceeded_HASH)
          {
            return HandlerErrorCode::ServiceLimitExceeded;
          }
          else if (hashCode == NotStabilized_HASH)
          {
            return HandlerErrorCode::NotStabilized;
          }
          else if (hashCode == GeneralServiceException_HASH)
          {
            return HandlerErrorCode::GeneralServiceException;
          }
          else if (hashCode == ServiceInternalError_HASH)
          {
            return HandlerErrorCode::ServiceInternalError;
          }
          else if (hashCode == NetworkFailure_HASH)
          {
            return HandlerErrorCode::NetworkFailure;
          }
          else if (hashCode == InternalFailure_HASH)
          {
            return HandlerErrorCode::InternalFailure;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HandlerErrorCode>(hashCode);
          }

          return HandlerErrorCode::NOT_SET;
        }

        Aws::String GetNameForHandlerErrorCode(HandlerErrorCode enumValue)
        {
          switch(enumValue)
          {
          case HandlerErrorCode::NotUpdatable:
            return "NotUpdatable";
          case HandlerErrorCode::InvalidRequest:
            return "InvalidRequest";
          case HandlerErrorCode::AccessDenied:
            return "AccessDenied";
          case HandlerErrorCode::InvalidCredentials:
            return "InvalidCredentials";
          case HandlerErrorCode::AlreadyExists:
            return "AlreadyExists";
          case HandlerErrorCode::NotFound:
            return "NotFound";
          case HandlerErrorCode::ResourceConflict:
            return "ResourceConflict";
          case HandlerErrorCode::Throttling:
            return "Throttling";
          case HandlerErrorCode::ServiceLimitExceeded:
            return "ServiceLimitExceeded";
          case HandlerErrorCode::NotStabilized:
            return "NotStabilized";
          case HandlerErrorCode::GeneralServiceException:
            return "GeneralServiceException";
          case HandlerErrorCode::ServiceInternalError:
            return "ServiceInternalError";
          case HandlerErrorCode::NetworkFailure:
            return "NetworkFailure";
          case HandlerErrorCode::InternalFailure:
            return "InternalFailure";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HandlerErrorCodeMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
