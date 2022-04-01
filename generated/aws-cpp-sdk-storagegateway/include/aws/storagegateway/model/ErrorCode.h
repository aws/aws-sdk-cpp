/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{
  enum class ErrorCode
  {
    NOT_SET,
    ActivationKeyExpired,
    ActivationKeyInvalid,
    ActivationKeyNotFound,
    GatewayInternalError,
    GatewayNotConnected,
    GatewayNotFound,
    GatewayProxyNetworkConnectionBusy,
    AuthenticationFailure,
    BandwidthThrottleScheduleNotFound,
    Blocked,
    CannotExportSnapshot,
    ChapCredentialNotFound,
    DiskAlreadyAllocated,
    DiskDoesNotExist,
    DiskSizeGreaterThanVolumeMaxSize,
    DiskSizeLessThanVolumeSize,
    DiskSizeNotGigAligned,
    DuplicateCertificateInfo,
    DuplicateSchedule,
    EndpointNotFound,
    IAMNotSupported,
    InitiatorInvalid,
    InitiatorNotFound,
    InternalError,
    InvalidGateway,
    InvalidEndpoint,
    InvalidParameters,
    InvalidSchedule,
    LocalStorageLimitExceeded,
    LunAlreadyAllocated,
    LunInvalid,
    JoinDomainInProgress,
    MaximumContentLengthExceeded,
    MaximumTapeCartridgeCountExceeded,
    MaximumVolumeCountExceeded,
    NetworkConfigurationChanged,
    NoDisksAvailable,
    NotImplemented,
    NotSupported,
    OperationAborted,
    OutdatedGateway,
    ParametersNotImplemented,
    RegionInvalid,
    RequestTimeout,
    ServiceUnavailable,
    SnapshotDeleted,
    SnapshotIdInvalid,
    SnapshotInProgress,
    SnapshotNotFound,
    SnapshotScheduleNotFound,
    StagingAreaFull,
    StorageFailure,
    TapeCartridgeNotFound,
    TargetAlreadyExists,
    TargetInvalid,
    TargetNotFound,
    UnauthorizedOperation,
    VolumeAlreadyExists,
    VolumeIdInvalid,
    VolumeInUse,
    VolumeNotFound,
    VolumeNotReady
  };

namespace ErrorCodeMapper
{
AWS_STORAGEGATEWAY_API ErrorCode GetErrorCodeForName(const Aws::String& name);

AWS_STORAGEGATEWAY_API Aws::String GetNameForErrorCode(ErrorCode value);
} // namespace ErrorCodeMapper
} // namespace Model
} // namespace StorageGateway
} // namespace Aws
