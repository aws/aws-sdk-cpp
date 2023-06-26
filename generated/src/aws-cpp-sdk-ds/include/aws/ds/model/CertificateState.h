/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{
  enum class CertificateState
  {
    NOT_SET,
    Registering,
    Registered,
    RegisterFailed,
    Deregistering,
    Deregistered,
    DeregisterFailed
  };

namespace CertificateStateMapper
{
AWS_DIRECTORYSERVICE_API CertificateState GetCertificateStateForName(const Aws::String& name);

AWS_DIRECTORYSERVICE_API Aws::String GetNameForCertificateState(CertificateState value);
} // namespace CertificateStateMapper
} // namespace Model
} // namespace DirectoryService
} // namespace Aws
