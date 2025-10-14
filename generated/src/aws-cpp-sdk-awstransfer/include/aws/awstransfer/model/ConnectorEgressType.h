/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Transfer
{
namespace Model
{
  enum class ConnectorEgressType
  {
    NOT_SET,
    SERVICE_MANAGED,
    VPC_LATTICE
  };

namespace ConnectorEgressTypeMapper
{
AWS_TRANSFER_API ConnectorEgressType GetConnectorEgressTypeForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForConnectorEgressType(ConnectorEgressType value);
} // namespace ConnectorEgressTypeMapper
} // namespace Model
} // namespace Transfer
} // namespace Aws
