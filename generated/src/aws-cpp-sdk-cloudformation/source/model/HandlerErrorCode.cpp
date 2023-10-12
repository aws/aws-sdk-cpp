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

        static constexpr uint32_t NotUpdatable_HASH = ConstExprHashingUtils::HashString("NotUpdatable");
        static constexpr uint32_t InvalidRequest_HASH = ConstExprHashingUtils::HashString("InvalidRequest");
        static constexpr uint32_t AccessDenied_HASH = ConstExprHashingUtils::HashString("AccessDenied");
        static constexpr uint32_t InvalidCredentials_HASH = ConstExprHashingUtils::HashString("InvalidCredentials");
        static constexpr uint32_t AlreadyExists_HASH = ConstExprHashingUtils::HashString("AlreadyExists");
        static constexpr uint32_t NotFound_HASH = ConstExprHashingUtils::HashString("NotFound");
        static constexpr uint32_t ResourceConflict_HASH = ConstExprHashingUtils::HashString("ResourceConflict");
        static constexpr uint32_t Throttling_HASH = ConstExprHashingUtils::HashString("Throttling");
        static constexpr uint32_t ServiceLimitExceeded_HASH = ConstExprHashingUtils::HashString("ServiceLimitExceeded");
        static constexpr uint32_t NotStabilized_HASH = ConstExprHashingUtils::HashString("NotStabilized");
        static constexpr uint32_t GeneralServiceException_HASH = ConstExprHashingUtils::HashString("GeneralServiceException");
        static constexpr uint32_t ServiceInternalError_HASH = ConstExprHashingUtils::HashString("ServiceInternalError");
        static constexpr uint32_t NetworkFailure_HASH = ConstExprHashingUtils::HashString("NetworkFailure");
        static constexpr uint32_t InternalFailure_HASH = ConstExprHashingUtils::HashString("InternalFailure");
        static constexpr uint32_t InvalidTypeConfiguration_HASH = ConstExprHashingUtils::HashString("InvalidTypeConfiguration");
        static constexpr uint32_t HandlerInternalFailure_HASH = ConstExprHashingUtils::HashString("HandlerInternalFailure");
        static constexpr uint32_t NonCompliant_HASH = ConstExprHashingUtils::HashString("NonCompliant");
        static constexpr uint32_t Unknown_HASH = ConstExprHashingUtils::HashString("Unknown");
        static constexpr uint32_t UnsupportedTarget_HASH = ConstExprHashingUtils::HashString("UnsupportedTarget");


        HandlerErrorCode GetHandlerErrorCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == InvalidTypeConfiguration_HASH)
          {
            return HandlerErrorCode::InvalidTypeConfiguration;
          }
          else if (hashCode == HandlerInternalFailure_HASH)
          {
            return HandlerErrorCode::HandlerInternalFailure;
          }
          else if (hashCode == NonCompliant_HASH)
          {
            return HandlerErrorCode::NonCompliant;
          }
          else if (hashCode == Unknown_HASH)
          {
            return HandlerErrorCode::Unknown;
          }
          else if (hashCode == UnsupportedTarget_HASH)
          {
            return HandlerErrorCode::UnsupportedTarget;
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
          case HandlerErrorCode::NOT_SET:
            return {};
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
          case HandlerErrorCode::InvalidTypeConfiguration:
            return "InvalidTypeConfiguration";
          case HandlerErrorCode::HandlerInternalFailure:
            return "HandlerInternalFailure";
          case HandlerErrorCode::NonCompliant:
            return "NonCompliant";
          case HandlerErrorCode::Unknown:
            return "Unknown";
          case HandlerErrorCode::UnsupportedTarget:
            return "UnsupportedTarget";
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
