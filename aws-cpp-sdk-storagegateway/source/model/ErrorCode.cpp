/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/storagegateway/model/ErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace StorageGateway
  {
    namespace Model
    {
      namespace ErrorCodeMapper
      {

        static const int ActivationKeyExpired_HASH = HashingUtils::HashString("ActivationKeyExpired");
        static const int ActivationKeyInvalid_HASH = HashingUtils::HashString("ActivationKeyInvalid");
        static const int ActivationKeyNotFound_HASH = HashingUtils::HashString("ActivationKeyNotFound");
        static const int GatewayInternalError_HASH = HashingUtils::HashString("GatewayInternalError");
        static const int GatewayNotConnected_HASH = HashingUtils::HashString("GatewayNotConnected");
        static const int GatewayNotFound_HASH = HashingUtils::HashString("GatewayNotFound");
        static const int GatewayProxyNetworkConnectionBusy_HASH = HashingUtils::HashString("GatewayProxyNetworkConnectionBusy");
        static const int AuthenticationFailure_HASH = HashingUtils::HashString("AuthenticationFailure");
        static const int BandwidthThrottleScheduleNotFound_HASH = HashingUtils::HashString("BandwidthThrottleScheduleNotFound");
        static const int Blocked_HASH = HashingUtils::HashString("Blocked");
        static const int CannotExportSnapshot_HASH = HashingUtils::HashString("CannotExportSnapshot");
        static const int ChapCredentialNotFound_HASH = HashingUtils::HashString("ChapCredentialNotFound");
        static const int DiskAlreadyAllocated_HASH = HashingUtils::HashString("DiskAlreadyAllocated");
        static const int DiskDoesNotExist_HASH = HashingUtils::HashString("DiskDoesNotExist");
        static const int DiskSizeGreaterThanVolumeMaxSize_HASH = HashingUtils::HashString("DiskSizeGreaterThanVolumeMaxSize");
        static const int DiskSizeLessThanVolumeSize_HASH = HashingUtils::HashString("DiskSizeLessThanVolumeSize");
        static const int DiskSizeNotGigAligned_HASH = HashingUtils::HashString("DiskSizeNotGigAligned");
        static const int DuplicateCertificateInfo_HASH = HashingUtils::HashString("DuplicateCertificateInfo");
        static const int DuplicateSchedule_HASH = HashingUtils::HashString("DuplicateSchedule");
        static const int EndpointNotFound_HASH = HashingUtils::HashString("EndpointNotFound");
        static const int IAMNotSupported_HASH = HashingUtils::HashString("IAMNotSupported");
        static const int InitiatorInvalid_HASH = HashingUtils::HashString("InitiatorInvalid");
        static const int InitiatorNotFound_HASH = HashingUtils::HashString("InitiatorNotFound");
        static const int InternalError_HASH = HashingUtils::HashString("InternalError");
        static const int InvalidGateway_HASH = HashingUtils::HashString("InvalidGateway");
        static const int InvalidEndpoint_HASH = HashingUtils::HashString("InvalidEndpoint");
        static const int InvalidParameters_HASH = HashingUtils::HashString("InvalidParameters");
        static const int InvalidSchedule_HASH = HashingUtils::HashString("InvalidSchedule");
        static const int LocalStorageLimitExceeded_HASH = HashingUtils::HashString("LocalStorageLimitExceeded");
        static const int LunAlreadyAllocated_HASH = HashingUtils::HashString("LunAlreadyAllocated ");
        static const int LunInvalid_HASH = HashingUtils::HashString("LunInvalid");
        static const int MaximumContentLengthExceeded_HASH = HashingUtils::HashString("MaximumContentLengthExceeded");
        static const int MaximumTapeCartridgeCountExceeded_HASH = HashingUtils::HashString("MaximumTapeCartridgeCountExceeded");
        static const int MaximumVolumeCountExceeded_HASH = HashingUtils::HashString("MaximumVolumeCountExceeded");
        static const int NetworkConfigurationChanged_HASH = HashingUtils::HashString("NetworkConfigurationChanged");
        static const int NoDisksAvailable_HASH = HashingUtils::HashString("NoDisksAvailable");
        static const int NotImplemented_HASH = HashingUtils::HashString("NotImplemented");
        static const int NotSupported_HASH = HashingUtils::HashString("NotSupported");
        static const int OperationAborted_HASH = HashingUtils::HashString("OperationAborted");
        static const int OutdatedGateway_HASH = HashingUtils::HashString("OutdatedGateway");
        static const int ParametersNotImplemented_HASH = HashingUtils::HashString("ParametersNotImplemented");
        static const int RegionInvalid_HASH = HashingUtils::HashString("RegionInvalid");
        static const int RequestTimeout_HASH = HashingUtils::HashString("RequestTimeout");
        static const int ServiceUnavailable_HASH = HashingUtils::HashString("ServiceUnavailable");
        static const int SnapshotDeleted_HASH = HashingUtils::HashString("SnapshotDeleted");
        static const int SnapshotIdInvalid_HASH = HashingUtils::HashString("SnapshotIdInvalid");
        static const int SnapshotInProgress_HASH = HashingUtils::HashString("SnapshotInProgress");
        static const int SnapshotNotFound_HASH = HashingUtils::HashString("SnapshotNotFound");
        static const int SnapshotScheduleNotFound_HASH = HashingUtils::HashString("SnapshotScheduleNotFound");
        static const int StagingAreaFull_HASH = HashingUtils::HashString("StagingAreaFull");
        static const int StorageFailure_HASH = HashingUtils::HashString("StorageFailure");
        static const int TapeCartridgeNotFound_HASH = HashingUtils::HashString("TapeCartridgeNotFound");
        static const int TargetAlreadyExists_HASH = HashingUtils::HashString("TargetAlreadyExists");
        static const int TargetInvalid_HASH = HashingUtils::HashString("TargetInvalid");
        static const int TargetNotFound_HASH = HashingUtils::HashString("TargetNotFound");
        static const int UnauthorizedOperation_HASH = HashingUtils::HashString("UnauthorizedOperation");
        static const int VolumeAlreadyExists_HASH = HashingUtils::HashString("VolumeAlreadyExists");
        static const int VolumeIdInvalid_HASH = HashingUtils::HashString("VolumeIdInvalid");
        static const int VolumeInUse_HASH = HashingUtils::HashString("VolumeInUse");
        static const int VolumeNotFound_HASH = HashingUtils::HashString("VolumeNotFound");
        static const int VolumeNotReady_HASH = HashingUtils::HashString("VolumeNotReady");


        ErrorCode GetErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ActivationKeyExpired_HASH)
          {
            return ErrorCode::ActivationKeyExpired;
          }
          else if (hashCode == ActivationKeyInvalid_HASH)
          {
            return ErrorCode::ActivationKeyInvalid;
          }
          else if (hashCode == ActivationKeyNotFound_HASH)
          {
            return ErrorCode::ActivationKeyNotFound;
          }
          else if (hashCode == GatewayInternalError_HASH)
          {
            return ErrorCode::GatewayInternalError;
          }
          else if (hashCode == GatewayNotConnected_HASH)
          {
            return ErrorCode::GatewayNotConnected;
          }
          else if (hashCode == GatewayNotFound_HASH)
          {
            return ErrorCode::GatewayNotFound;
          }
          else if (hashCode == GatewayProxyNetworkConnectionBusy_HASH)
          {
            return ErrorCode::GatewayProxyNetworkConnectionBusy;
          }
          else if (hashCode == AuthenticationFailure_HASH)
          {
            return ErrorCode::AuthenticationFailure;
          }
          else if (hashCode == BandwidthThrottleScheduleNotFound_HASH)
          {
            return ErrorCode::BandwidthThrottleScheduleNotFound;
          }
          else if (hashCode == Blocked_HASH)
          {
            return ErrorCode::Blocked;
          }
          else if (hashCode == CannotExportSnapshot_HASH)
          {
            return ErrorCode::CannotExportSnapshot;
          }
          else if (hashCode == ChapCredentialNotFound_HASH)
          {
            return ErrorCode::ChapCredentialNotFound;
          }
          else if (hashCode == DiskAlreadyAllocated_HASH)
          {
            return ErrorCode::DiskAlreadyAllocated;
          }
          else if (hashCode == DiskDoesNotExist_HASH)
          {
            return ErrorCode::DiskDoesNotExist;
          }
          else if (hashCode == DiskSizeGreaterThanVolumeMaxSize_HASH)
          {
            return ErrorCode::DiskSizeGreaterThanVolumeMaxSize;
          }
          else if (hashCode == DiskSizeLessThanVolumeSize_HASH)
          {
            return ErrorCode::DiskSizeLessThanVolumeSize;
          }
          else if (hashCode == DiskSizeNotGigAligned_HASH)
          {
            return ErrorCode::DiskSizeNotGigAligned;
          }
          else if (hashCode == DuplicateCertificateInfo_HASH)
          {
            return ErrorCode::DuplicateCertificateInfo;
          }
          else if (hashCode == DuplicateSchedule_HASH)
          {
            return ErrorCode::DuplicateSchedule;
          }
          else if (hashCode == EndpointNotFound_HASH)
          {
            return ErrorCode::EndpointNotFound;
          }
          else if (hashCode == IAMNotSupported_HASH)
          {
            return ErrorCode::IAMNotSupported;
          }
          else if (hashCode == InitiatorInvalid_HASH)
          {
            return ErrorCode::InitiatorInvalid;
          }
          else if (hashCode == InitiatorNotFound_HASH)
          {
            return ErrorCode::InitiatorNotFound;
          }
          else if (hashCode == InternalError_HASH)
          {
            return ErrorCode::InternalError;
          }
          else if (hashCode == InvalidGateway_HASH)
          {
            return ErrorCode::InvalidGateway;
          }
          else if (hashCode == InvalidEndpoint_HASH)
          {
            return ErrorCode::InvalidEndpoint;
          }
          else if (hashCode == InvalidParameters_HASH)
          {
            return ErrorCode::InvalidParameters;
          }
          else if (hashCode == InvalidSchedule_HASH)
          {
            return ErrorCode::InvalidSchedule;
          }
          else if (hashCode == LocalStorageLimitExceeded_HASH)
          {
            return ErrorCode::LocalStorageLimitExceeded;
          }
          else if (hashCode == LunAlreadyAllocated_HASH)
          {
            return ErrorCode::LunAlreadyAllocated;
          }
          else if (hashCode == LunInvalid_HASH)
          {
            return ErrorCode::LunInvalid;
          }
          else if (hashCode == MaximumContentLengthExceeded_HASH)
          {
            return ErrorCode::MaximumContentLengthExceeded;
          }
          else if (hashCode == MaximumTapeCartridgeCountExceeded_HASH)
          {
            return ErrorCode::MaximumTapeCartridgeCountExceeded;
          }
          else if (hashCode == MaximumVolumeCountExceeded_HASH)
          {
            return ErrorCode::MaximumVolumeCountExceeded;
          }
          else if (hashCode == NetworkConfigurationChanged_HASH)
          {
            return ErrorCode::NetworkConfigurationChanged;
          }
          else if (hashCode == NoDisksAvailable_HASH)
          {
            return ErrorCode::NoDisksAvailable;
          }
          else if (hashCode == NotImplemented_HASH)
          {
            return ErrorCode::NotImplemented;
          }
          else if (hashCode == NotSupported_HASH)
          {
            return ErrorCode::NotSupported;
          }
          else if (hashCode == OperationAborted_HASH)
          {
            return ErrorCode::OperationAborted;
          }
          else if (hashCode == OutdatedGateway_HASH)
          {
            return ErrorCode::OutdatedGateway;
          }
          else if (hashCode == ParametersNotImplemented_HASH)
          {
            return ErrorCode::ParametersNotImplemented;
          }
          else if (hashCode == RegionInvalid_HASH)
          {
            return ErrorCode::RegionInvalid;
          }
          else if (hashCode == RequestTimeout_HASH)
          {
            return ErrorCode::RequestTimeout;
          }
          else if (hashCode == ServiceUnavailable_HASH)
          {
            return ErrorCode::ServiceUnavailable;
          }
          else if (hashCode == SnapshotDeleted_HASH)
          {
            return ErrorCode::SnapshotDeleted;
          }
          else if (hashCode == SnapshotIdInvalid_HASH)
          {
            return ErrorCode::SnapshotIdInvalid;
          }
          else if (hashCode == SnapshotInProgress_HASH)
          {
            return ErrorCode::SnapshotInProgress;
          }
          else if (hashCode == SnapshotNotFound_HASH)
          {
            return ErrorCode::SnapshotNotFound;
          }
          else if (hashCode == SnapshotScheduleNotFound_HASH)
          {
            return ErrorCode::SnapshotScheduleNotFound;
          }
          else if (hashCode == StagingAreaFull_HASH)
          {
            return ErrorCode::StagingAreaFull;
          }
          else if (hashCode == StorageFailure_HASH)
          {
            return ErrorCode::StorageFailure;
          }
          else if (hashCode == TapeCartridgeNotFound_HASH)
          {
            return ErrorCode::TapeCartridgeNotFound;
          }
          else if (hashCode == TargetAlreadyExists_HASH)
          {
            return ErrorCode::TargetAlreadyExists;
          }
          else if (hashCode == TargetInvalid_HASH)
          {
            return ErrorCode::TargetInvalid;
          }
          else if (hashCode == TargetNotFound_HASH)
          {
            return ErrorCode::TargetNotFound;
          }
          else if (hashCode == UnauthorizedOperation_HASH)
          {
            return ErrorCode::UnauthorizedOperation;
          }
          else if (hashCode == VolumeAlreadyExists_HASH)
          {
            return ErrorCode::VolumeAlreadyExists;
          }
          else if (hashCode == VolumeIdInvalid_HASH)
          {
            return ErrorCode::VolumeIdInvalid;
          }
          else if (hashCode == VolumeInUse_HASH)
          {
            return ErrorCode::VolumeInUse;
          }
          else if (hashCode == VolumeNotFound_HASH)
          {
            return ErrorCode::VolumeNotFound;
          }
          else if (hashCode == VolumeNotReady_HASH)
          {
            return ErrorCode::VolumeNotReady;
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
          case ErrorCode::ActivationKeyExpired:
            return "ActivationKeyExpired";
          case ErrorCode::ActivationKeyInvalid:
            return "ActivationKeyInvalid";
          case ErrorCode::ActivationKeyNotFound:
            return "ActivationKeyNotFound";
          case ErrorCode::GatewayInternalError:
            return "GatewayInternalError";
          case ErrorCode::GatewayNotConnected:
            return "GatewayNotConnected";
          case ErrorCode::GatewayNotFound:
            return "GatewayNotFound";
          case ErrorCode::GatewayProxyNetworkConnectionBusy:
            return "GatewayProxyNetworkConnectionBusy";
          case ErrorCode::AuthenticationFailure:
            return "AuthenticationFailure";
          case ErrorCode::BandwidthThrottleScheduleNotFound:
            return "BandwidthThrottleScheduleNotFound";
          case ErrorCode::Blocked:
            return "Blocked";
          case ErrorCode::CannotExportSnapshot:
            return "CannotExportSnapshot";
          case ErrorCode::ChapCredentialNotFound:
            return "ChapCredentialNotFound";
          case ErrorCode::DiskAlreadyAllocated:
            return "DiskAlreadyAllocated";
          case ErrorCode::DiskDoesNotExist:
            return "DiskDoesNotExist";
          case ErrorCode::DiskSizeGreaterThanVolumeMaxSize:
            return "DiskSizeGreaterThanVolumeMaxSize";
          case ErrorCode::DiskSizeLessThanVolumeSize:
            return "DiskSizeLessThanVolumeSize";
          case ErrorCode::DiskSizeNotGigAligned:
            return "DiskSizeNotGigAligned";
          case ErrorCode::DuplicateCertificateInfo:
            return "DuplicateCertificateInfo";
          case ErrorCode::DuplicateSchedule:
            return "DuplicateSchedule";
          case ErrorCode::EndpointNotFound:
            return "EndpointNotFound";
          case ErrorCode::IAMNotSupported:
            return "IAMNotSupported";
          case ErrorCode::InitiatorInvalid:
            return "InitiatorInvalid";
          case ErrorCode::InitiatorNotFound:
            return "InitiatorNotFound";
          case ErrorCode::InternalError:
            return "InternalError";
          case ErrorCode::InvalidGateway:
            return "InvalidGateway";
          case ErrorCode::InvalidEndpoint:
            return "InvalidEndpoint";
          case ErrorCode::InvalidParameters:
            return "InvalidParameters";
          case ErrorCode::InvalidSchedule:
            return "InvalidSchedule";
          case ErrorCode::LocalStorageLimitExceeded:
            return "LocalStorageLimitExceeded";
          case ErrorCode::LunAlreadyAllocated:
            return "LunAlreadyAllocated ";
          case ErrorCode::LunInvalid:
            return "LunInvalid";
          case ErrorCode::MaximumContentLengthExceeded:
            return "MaximumContentLengthExceeded";
          case ErrorCode::MaximumTapeCartridgeCountExceeded:
            return "MaximumTapeCartridgeCountExceeded";
          case ErrorCode::MaximumVolumeCountExceeded:
            return "MaximumVolumeCountExceeded";
          case ErrorCode::NetworkConfigurationChanged:
            return "NetworkConfigurationChanged";
          case ErrorCode::NoDisksAvailable:
            return "NoDisksAvailable";
          case ErrorCode::NotImplemented:
            return "NotImplemented";
          case ErrorCode::NotSupported:
            return "NotSupported";
          case ErrorCode::OperationAborted:
            return "OperationAborted";
          case ErrorCode::OutdatedGateway:
            return "OutdatedGateway";
          case ErrorCode::ParametersNotImplemented:
            return "ParametersNotImplemented";
          case ErrorCode::RegionInvalid:
            return "RegionInvalid";
          case ErrorCode::RequestTimeout:
            return "RequestTimeout";
          case ErrorCode::ServiceUnavailable:
            return "ServiceUnavailable";
          case ErrorCode::SnapshotDeleted:
            return "SnapshotDeleted";
          case ErrorCode::SnapshotIdInvalid:
            return "SnapshotIdInvalid";
          case ErrorCode::SnapshotInProgress:
            return "SnapshotInProgress";
          case ErrorCode::SnapshotNotFound:
            return "SnapshotNotFound";
          case ErrorCode::SnapshotScheduleNotFound:
            return "SnapshotScheduleNotFound";
          case ErrorCode::StagingAreaFull:
            return "StagingAreaFull";
          case ErrorCode::StorageFailure:
            return "StorageFailure";
          case ErrorCode::TapeCartridgeNotFound:
            return "TapeCartridgeNotFound";
          case ErrorCode::TargetAlreadyExists:
            return "TargetAlreadyExists";
          case ErrorCode::TargetInvalid:
            return "TargetInvalid";
          case ErrorCode::TargetNotFound:
            return "TargetNotFound";
          case ErrorCode::UnauthorizedOperation:
            return "UnauthorizedOperation";
          case ErrorCode::VolumeAlreadyExists:
            return "VolumeAlreadyExists";
          case ErrorCode::VolumeIdInvalid:
            return "VolumeIdInvalid";
          case ErrorCode::VolumeInUse:
            return "VolumeInUse";
          case ErrorCode::VolumeNotFound:
            return "VolumeNotFound";
          case ErrorCode::VolumeNotReady:
            return "VolumeNotReady";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ErrorCodeMapper
    } // namespace Model
  } // namespace StorageGateway
} // namespace Aws
