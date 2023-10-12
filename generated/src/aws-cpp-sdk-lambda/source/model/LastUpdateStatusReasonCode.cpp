/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/LastUpdateStatusReasonCode.h>
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
      namespace LastUpdateStatusReasonCodeMapper
      {

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


        LastUpdateStatusReasonCode GetLastUpdateStatusReasonCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EniLimitExceeded_HASH)
          {
            return LastUpdateStatusReasonCode::EniLimitExceeded;
          }
          else if (hashCode == InsufficientRolePermissions_HASH)
          {
            return LastUpdateStatusReasonCode::InsufficientRolePermissions;
          }
          else if (hashCode == InvalidConfiguration_HASH)
          {
            return LastUpdateStatusReasonCode::InvalidConfiguration;
          }
          else if (hashCode == InternalError_HASH)
          {
            return LastUpdateStatusReasonCode::InternalError;
          }
          else if (hashCode == SubnetOutOfIPAddresses_HASH)
          {
            return LastUpdateStatusReasonCode::SubnetOutOfIPAddresses;
          }
          else if (hashCode == InvalidSubnet_HASH)
          {
            return LastUpdateStatusReasonCode::InvalidSubnet;
          }
          else if (hashCode == InvalidSecurityGroup_HASH)
          {
            return LastUpdateStatusReasonCode::InvalidSecurityGroup;
          }
          else if (hashCode == ImageDeleted_HASH)
          {
            return LastUpdateStatusReasonCode::ImageDeleted;
          }
          else if (hashCode == ImageAccessDenied_HASH)
          {
            return LastUpdateStatusReasonCode::ImageAccessDenied;
          }
          else if (hashCode == InvalidImage_HASH)
          {
            return LastUpdateStatusReasonCode::InvalidImage;
          }
          else if (hashCode == KMSKeyAccessDenied_HASH)
          {
            return LastUpdateStatusReasonCode::KMSKeyAccessDenied;
          }
          else if (hashCode == KMSKeyNotFound_HASH)
          {
            return LastUpdateStatusReasonCode::KMSKeyNotFound;
          }
          else if (hashCode == InvalidStateKMSKey_HASH)
          {
            return LastUpdateStatusReasonCode::InvalidStateKMSKey;
          }
          else if (hashCode == DisabledKMSKey_HASH)
          {
            return LastUpdateStatusReasonCode::DisabledKMSKey;
          }
          else if (hashCode == EFSIOError_HASH)
          {
            return LastUpdateStatusReasonCode::EFSIOError;
          }
          else if (hashCode == EFSMountConnectivityError_HASH)
          {
            return LastUpdateStatusReasonCode::EFSMountConnectivityError;
          }
          else if (hashCode == EFSMountFailure_HASH)
          {
            return LastUpdateStatusReasonCode::EFSMountFailure;
          }
          else if (hashCode == EFSMountTimeout_HASH)
          {
            return LastUpdateStatusReasonCode::EFSMountTimeout;
          }
          else if (hashCode == InvalidRuntime_HASH)
          {
            return LastUpdateStatusReasonCode::InvalidRuntime;
          }
          else if (hashCode == InvalidZipFileException_HASH)
          {
            return LastUpdateStatusReasonCode::InvalidZipFileException;
          }
          else if (hashCode == FunctionError_HASH)
          {
            return LastUpdateStatusReasonCode::FunctionError;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LastUpdateStatusReasonCode>(hashCode);
          }

          return LastUpdateStatusReasonCode::NOT_SET;
        }

        Aws::String GetNameForLastUpdateStatusReasonCode(LastUpdateStatusReasonCode enumValue)
        {
          switch(enumValue)
          {
          case LastUpdateStatusReasonCode::NOT_SET:
            return {};
          case LastUpdateStatusReasonCode::EniLimitExceeded:
            return "EniLimitExceeded";
          case LastUpdateStatusReasonCode::InsufficientRolePermissions:
            return "InsufficientRolePermissions";
          case LastUpdateStatusReasonCode::InvalidConfiguration:
            return "InvalidConfiguration";
          case LastUpdateStatusReasonCode::InternalError:
            return "InternalError";
          case LastUpdateStatusReasonCode::SubnetOutOfIPAddresses:
            return "SubnetOutOfIPAddresses";
          case LastUpdateStatusReasonCode::InvalidSubnet:
            return "InvalidSubnet";
          case LastUpdateStatusReasonCode::InvalidSecurityGroup:
            return "InvalidSecurityGroup";
          case LastUpdateStatusReasonCode::ImageDeleted:
            return "ImageDeleted";
          case LastUpdateStatusReasonCode::ImageAccessDenied:
            return "ImageAccessDenied";
          case LastUpdateStatusReasonCode::InvalidImage:
            return "InvalidImage";
          case LastUpdateStatusReasonCode::KMSKeyAccessDenied:
            return "KMSKeyAccessDenied";
          case LastUpdateStatusReasonCode::KMSKeyNotFound:
            return "KMSKeyNotFound";
          case LastUpdateStatusReasonCode::InvalidStateKMSKey:
            return "InvalidStateKMSKey";
          case LastUpdateStatusReasonCode::DisabledKMSKey:
            return "DisabledKMSKey";
          case LastUpdateStatusReasonCode::EFSIOError:
            return "EFSIOError";
          case LastUpdateStatusReasonCode::EFSMountConnectivityError:
            return "EFSMountConnectivityError";
          case LastUpdateStatusReasonCode::EFSMountFailure:
            return "EFSMountFailure";
          case LastUpdateStatusReasonCode::EFSMountTimeout:
            return "EFSMountTimeout";
          case LastUpdateStatusReasonCode::InvalidRuntime:
            return "InvalidRuntime";
          case LastUpdateStatusReasonCode::InvalidZipFileException:
            return "InvalidZipFileException";
          case LastUpdateStatusReasonCode::FunctionError:
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

      } // namespace LastUpdateStatusReasonCodeMapper
    } // namespace Model
  } // namespace Lambda
} // namespace Aws
