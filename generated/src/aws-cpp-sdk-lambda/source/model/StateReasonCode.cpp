/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/StateReasonCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lambda
  {
    namespace Model
    {
      namespace StateReasonCodeMapper
      {

        static constexpr uint32_t Idle_HASH = ConstExprHashingUtils::HashString("Idle");
        static constexpr uint32_t Creating_HASH = ConstExprHashingUtils::HashString("Creating");
        static constexpr uint32_t Restoring_HASH = ConstExprHashingUtils::HashString("Restoring");
        static constexpr uint32_t EniLimitExceeded_HASH = ConstExprHashingUtils::HashString("EniLimitExceeded");
        static constexpr uint32_t InsufficientRolePermissions_HASH = ConstExprHashingUtils::HashString("InsufficientRolePermissions");
        static constexpr uint32_t InvalidConfiguration_HASH = ConstExprHashingUtils::HashString("InvalidConfiguration");
        static constexpr uint32_t InternalError_HASH = ConstExprHashingUtils::HashString("InternalError");
        static constexpr uint32_t SubnetOutOfIPAddresses_HASH = ConstExprHashingUtils::HashString("SubnetOutOfIPAddresses");
        static constexpr uint32_t InvalidSubnet_HASH = ConstExprHashingUtils::HashString("InvalidSubnet");
        static constexpr uint32_t InvalidSecurityGroup_HASH = ConstExprHashingUtils::HashString("InvalidSecurityGroup");
        static constexpr uint32_t ImageDeleted_HASH = ConstExprHashingUtils::HashString("ImageDeleted");
        static constexpr uint32_t ImageAccessDenied_HASH = ConstExprHashingUtils::HashString("ImageAccessDenied");
        static constexpr uint32_t InvalidImage_HASH = ConstExprHashingUtils::HashString("InvalidImage");
        static constexpr uint32_t KMSKeyAccessDenied_HASH = ConstExprHashingUtils::HashString("KMSKeyAccessDenied");
        static constexpr uint32_t KMSKeyNotFound_HASH = ConstExprHashingUtils::HashString("KMSKeyNotFound");
        static constexpr uint32_t InvalidStateKMSKey_HASH = ConstExprHashingUtils::HashString("InvalidStateKMSKey");
        static constexpr uint32_t DisabledKMSKey_HASH = ConstExprHashingUtils::HashString("DisabledKMSKey");
        static constexpr uint32_t EFSIOError_HASH = ConstExprHashingUtils::HashString("EFSIOError");
        static constexpr uint32_t EFSMountConnectivityError_HASH = ConstExprHashingUtils::HashString("EFSMountConnectivityError");
        static constexpr uint32_t EFSMountFailure_HASH = ConstExprHashingUtils::HashString("EFSMountFailure");
        static constexpr uint32_t EFSMountTimeout_HASH = ConstExprHashingUtils::HashString("EFSMountTimeout");
        static constexpr uint32_t InvalidRuntime_HASH = ConstExprHashingUtils::HashString("InvalidRuntime");
        static constexpr uint32_t InvalidZipFileException_HASH = ConstExprHashingUtils::HashString("InvalidZipFileException");
        static constexpr uint32_t FunctionError_HASH = ConstExprHashingUtils::HashString("FunctionError");


        StateReasonCode GetStateReasonCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Idle_HASH)
          {
            return StateReasonCode::Idle;
          }
          else if (hashCode == Creating_HASH)
          {
            return StateReasonCode::Creating;
          }
          else if (hashCode == Restoring_HASH)
          {
            return StateReasonCode::Restoring;
          }
          else if (hashCode == EniLimitExceeded_HASH)
          {
            return StateReasonCode::EniLimitExceeded;
          }
          else if (hashCode == InsufficientRolePermissions_HASH)
          {
            return StateReasonCode::InsufficientRolePermissions;
          }
          else if (hashCode == InvalidConfiguration_HASH)
          {
            return StateReasonCode::InvalidConfiguration;
          }
          else if (hashCode == InternalError_HASH)
          {
            return StateReasonCode::InternalError;
          }
          else if (hashCode == SubnetOutOfIPAddresses_HASH)
          {
            return StateReasonCode::SubnetOutOfIPAddresses;
          }
          else if (hashCode == InvalidSubnet_HASH)
          {
            return StateReasonCode::InvalidSubnet;
          }
          else if (hashCode == InvalidSecurityGroup_HASH)
          {
            return StateReasonCode::InvalidSecurityGroup;
          }
          else if (hashCode == ImageDeleted_HASH)
          {
            return StateReasonCode::ImageDeleted;
          }
          else if (hashCode == ImageAccessDenied_HASH)
          {
            return StateReasonCode::ImageAccessDenied;
          }
          else if (hashCode == InvalidImage_HASH)
          {
            return StateReasonCode::InvalidImage;
          }
          else if (hashCode == KMSKeyAccessDenied_HASH)
          {
            return StateReasonCode::KMSKeyAccessDenied;
          }
          else if (hashCode == KMSKeyNotFound_HASH)
          {
            return StateReasonCode::KMSKeyNotFound;
          }
          else if (hashCode == InvalidStateKMSKey_HASH)
          {
            return StateReasonCode::InvalidStateKMSKey;
          }
          else if (hashCode == DisabledKMSKey_HASH)
          {
            return StateReasonCode::DisabledKMSKey;
          }
          else if (hashCode == EFSIOError_HASH)
          {
            return StateReasonCode::EFSIOError;
          }
          else if (hashCode == EFSMountConnectivityError_HASH)
          {
            return StateReasonCode::EFSMountConnectivityError;
          }
          else if (hashCode == EFSMountFailure_HASH)
          {
            return StateReasonCode::EFSMountFailure;
          }
          else if (hashCode == EFSMountTimeout_HASH)
          {
            return StateReasonCode::EFSMountTimeout;
          }
          else if (hashCode == InvalidRuntime_HASH)
          {
            return StateReasonCode::InvalidRuntime;
          }
          else if (hashCode == InvalidZipFileException_HASH)
          {
            return StateReasonCode::InvalidZipFileException;
          }
          else if (hashCode == FunctionError_HASH)
          {
            return StateReasonCode::FunctionError;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StateReasonCode>(hashCode);
          }

          return StateReasonCode::NOT_SET;
        }

        Aws::String GetNameForStateReasonCode(StateReasonCode enumValue)
        {
          switch(enumValue)
          {
          case StateReasonCode::NOT_SET:
            return {};
          case StateReasonCode::Idle:
            return "Idle";
          case StateReasonCode::Creating:
            return "Creating";
          case StateReasonCode::Restoring:
            return "Restoring";
          case StateReasonCode::EniLimitExceeded:
            return "EniLimitExceeded";
          case StateReasonCode::InsufficientRolePermissions:
            return "InsufficientRolePermissions";
          case StateReasonCode::InvalidConfiguration:
            return "InvalidConfiguration";
          case StateReasonCode::InternalError:
            return "InternalError";
          case StateReasonCode::SubnetOutOfIPAddresses:
            return "SubnetOutOfIPAddresses";
          case StateReasonCode::InvalidSubnet:
            return "InvalidSubnet";
          case StateReasonCode::InvalidSecurityGroup:
            return "InvalidSecurityGroup";
          case StateReasonCode::ImageDeleted:
            return "ImageDeleted";
          case StateReasonCode::ImageAccessDenied:
            return "ImageAccessDenied";
          case StateReasonCode::InvalidImage:
            return "InvalidImage";
          case StateReasonCode::KMSKeyAccessDenied:
            return "KMSKeyAccessDenied";
          case StateReasonCode::KMSKeyNotFound:
            return "KMSKeyNotFound";
          case StateReasonCode::InvalidStateKMSKey:
            return "InvalidStateKMSKey";
          case StateReasonCode::DisabledKMSKey:
            return "DisabledKMSKey";
          case StateReasonCode::EFSIOError:
            return "EFSIOError";
          case StateReasonCode::EFSMountConnectivityError:
            return "EFSMountConnectivityError";
          case StateReasonCode::EFSMountFailure:
            return "EFSMountFailure";
          case StateReasonCode::EFSMountTimeout:
            return "EFSMountTimeout";
          case StateReasonCode::InvalidRuntime:
            return "InvalidRuntime";
          case StateReasonCode::InvalidZipFileException:
            return "InvalidZipFileException";
          case StateReasonCode::FunctionError:
            return "FunctionError";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StateReasonCodeMapper
    } // namespace Model
  } // namespace Lambda
} // namespace Aws
